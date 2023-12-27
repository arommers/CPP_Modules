<div align=center>
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg" width="150" height="150" />
</div>

## BraiiiiiiinnnzzzZ

A short introductory exercise that tasks us with creating two zombies. One short lived that we create on the stack. Another, a little less shortlived, that we dynamically allocate on the stack.
When we create a zombie on the stack it is bound to the scope and scope chain it is created in. A simple example:

```
void randomChump(std::string name)
{
    Zombie chump = Zombie(name); 🧟
    
    chump.announce();
}
```

This pititful zombie gets constructed, announces it's existence and crumbles into dust as soon as the function ends.
Let's try and make it live a tad longer shall we.

---

### New

To be able to dynamically create a zombie that lives beyond the scope of where it was created we use the `new` operator.
We allocate some heap memory with the `new` operator and store the address of that allocated memory in a pointer.

` pointer-variable = new data-type;` 

For our 'new' and improved zombie:

```
Zombie* newZombie(std::string name)
{
    Zombie* newzombie = new Zombie(name); 🧟

    return (newzombie);
}
```

We now have a minion that can hunt for brains beyond it's otherwise limited scope.
However, if not properly taken care of when our program ends, our zombie will 'leak' and we do need to take care of it.

### Delete

To clean up our enduring zombie we use the `delete` operator. When we use the new operator to dynamically allocate memory on the heap,we need to use the `delete` operator to free that memory when it is no longer needed.
For a single allocated piece of data like our newZombie it would be as easy as:

`delete newZombie`

Now we have long lasting zombies that don't leave a mess or memory leaks when they're doing clamoring for brains. 🧟

---

### Quick Links  

#### [Home](https://github.com/arommers/CPP_Modules)
#### [Module 00](https://github.com/arommers/CPP_Modules/tree/master/00)

#### [Module 01](https://github.com/arommers/CPP_Modules/tree/master/01)

#### [Module 02](https://github.com/arommers/CPP_Modules/tree/master/02)

#### [Module 03](https://github.com/arommers/CPP_Modules/tree/master/03)

#### [Module 04](https://github.com/arommers/CPP_Modules/tree/master/04)
