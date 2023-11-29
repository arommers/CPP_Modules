<div align="center">
  <img src="https://i.imgur.com/9RRWFs4.png">
</div>

## Sed is for Losers
So,we have to create a program that takes three parameters in the following order: a filename and two strings, s1 and s2.
The programm will open the file <filename> and copies its content into a new file <filename>.replace, replacing every occurrence of s1 with s2.  

An easy way to accomplish this is using the Stream Editor, commonly known as `Sed`. A powerful text processing tool in Unix and Unix-like operating systems. It is used to perform basic text transformations on an input stream (a file or input from a pipeline) and produce an output stream to standard output or redirect it to a file.  

`sed 's/old/new/g' example.txt`

Here's a breakdown of the components:

- s: The substitute command.
- old: The pattern expression to search for.
- new: The string to replace the matched pattern .
- example.txt: The file on which the sed command operates.

This being an assignment in the 42 curriculum naturally means we are not allowed to use `Sed` and we have to do it ourselves.



**for the record, I don't think `SED` is for losers*

---
### Quick Links  

#### [Home](https://github.com/arommers/CPP_Modules)
#### [Module 00](https://github.com/arommers/CPP_Modules/tree/master/00)

#### [Module 01](https://github.com/arommers/CPP_Modules/tree/master/01)

#### [Module 02](https://github.com/arommers/CPP_Modules/tree/master/02)

#### [Module 03](https://github.com/arommers/CPP_Modules/tree/master/03)

#### [Module 04](https://github.com/arommers/CPP_Modules/tree/master/04)
