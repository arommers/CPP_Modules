<div align="center">
  <img src="https://i.imgur.com/9RRWFs4.png">
</div>

## Towards a More Useful Fixed-point Number Class
So we're expanding our fixed point number class from exercise 00. It mostly gets complemented with member functions that lets us construct instances in a customized manner instead of just a default constructor that doesn't take any parameters.

We are also overloading an operator for the first time that isn't the assignment operator. Namely the insertion operator.


#### Customized contructor
A customized constructor isn't anything new so I'll just glance over the difference with a default one quickly.

With a customized constructor we can specify parameters that our objects gets intialized with. For example, a name for a person class:

```
Person::Person(std::string name) : _name(name)
{
    std::cout << "Created a person called: " << _name << std::endl;
}
```


```
std::ostream& operator<<(std::ostream& os, const Fixed& object)
{
    os << object.toFloat();
    return (os);
}
```

---
### Quick Links  

#### [Home](https://github.com/arommers/CPP_Modules)
#### [Module 00](https://github.com/arommers/CPP_Modules/tree/master/00)

#### [Module 01](https://github.com/arommers/CPP_Modules/tree/master/01)

#### [Module 02](https://github.com/arommers/CPP_Modules/tree/master/02)

#### [Module 03](https://github.com/arommers/CPP_Modules/tree/master/03)

#### [Module 04](https://github.com/arommers/CPP_Modules/tree/master/04)
