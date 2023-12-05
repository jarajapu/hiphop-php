<?hh
// generated by idl-to-hni.php

/** This function returns an array with the current available SPL classes.
 * @return array - Returns an array containing the currently available SPL
 * classes.
 */
function spl_classes(): darray<classname<mixed>, classname<mixed>> {
  return dict[
    /* HH_FIXME[2049] */
    ArrayIterator::class => ArrayIterator::class,
    /* HH_FIXME[2049] */
    BadFunctionCallException::class => BadFunctionCallException::class,
    /* HH_FIXME[2049] */
    BadMethodCallException::class => BadMethodCallException::class,
    /* HH_FIXME[2049] */
    Countable::class => Countable::class,
    /* HH_FIXME[2049] */
    DirectoryIterator::class => DirectoryIterator::class,
    /* HH_FIXME[2049] */
    DomainException::class => DomainException::class,
    /* HH_FIXME[2049] */
    EmptyIterator::class => EmptyIterator::class,
    /* HH_FIXME[2049] */
    FilesystemIterator::class => FilesystemIterator::class,
    /* HH_FIXME[2049] */
    FilterIterator::class => FilterIterator::class,
    /* HH_FIXME[2049] */
    GlobIterator::class => GlobIterator::class,
    /* HH_FIXME[2049] */
    InfiniteIterator::class => InfiniteIterator::class,
    /* HH_FIXME[2049] */
    InvalidArgumentException::class => InvalidArgumentException::class,
    /* HH_FIXME[2049] */
    IteratorIterator::class => IteratorIterator::class,
    /* HH_FIXME[2049] */
    LengthException::class => LengthException::class,
    /* HH_FIXME[2049] */
    LogicException::class => LogicException::class,
    /* HH_FIXME[2049] */
    NoRewindIterator::class => NoRewindIterator::class,
    /* HH_FIXME[2049] */
    OuterIterator::class => OuterIterator::class,
    /* HH_FIXME[2049] */
    OutOfBoundsException::class => OutOfBoundsException::class,
    /* HH_FIXME[2049] */
    OutOfRangeException::class => OutOfRangeException::class,
    /* HH_FIXME[2049] */
    OverflowException::class => OverflowException::class,
    /* HH_FIXME[2049] */
    RangeException::class => RangeException::class,
    /* HH_FIXME[2049] */
    RecursiveDirectoryIterator::class => RecursiveDirectoryIterator::class,
    /* HH_FIXME[2049] */
    RecursiveFilterIterator::class => RecursiveFilterIterator::class,
    /* HH_FIXME[2049] */
    RecursiveIterator::class => RecursiveIterator::class,
    /* HH_FIXME[2049] */
    RecursiveIteratorIterator::class => RecursiveIteratorIterator::class,
    /* HH_FIXME[2049] */
    RecursiveRegexIterator::class => RecursiveRegexIterator::class,
    /* HH_FIXME[2049] */
    RegexIterator::class => RegexIterator::class,
    /* HH_FIXME[2049] */
    RuntimeException::class => RuntimeException::class,
    /* HH_FIXME[2049] */
    SeekableIterator::class => SeekableIterator::class,
    /* HH_FIXME[2049] */
    SplDoublyLinkedList::class => SplDoublyLinkedList::class,
    /* HH_FIXME[2049] */
    SplFileInfo::class => SplFileInfo::class,
    /* HH_FIXME[2049] */
    SplFileObject::class => SplFileObject::class,
    /* HH_FIXME[2049] */
    SplHeap::class => SplHeap::class,
    /* HH_FIXME[2049] */
    SplMinHeap::class => SplMinHeap::class,
    /* HH_FIXME[2049] */
    SplMaxHeap::class => SplMaxHeap::class,
    /* HH_FIXME[2049] */
    SplObserver::class => SplObserver::class,
    /* HH_FIXME[2049] */
    SplPriorityQueue::class => SplPriorityQueue::class,
    /* HH_FIXME[2049] */
    SplQueue::class => SplQueue::class,
    /* HH_FIXME[2049] */
    SplStack::class => SplStack::class,
    /* HH_FIXME[2049] */
    SplSubject::class => SplSubject::class,
    /* HH_FIXME[2049] */
    SplTempFileObject::class => SplTempFileObject::class,
    /* HH_FIXME[2049] */
    UnderflowException::class => UnderflowException::class,
    /* HH_FIXME[2049] */
    UnexpectedValueException::class => UnexpectedValueException::class,
  ];
}

