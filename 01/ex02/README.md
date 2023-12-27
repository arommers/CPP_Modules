<div align=center>
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg" width="150" height="150" />
</div>

## HI THIS IS BRAIN

A small exercise where we demystify the use of references in C++. There isn't a whole lot to it so let's just take a look at what they are and how they differ from pointers.

---

### References
A reference is a way to create an alias, or an alternative name, for an existing variable. It allows you to access the same memory location using different names. References are often used for function parameters and return values.
It also prevents making unnecessary copies. Especially when working with objects that are big.  

We can define a reference variable as a type of variable that can act as a reference to another variable. The `‘&’` symbol is used for signifying the address of a variable or any memory. Variables associated with reference variables can be accessed either by its name or by the reference variable associated with it.

```
int x = 42;
int& refX = x;  // Reference to variable x
```
There are multiple applications for references in C++, a few of them:

- **Modify the passed parameters in a function**
  When a parameter is passed by reference, the function receives a reference to the original variable rather than a copy.
- **Avoiding a copy of large structures**
  Imagine a function that has to receive a large object. If we pass it without reference, a new copy of it is created which causes a waste of CPU time and memory. We can use references to avoid this. 

#### References vs pointers

I can already hear you thinking: "So references are just pointers with a different symbol?".  
Well, no. Similar, they point to a certain data type, but references have some limitations.

- References always need to point to something. Whereas pointers can point to NULL, references cannot. A reference needs to point to a valid instances or object of a class.
- References are immutable. Meaning, a reference, once initialized, that points to a specific instance of a class can't be changed to point to a different one. Pointers do provide this functionality.

You can run the small program to showcase the values and addresses associated with the data type itself, a pointer pointing to it and a references referring to it.

---

### Quick Links  

#### [Home](https://github.com/arommers/CPP_Modules)
#### [Module 00](https://github.com/arommers/CPP_Modules/tree/master/00)

#### [Module 01](https://github.com/arommers/CPP_Modules/tree/master/01)

#### [Module 02](https://github.com/arommers/CPP_Modules/tree/master/02)

#### [Module 03](https://github.com/arommers/CPP_Modules/tree/master/03)

#### [Module 04](https://github.com/arommers/CPP_Modules/tree/master/04)
