# Containers in C++

C++ Standard Library provides several container classes, each designed for specific uses. Some of the commonly used ones include:

- _std::vector_: Dynamic array that grows or shrinks as needed.
- _std::list_: Doubly linked list.
- _std::deque_: Double-ended queue.
- _std::forward_list_: Singly linked list.
- _std::set_: Collection of unique elements, sorted by keys.
- _std::map_: Collection of key-value pairs, sorted by keys, keys are unique.
- _std::multiset_: Similar to std::set, but allows duplicate elements.
- _std::multimap_: Similar to std::map, but allows duplicate keys.
- _std::unordered_set_: Collection of unique elements, hashed by keys.
- _std::unordered_map_: Collection of key-value pairs, hashed by keys.
- _std::unordered_multiset_: Similar to std::unordered_set, but allows duplicates.
- _std::unordered_multimap_: Similar to std::unordered_map, but allows duplicate keys.
- _std::stack_: Adapts a container to provide stack (LIFO) operations.
- _std::queue_: Adapts a container to provide queue (FIFO) operations.
- _std::priority_queue_: Like a regular queue, but elements are ordered by priority.

Each of these data structures has its own unique properties and use cases, and the choice of which one to use depends on the specific requirements of your program.

## Definition

The term "container" in the context of C++ programming refers to a class or a data type whose instances are collections of other objects. In other words, containers store objects and manage their lifetime based on the container's scope. They are a part of the C++ Standard Template Library (STL), which provides a rich set of container classes such as vector, list, deque, map, set, and so on. T