/** This function returns a unique identifier for the object. This id can be
 * used as a hash key for storing objects or for identifying an object.
 * @param object $obj - Any object.
 * @return string - A string that is unique for each currently existing object
 * and is always the same for each object.
 */
<<__Native>>
function spl_object_hash(readonly object $obj)[]: string;

/** This function returns low level raw pointer the object. Used by closure and
 * internal purposes.
 * @param object $obj - Any object.
 * @return int - Low level ObjectData pointer.
 */
<<__Native("NoInjection")>>
function hphp_object_pointer(object $obj): int;

/** This function returns this object if present, or NULL.
 * @return mixed - This object.
 */
<<__Native("NoInjection")>>
function hphp_get_this(): mixed;

/** This function returns an array with the names of the interfaces that the
 * given class and its parents implement.
 * @param mixed $obj - An object (class instance) or a string (class name).
 * @param bool $autoload - Whether to allow this function to load the class
 * automatically.
 * @return mixed - An array on success, or FALSE on error.
 */
<<__Native>>
function class_implements(mixed $obj,
                          bool $autoload = true)[]: mixed;

/** This function returns an array with the name of the parent classes of the
 * given class.
 * @param mixed $obj - An object (class instance) or a string (class name).
 * @param bool $autoload - Whether to allow this function to load the class
 * automatically.
 * @return mixed - An array on success, or FALSE on error.
 */
<<__Native>>
function class_parents(mixed $obj,
                       bool $autoload = true)[]: mixed;

/** This function returns an array with the names of the traits that the given
 * class uses.
 * @param mixed $obj - An object (class instance) or a string (class name).
 * @param bool $autoload - Whether to allow this function to load the class
 * automatically.
 * @return mixed - An array on success, or FALSE on error.
 */
<<__Native>>
function class_uses(mixed $obj,
                    bool $autoload = true)[]: mixed;

/** Calls a function for every element in an iterator.
 * @param mixed $obj - The class to iterate over.
 * @param mixed $func - The callback function to call on every element. The
 * function must return TRUE in order to continue iterating over the iterator.
 * @param array $params - Arguments to pass to the callback function.
 * @return mixed - Returns the iteration count.
 */
function iterator_apply(
  mixed $obj,
  dynamic $func,
  varray<dynamic> $params = vec[]
): int {
  if (!is_object($obj) || !($obj is \HH\Traversable<_>)) {
    trigger_error("Argument must implement interface Traversable", E_RECOVERABLE_ERROR);
    return 0;
  }
  $count = 0;
  foreach ($obj as $v) {
    if ($func(...$params) !== true) {
      break;
    }
    ++$count;
  }
  return $count;
}

/** Count the elements in an iterator.
 * @param mixed $obj - The iterator being counted.
 * @return mixed - The number of elements in iterator.
 */
function iterator_count(mixed $obj): mixed {
  if (!is_object($obj) || !($obj is \HH\Traversable<_>)) {
    trigger_error("Argument must implement interface Traversable", E_RECOVERABLE_ERROR);
    return 0;
  }
  $count = 0;
  foreach ($obj as $_) {
    ++$count;
  }
  return $count;
}

/** Copy the elements of an iterator into an array.
 * @param mixed $obj - The iterator being copied.
 * @param bool $use_keys - Whether to use the iterator element keys as index.
 * @return mixed - An array containing the elements of the iterator.
 */
function iterator_to_array(mixed $obj, bool $use_keys = true): mixed {
  if (!is_object($obj) || !($obj is \HH\Traversable<_>)) {
    trigger_error("Argument must implement interface Traversable", E_RECOVERABLE_ERROR);
    return 0;
  }
  $ret = dict[];
  if ($use_keys) {
    foreach (
      HH\FIXME\UNSAFE_CAST<
        Traversable<mixed>,
        KeyedTraversable<arraykey, mixed>
      >(
        $obj,
        "We only check that the input is a `Traversable<_>` not a ".
        "`KeyedTraversable<_, _>`"
      ) as $k => $v
    ) {
      $ret[$k] = $v;
    }
  } else {
    $i = 0;
    foreach ($obj as $v) {
      $ret[$i] = $v;
      $i++;
    }
  }
  return $ret;
}
