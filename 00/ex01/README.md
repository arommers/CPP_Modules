<div align="center">
  <img src="https://i.imgur.com/9RRWFs4.png">
</div>

## My Awesome Phonebook
A project where we create a program that emulates an 80's-style "crappy" phonebook.  
This project very much has us hitting the ground running, as it combines a lot of C++ concepts at once. 
The two most important ones are `classes` and an introduction to encapsulation.  

Our program will use two main classes: Contact and Phonebook to realize our little 80's gem.

`Contact Class`:  
- The Contact class will hold essential information about our entries such as first name, last name, phone number etc.

`Phonebook Class`:  
- The Phonebook class will manage our collection of contacts. It will have an array of instances of our contant class an have a maximum capacity of 8 contacts.

On program start-up, the phonebook is empty and the user is prompted to enter one
of three commands.  
The program only accepts ADD, SEARCH and EXIT.  
- ADD: saves a new contact in the phonebook and prompts the user to input one field at a time.
- SEARCH: Display the saved contacts as a list of 4 columns: index, first name, last name and nickname.
  The user will be prompted for the index of the entry that they would like to be displayed.
- EXIT: Exits the program.

I added two extra commands, ("FILL" and "PRINT") for testing convenience.

Below is an example of our PhoneBook in action.

---

<img src="https://i.imgur.com/dXzmbvd.png" alt="ERROR" style="max-width: 50%;">

---

### Key Concepts
#### Classes
A class is a user-defined data type that serves as a blueprint for creating objects and usually is a digital representation of a real life concept.
In our case for example, a person entry in a phonebook. Classes combine variables/data (attributes) and operations (methods/functions) that can be performed on that data.
Some important concepts associated with classes:
- Members: A class contains members, which can be variables/data members (attributes) or function members (methods).

- Attributes: Data members (variables) represent the properties or characteristics of objects created from the class.
  A string representing a first name for example.

- Methods: Function members (functions) define the behavior or operations that can be performed on objects of the class. 

- Encapsulation: Classes support the principle of encapsulation, allowing you to control access to the internal data and methods of an object.
  This revolves around the concept of public versus private members and how they are utilized. We will touch on that a bit further later on.

- Object: An object is an instance of a class, created based on the blueprint defined by the class.
  In this program we create one instance of our phonebook class and an instanc of our contact class every time a new one gets added.

- Constructor: A special member function called a constructor is used to initialize the object's attributes when it is created.

- Destructor: Optionally, a destructor can be defined to perform cleanup tasks when an object goes out of scope or is destroyed.

Our phonebook class:

<img src="https://i.imgur.com/NH3uiMQ.png" alt="ERROR" style="max-width: 50%;">

---

#### Encapsulation
Encapsulation is one of the four fundamental Object-Oriented Programming (OOP) principles, (along with inheritance, polymorphism, and abstraction).
It refers to the bundling of data/variables (attributes) and methods (functions) that operate on the data, into a single unit, which is known as a class.

This manages access control to certain parts of an object, allowing some parts to be `public` (accessible outside the class) and others to be `private` (only accessible within the class).
With our current classes we mostly deal with learning how to declare `getters` and `setters` to protect our private data and access it in a proper manner.

In object-oriented programming (OOP), public and private members are two types of class members that determine the visibility and accessibility within a class.

`Public Members`:
- Definition: Public members are accessible from outside the class. They form the interface of the class, providing a way for external code to interact with and manipulate the class's objects.

- Access: Public members can be accessed by objects of the class and external code that uses those objects.

- Purpose: They are typically used to define the behaviors and functionalities that the class provides to its users.

An example of a class with public members:

<img src="https://i.imgur.com/D945vHm.png" alt="ERROR" style="max-width: 50%;">



`Private Members`:

- Definition: Private members are only accessible within the class in which they are declared. They are hidden from external code and provide encapsulation of the class's implementation details.

- Access: They can be accessed and modified only by the methods of the same class (an example would be getters and setters).

- Purpose: They are used to store and manage the internal state of objects, maintaining data integrity and controlling how objects are manipulated

An example of a class with public and private members:

<img src="https://i.imgur.com/jUBFDDX.png" alt="ERROR" style="max-width: 50%;">

---

### Quick Links  

#### [Home](https://github.com/arommers/CPP_Modules)
#### [Module 00](https://github.com/arommers/CPP_Modules/tree/master/00)

#### [Module 01](https://github.com/arommers/CPP_Modules/tree/master/01)

#### [Module 02](https://github.com/arommers/CPP_Modules/tree/master/02)

#### [Module 03](https://github.com/arommers/CPP_Modules/tree/master/03)

#### [Module 04](https://github.com/arommers/CPP_Modules/tree/master/04)


