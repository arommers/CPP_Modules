<div align=center>
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg" width="150" height="150" />
</div>

## Mutant Stack: Iterator overloading

The MutantStack class is a custom stack implementation, derived from the standard std::stack class with a std::vector as its underlying container. By "mutating" the stack class and overloading iterator functions we provides additional iterator-based access to its elements. Something that a stack inherently cannot do.  

Maybe unnecessary, but we typedef our to typedef typename std::vector<T>::iterator iterator, so we can then declare them as just iterator.

* `iterator begin() {return this->c.begin();}`
* `iterator end() {return this->c.end();}`

The MutantStack class overloads the `begin()` and `end()` functions to provide iterators for traversing its elements.
These functions return iterators pointing to the beginning and the end of the underlying std::vector, respectively.
This allows us to iterate over the elements of the MutantStack using standard iterator-based constructs, such as range-based loops or algorithms from the standard library.

`this->c.begin()`

In this context, c refers to the underlying container (std::vector) of the MutantStack.
The std::stack class is implemented as an adapter, which means it encapsulates an instance of another container type (std::vector in our case).
The c member variable provides access to this underlying container, allowing direct manipulation or access to its elements within the MutantStack class.
