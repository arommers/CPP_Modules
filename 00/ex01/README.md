# My Awesome Phonebook
The goal of this project is to create a program that emulates an 80's-style phonebook.  
This will involve two main classes: Contact and Phonebook.  

Contact Class:  
- The Contact class will hold essential information such as first name, last name, and phone number.

Phonebook Class:  
- The Phonebook class will manage a collection of contacts. It will have a maximum capacity of 8 contacts.

On program start-up, the phonebook is empty and the user is prompted to enter one
of three commands.  
The program only accepts ADD, SEARCH and EXIT.  

## Key Concepts
#### Classes
A class is a user-defined data type that serves as a blueprint for creating objects and usually is a digital representation of a real life concept.
In our case for example, a person in a phonebook. Classes combine data (attributes) and operations (methods/functions) that can be performed on that data.
Some important concepts associated with classes:
- Members: A class contains members, which can be data members (attributes) or function members (methods).

- Attributes: Data members (variables) represent the properties or characteristics of objects created from the class.

- Methods: Function members (functions) define the behavior or operations that can be performed on objects of the class.

- Encapsulation: Classes support the principle of encapsulation, allowing you to control access to the internal data and methods of an object. We will touch on that a bit further later on.

- Object: An object is an instance of a class, created based on the blueprint defined by the class.

- Constructor: A special member function called a constructor is used to initialize the object's attributes when it is created.

- Destructor: Optionally, a destructor can be defined to perform cleanup tasks when an object goes out of scope or is destroyed.

#### Encapsulation
Encapsulation is one of the four fundamental Object-Oriented Programming (OOP) principles, (along with inheritance, polymorphism, and abstraction).
It refers to the bundling of data (attributes) and methods (functions) that operate on the data, into a single unit, which is known as a class.
This access control manages access to certain parts of an object, allowing some parts to be `public` (accessible outside the class) and others to be `private` (only accessible within the class).
We mostly deal with learning how to declare `getters` and `setters` to protect our private data and acces it in a proper manner.
