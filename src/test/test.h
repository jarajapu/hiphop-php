/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __TEST_H__
#define __TEST_H__

#include <compiler/hphp.h>
#include <test/test_logger.h>
#include <test/test_base.h>

///////////////////////////////////////////////////////////////////////////////

class Test {
public:
  static int s_total;
  static int s_passed;
  static int s_skipped;
  static bool s_quiet; // less printf, good for nightly unit test runs
  static TestLogger logger;

public:
  Test() {}

  bool RunTests(std::string &suite, std::string &which, std::string &set);

  bool logTestResults(std::string name, std::string details, int pass,
                      int fail, int skip);

private:
  void RunTestsImpl(bool &allPassed, std::string &suite, std::string &which,
                    std::string &set);

  struct timeval start, finish;
};

///////////////////////////////////////////////////////////////////////////////

#define RUN_TESTSUITE(name)                                             \
  if (suite.empty() || suite == #name) {                                \
    if (!s_quiet) {                                                     \
      printf(#name "......\n\n");                                       \
    }                                                                   \
    name test;                                                          \
    test.pass_count = 0;                                                \
    test.fail_count = 0;                                                \
    test.skip_count = 0;                                                \
    test.error_messages = "";                                           \
    gettimeofday(&start, NULL);                                         \
    if (test.RunTests(which)) {                                         \
      if (!s_quiet) {                                                   \
        printf("\n" #name " OK\n\n");                                   \
      }                                                                 \
    } else {                                                            \
      printf("\n" #name " #####>>> FAILED <<< #####\n\n");              \
      allPassed = false;                                                \
    }                                                                   \
    gettimeofday(&finish, NULL);                                        \
                                                                        \
    logTestResults(#name, test.error_messages, test.pass_count,         \
                   test.fail_count, test.skip_count);                   \
  }                                                                     \

#ifdef SEP_EXTENSION
#define IMPLEMENT_SEP_EXTENSION_TEST(name)                              \
  void Test::RunTestsImpl(bool &allPassed, std::string &suite,          \
                          std::string &which, std::string &set) {       \
    RUN_TESTSUITE(TestExt ## name);                                     \
  }
#else
#define IMPLEMENT_SEP_EXTENSION_TEST(name)
#endif

///////////////////////////////////////////////////////////////////////////////

#endif // __TEST_H__
