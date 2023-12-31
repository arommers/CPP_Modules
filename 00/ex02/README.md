<div align=center>
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg" width="150" height="150" />
</div>

## The Job of Your Dreams
Well, we finally made it. Our first job as a software engineer. The orginization however is an absolute mess that is only outdone by their data management.
Files are missing left and right. Particularly, a function definition file of some financial accounts. Befitting of our position, we have to fix this. Probably because no one else wants to.

Our objective is to resurrect a missing file using available resources: The surviving header file, Account.hpp, and a detailed log file.
The header file contains the declarations for all our functions and the log file what these files will output.  

Armed with this information we have to reverse engineer the lost definition file, Account.cpp.

---

## Key Concepts
### Static Members: 
Members of a class that are shared among all instances (objects) of that class rather than being specific to each object. These members exist at the class level, and there is only one copy of them, regardless of how many instances of the class are created.

#### Attributes:
- **Shared Across Instances:** Static members are shared among all instances of a class.
  They are not tied to a particular object but are associated with the class as a whole.
- **Declared with static Keyword:** Static members are declared using the static keyword within the class definition.
- **Accessed Using Class Name:**  As static members are associated with the class, they are accessed using the class name followed by the scope resolution operator (::).
- **Initialization Outside Class:** Static data members can be initialized outside the class, typically in the implementation(.cpp), and this initialization occurs only once.
- **Common Use Cases:** Static members are often used for attributes or behaviors that are common to all instances of a class, such as maintaining a count of objects or sharing data among instances.
  In our case it's keeping track of our individual account numbers and the flow of money in these accounts.

**An example of static members declared in our header(left) and their initialization in the 'Account.cpp' file(right).*

<div align=center>
  <img src="https://i.imgur.com/eF1qc0S.png">
</div>

### Vectors: 
A vector is a dynamic array that can grow or shrink in size, providing a flexible and efficient way to store and manipulate collections of elements. 
Vectors are part of the Standard Template Library (STL) and are defined in the <vector> header. 

#### Attributes:
- **Dynamic Array:** Vectors in C++ are dynamic arrays that can grow or shrink in size during runtime.
- **Automatic Memory Management:** Vectors handle memory allocation and deallocation automatically, making manual memory management unnecessary.
- **Standard Template Library (STL):** Vectors are part of the Standard Template Library (STL) and are defined in the <vector> header.
- **Declaration and Initialization:** Declare a vector using the std::vector template, specifying the type.
  Vectors can be initialized with an existing array or with an initializer list.

  An example:

  ```
  #include <vector>

  std::vector<int> myVector;                   // Declaration of a vector of integers
  std::vector<int> numbers = {1, 2, 3, 4, 5};  // Initialization from an initialization list
  ```

In this assignment we work with the vectors that are given to us in the tests.cpp file:

```
typedef std::vector<Account::t>						                  accounts_t;
typedef std::vector<int>								                    ints_t;
typedef std::pair<accounts_t::iterator, ints_t::iterator>   acc_int_t
```

---

### Reverse Engineering

To construct our Account.cpp file we use the log file to keep track of when what specific function is called. The tests.cpp file roughly tells us how the instances of account classes are initialized and altered. The lines of output in the log file are either constructors/destructors, withdrawals/deposits or display functions. The trick is to write the function definitions in such a way, that our output matches the log file exaclty(not including the timestamp).

<div align=center>
  <img src="https://i.imgur.com/7RodFpK.png">
</div>

**This snippet of the log file shows the output of eight accounts being constructed, followed by a line displaying their shared data and    some lines containing deposit actions.*

To get the exact output we constructed our function in such a way that they aligned with the for loops that are executed in the main/tests.cpp file:

```
void	Account::makeDeposit(int deposit)
{
  _nbDeposits++;
  _displayTimestamp();
  std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount;
  std::cout << ";deposit:" << deposit << ";amount:" << this->_amount + deposit;
  std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
  this->_amount += deposit;
  _totalAmount += deposit;
  _totalNbDeposits++;
}
```

This function will be called to make deposits for the current account, signified by the first parameter of the pair. The amount is signified by the second.

```
	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) ); <<< The actual function
```

Our handling of the withdrawal and display functions are similar and that Is how we resurrect the missing file from the dead. Making it exactly formatted to the example file is secondary to make sure the right amounts get adjusted for the right accounts.

---
### Quick Links  

#### [Home](https://github.com/arommers/CPP_Modules)
#### [Module 00](https://github.com/arommers/CPP_Modules/tree/master/00)

#### [Module 01](https://github.com/arommers/CPP_Modules/tree/master/01)

#### [Module 02](https://github.com/arommers/CPP_Modules/tree/master/02)

#### [Module 03](https://github.com/arommers/CPP_Modules/tree/master/03)

#### [Module 04](https://github.com/arommers/CPP_Modules/tree/master/04)
