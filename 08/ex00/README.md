<div align=center>
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg" width="150" height="150" />
</div>

## Easy Find
A tiny introduction to iterators.  

Iterator are objects that enable traversal through the elements of a container (such as arrays, vectors, lists, etc.) in a sequential manner. They act as pointers to elements within the container, allowing operations like incrementing, decrementing, dereferencing, and accessing elements. They play a crucial role in facilitating generic algorithms and provide a uniform interface for working with different types of containers.

A commonly used manner of iterating over a container using iterators: 

`while (container.begin() != container.end())`

The method `.begin()` returns an iterator pointing to the first element of the container and likewise `.end()` an iterator pointing to the element one past the last element in the container.
Moving the iterator in this loop happens implicitly.

The examples of algorithms that i used in conjuntion with iterators in the assignment: 

* `std::find` To look for a specific value in a container.
* `std::distance` To be able to print out at what position our matching element was found.
