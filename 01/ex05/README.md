<div align=center>
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg" width="150" height="150" />
</div>

## Harl 2.0
So I'll have to be honest and admit that I have no idea what the titular 'Harl' in this assignment is or should represent. My best guess is that it is some off brand reference to the semi-sentient software 'Hal' from the movie 2001: A space oddity. A piece of software that spouts different levels of warning errors based on the state of things, I guess....  

The levels of messages it produces are:
- **DEBUG** level: Debug messages contain contextual information. They are mostly
  used for problem diagnosis.
- **INFO** level: These messages contain extensive information. They are helpful for
  tracing program execution in a production environment.
- **WARNING** level: Warning messages indicate a potential issue in the system.
  However, it can be handled or ignored.
- **ERROR** level: These messages indicate an unrecoverable error has occurred.
  This is usually a critical issue that requires manual intervention.

To make the assignment even more confusing 'Harl' seems to be slurring about bacon or something random. Luckily, the contents of the error messages are actually irrelevant. They each display a different message when invoked.  

What is important to us is, how they are invoked, through pointers.


---

### Function Pointers

In C++, just like pointers to variables, pointers to function allow us to store the address of a function in a variable, and later use that variable to invoke the function.  

A function is  not a data type in the same sense as an int, float, or other primitive data types. However, functions do have addresses in memory, just like variables. The address of a function is essentially the location in memory where the machine code for that function is stored when it is declared.

When we declare a function in C++, the compiler translates that function into machine code and allocates memory for it. The address of the function is the starting point of this allocated memory. We can think of the address of a function as the entry point to the sequence of machine code instructions that make up that function.

When we declare a pointer to a variable we declare it as this:  

`data_type *var_name`

As you probably know, dataype is the pointer that stores the memory address for the variable var_name.

A function pointer declaration differs a little bit in it's syntax declaration:  

`return_type (*FunctionPtr)() = &randomFunction`

In this example, FunctionPtr is a pointer to a function that takes no arguments and returns 'return type', which can be an int, string, void etc. The &randomFunction part assigns the address of randomFunction to functionPtr.  Now functionPtr "points to" or "holds the address of" myFunction. Later we can then use this pointer to call the function:

`functionPtr()`

#### Harl's messages

In our code we have four different functions, one for each message and we store their addresses in an array. The functions themselves have been declared beforehand.
We then use a for loop in our complain function to call the corresponding function through a pointer. 

<div align="center">
  <img src="https://i.imgur.com/TTOTXTk.png">
</div>

**We use the array of level strings to make sure that we get the correct message function. Also pay attention to the fact that we have to dereference the pointer to get the correct value (the address), since we are using an array*

---
### Quick Links  

#### [Home](https://github.com/arommers/CPP_Modules)
#### [Module 00](https://github.com/arommers/CPP_Modules/tree/master/00)

#### [Module 01](https://github.com/arommers/CPP_Modules/tree/master/01)

#### [Module 02](https://github.com/arommers/CPP_Modules/tree/master/02)

#### [Module 03](https://github.com/arommers/CPP_Modules/tree/master/03)

#### [Module 04](https://github.com/arommers/CPP_Modules/tree/master/04)
