<div align="center">
  <img src="https://i.imgur.com/9RRWFs4.png">
</div>

##  My First Class in Orthodox Canonical Form

An assignment that albeit small in scale is unnecessarily complicated (in a very "42" way), by associating it with a needlesly complicated subject. The fixed point number.
We are tasked with creating a class in the Orthodox Canonical Form that represents a fixed-point number that includes the following members:

#### Private members:
- An integer to store the fixed-point number value.
- A static constant integer to store the number of fractional bits. Its value
  will always be the integer literal 8.
#### Public members:
- A default constructor that initializes the fixed-point number value to 0.
- A copy constructor.
- A copy assignment operator overload.
- A destructor.
- A member function int getRawBits(void) const;
  that returns the raw value of the fixed-point value.
- A member function void setRawBits(int const raw);
  that sets the raw value of the fixed-point number.

### The Orthodox Canonical Form

The Orthodox Canonical Form typically refers to a set of standard methods that are defined for a class in C++.  
For us this is means the minimal inclusion of "The Big Four" since we are working in accordance with the C++98 standard.
The big four refers to the minimal inclusion of the following four members:

- **A Constructor (ClassName(parameters)):**  
  Responsible for initializing an object. It is called when an object is created. Constructors can have parameters to initialize the object with specific values. Constructors can also be overloaded to provide different ways of initializing objects.
- **A Destructor (~ClassName()):**  
  Responsible for releasing any resources acquired by an object. It is called when the object goes out of scope or is explicitly deleted.
- **A Copy Constructor (ClassName(const ClassName&)):**  
  Creates a new object by copying an existing object. It should perform a deep copy of the object's resources, but that's someting we'll get into later.
- **Copy Assignment Operator (ClassName& operator=(const ClassName&)):**  
  Assigns the values of one object to another. Like the copy constructor, it should perform a deep copy of the object's resources.

An example of a class abiding these standards will look similar to the below example. I would like to point out that the Orthodox Canonical Form is by no means enforced. It is more a convention than anything else.

```
class example
{
   public:
      example();
      example(const example &original);
      ~example();
      Example &operator = (const example &original);
};
```

---
### Quick Links  

#### [Home](https://github.com/arommers/CPP_Modules)
#### [Module 00](https://github.com/arommers/CPP_Modules/tree/master/00)

#### [Module 01](https://github.com/arommers/CPP_Modules/tree/master/01)

#### [Module 02](https://github.com/arommers/CPP_Modules/tree/master/02)

#### [Module 03](https://github.com/arommers/CPP_Modules/tree/master/03)

#### [Module 04](https://github.com/arommers/CPP_Modules/tree/master/04)
