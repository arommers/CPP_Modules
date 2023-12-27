<div align=center>
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg" width="150" height="150" />
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
      ~example();
      example(const example &original);
      Example &operator = (const example &original);
};
```

### Fixed point number
Since our class needs to represent a fixed point number I'll provide a very brief description.  

A fixed-point number is a representation of a real number with a fixed number of digits after the decimal point (or binary point in the case of binary fixed-point numbers). Unlike floating-point numbers, which have a variable number of digits in the fractional part, fixed-point numbers have a predetermined and fixed precision, show in ourclass by the private member fractional bits.  

In a fixed-point representation, a certain number of bits are reserved for the integer part and a certain number for the fractional part. The position of the binary (or decimal) point is fixed and known in advance.

For example, in a 16-bit fixed-point representation with 8 bits for the integer part and 8 bits for the fractional part, the binary point is fixed after the first 8 bits. So, the number 10101111.11001010 in this representation would mean 10101111 in the integer part and .11001010 in the fractional part.

So why are these numbers important and what are their practical applications. I'll limit this to our assignments where I can show the benefits of a fixed pointer number in comparison with integers and floatd.
- **Integers**  
  They represent whole numbers and as such are very accurate. A '1' is a '1' not some approximation of the value. However it is not very precise. When a number would actually be '1.00012345', as an int, it would evaluate to 1.

  If we were to turn this into a fixed point number with 8 fractional bit's we would actually have a more precise assesment of our value.
- **Floats**  
  Numeric values that are the opposite in this aspect, where they represent precision a lot better, but lack in accuracy.

  Consider the number 1/3. No finite decimal digit representation (e.g. 0.333333) can ever be equal to 1/3; we can never have enough 3's. Thus it is more than likely that the computed result you need cannot be represented accurately by a finite floating point variable.

  Turning a float into a fixed point number gives has it's limited uses when we value speed over precision. It's faster to tun a float like 5.4259742576443578743543 into a fixed point number with 3 fractional bits to make a calculation. We only evaluate two fractional bits opposed to the multitude of them in the orignal floats.

There is a lot to it then my, more than likely flawed explanation, but I would advise to not dive to deep into fixed point numbers during these modules. Focus on the C++ side.

---
### Quick Links  

#### [Home](https://github.com/arommers/CPP_Modules)
#### [Module 00](https://github.com/arommers/CPP_Modules/tree/master/00)

#### [Module 01](https://github.com/arommers/CPP_Modules/tree/master/01)

#### [Module 02](https://github.com/arommers/CPP_Modules/tree/master/02)

#### [Module 03](https://github.com/arommers/CPP_Modules/tree/master/03)

#### [Module 04](https://github.com/arommers/CPP_Modules/tree/master/04)
