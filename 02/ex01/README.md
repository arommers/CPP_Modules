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

#### The insertion operator overload is something new however
The insertion operator overload is an overload of the output stream insertion operator (<<) for our class Fixed. This function is responsible for defining how objects of the Fixed type should be formatted when they are output to an output stream, like std::cout.  

The way I like to think about operator overloading is by seeing it as customizing. We adjust the normal value of the operator to tell the compiler how to work with our user defined data types, like our fixed class.
We defined this data so if we want to output them to an output stream, we have to specify how to handle our defined data. The compiler understands a primitive data type inherently, but not something we made up.

```
std::ostream& operator<<(std::ostream& os, const Fixed& object)
{
    os << object.toFloat();
    return (os);
}
```

In the above example we tell the compiler that we want to output the value of the expression toFloat() into the instance of the outstream 'os';  

The reason that we return a reference (std::ostream&) is to allow chaining of output operations.  

The << operator typically returns a reference to the output stream (std::ostream&) that was passed in as an argument. This allows multiple << operations to be chained together in a single line.  

If we didn't return a reference  ach << operation creates a new temporary stream and modifies that temporary stream. Without returning a reference, we would not be chaining operations on the same stream instance. Instead, we would be creating independent temporary streams for each operation, and only the result of the last operation would be seen. In our limited case it wouldn't necessarily be detrimental since each insertion operator overload just outputs a single value into a stream.


---
### Quick Links  

#### [Home](https://github.com/arommers/CPP_Modules)
#### [Module 00](https://github.com/arommers/CPP_Modules/tree/master/00)

#### [Module 01](https://github.com/arommers/CPP_Modules/tree/master/01)

#### [Module 02](https://github.com/arommers/CPP_Modules/tree/master/02)

#### [Module 03](https://github.com/arommers/CPP_Modules/tree/master/03)

#### [Module 04](https://github.com/arommers/CPP_Modules/tree/master/04)
