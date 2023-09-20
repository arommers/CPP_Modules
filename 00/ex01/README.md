# My Awesome Phonebook
The goal of this project is to create a program that emulates an 80's-style phonebook.  
This will involve two main classes: Contact and Phonebook.  

`Contact Class`:  
- The Contact class will hold essential information such as first name, last name, and phone number.

`Phonebook Class`:  
- The Phonebook class will manage a collection of contacts. It will have a maximum capacity of 8 contacts.

On program start-up, the phonebook is empty and the user is prompted to enter one
of three commands.  
The program only accepts ADD, SEARCH and EXIT.  
- ADD: saves a new contact in the phonebook and prompts the user to input one field at a time.
- SEARCH: Display the saved contacts as a list of 4 columns: index, first name, last name and nickname.
  The user will be prompted for the index of the entry that they would like to be displayed.
- EXIT: Exits the program.

I added two extra commands, ("FILL" and "PRINT") for convenience during testing.

Below is an example of digital display of our phonebook.
***
<img src="https://i.imgur.com/9kAdfPZ.png" alt="ERROR" style="max-width: 50%;">

***

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

Our phonebook class:

<img src="https://i.imgur.com/NH3uiMQ.png" alt="ERROR" style="max-width: 50%;">

#### Encapsulation
Encapsulation is one of the four fundamental Object-Oriented Programming (OOP) principles, (along with inheritance, polymorphism, and abstraction).
It refers to the bundling of data (attributes) and methods (functions) that operate on the data, into a single unit, which is known as a class.

This access control manages access to certain parts of an object, allowing some parts to be `public` (accessible outside the class) and others to be `private` (only accessible within the class).
We mostly deal with learning how to declare `getters` and `setters` to protect our private data and access it in a proper manner.

In object-oriented programming (OOP), public and private members are two types of class members that determine their visibility and accessibility within a class.

`Public Members`:
- Definition: Public members are accessible from outside the class. They form the interface of the class, providing a way for external code to interact with and manipulate the class's objects.

- Access: Public members can be accessed by objects of the class and external code that uses those objects.

- Purpose: They are typically used to define the behaviors and functionalities that the class provides to its users.

An example of a class with public members:

<img src="https://i.imgur.com/D945vHm.png" alt="ERROR" style="max-width: 50%;">



`Private Members`:

- Definition: Private members are only accessible within the class in which they are declared. They are hidden from external code and provide encapsulation of the class's implementation details.

- Access: They can be accessed and modified only by the methods of the same class.

- Purpose: They are used to store and manage the internal state of objects, maintaining data integrity and controlling how objects are manipulated

An example of a class with public and private members:

<img src="https://i.imgur.com/jUBFDDX.png" alt="ERROR" style="max-width: 50%;">
