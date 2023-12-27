<div align=center>
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg" width="150" height="150" />
</div>

## Moar brainz!
Just like in the previous excersise we're still working on making zombies. One zombie at a time is very tedious however.
So let's make a whole bunch of them at the same time. A horde if you will 🧟🧟🧟🧟🧟

---

Just like before, we have to dynamically allocate some memory to make em long lasting. This time however we specifiy how many zombies we want and store them in an array.

`pointer-variable = new data-type[size];`

Size here represents the number of elements in our array and how many zombies will be in our horde.

In our tiny programm we can create a horde in a loop (All with the same name. Their zombies, not cats ;)).
```
Zombie* zombieHorde(int N, std::string name)
{
    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; i++)
        horde[i].setName(name);
    return (horde);
}
```

Just like with singular, dynamically allocated data types, the most important difference is, that normal arrays are deallocated by the compiler (If the array is local, then deallocated when the function returns or completes). 
However, dynamically allocated arrays always remain there until either they are deallocated by the programmer or the program terminates.

 To free the dynamically allocated horde/array pointed to by pointer `horde`, we use the following form of delete:

 `delete[] horde`

This will free the entire array and prevent memory leaks.

---

### Quick Links  

#### [Home](https://github.com/arommers/CPP_Modules)
#### [Module 00](https://github.com/arommers/CPP_Modules/tree/master/00)

#### [Module 01](https://github.com/arommers/CPP_Modules/tree/master/01)

#### [Module 02](https://github.com/arommers/CPP_Modules/tree/master/02)

#### [Module 03](https://github.com/arommers/CPP_Modules/tree/master/03)

#### [Module 04](https://github.com/arommers/CPP_Modules/tree/master/04)
