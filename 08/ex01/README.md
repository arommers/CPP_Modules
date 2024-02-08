<div align=center>
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg" width="150" height="150" />
</div>

## Span
Continuing with iterators.  

Not much is added to our previous implementation of iterators. Once again we combine iterators with functions from the algorithm library.  Instead of moving our iterators, we declare the range of values that need to be considered.  

Examples used in this assignment:

* `std::sort(temp.begin(), temp.end())` Sorts every value in the container in the ascending order.
* `std::generate(beginIter, endIter, []())`* Generate a value for each element
* `std::minmax_element(_container.begin(), _container.end())` Return a pair of iterators point to the smallest and biggest value in the container

**The third argument for generate can be a function pointer or a function object. I chose to use a lambda/anonymous function*
