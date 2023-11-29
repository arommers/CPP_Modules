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
- g: 'global', replacing all occurrences of the pattern on each line:

This being an assignment in the 42 curriculum naturally means we are not allowed to use `Sed` and we have to do it ourselves.

To do this we can slice our little program into three different parts. 
- Opening a file to read.
- opening a file to write to.
- Make a loop that reads our file line by line.

#### File Input
ifstream is a class in C++ that stands for "input file stream." It is part of the C++ Standard Library and is defined in the <fstream> header. We use an instance of the ifstream class to read data from files.

```
std::ifstream inFile(filename);
if(!inFile)
{
    std::cerr << "Something went wrong with trying to open " << filename << "\n";
    return ;
}
```

Here we use the constructor to make an instance of ifstream and simultaneously open a file that the instream is associated with. We also do our due diligence and check if opening the file was succesful.
Alternatively, we could have declared an instance of ifstream and used the `inFile.open` method to open the file.

#### File output

std::ofstream outFile(filename + ".replace");
if(!outFile)
{
    std::cerr << "Something went wrong with trying to write to " << filename << ".replace\n";
    return ;
}

Similar to our ifstream, we declare and intialize an output stream and associate a file to write to. Here too we could have done the declaration and opening separate.

#### Reading Lines

To actually read the dat from a stream, alter it and output to a different stream we use `getline`.


**for the record, I don't think `SED` is for losers*

---
### Quick Links  

#### [Home](https://github.com/arommers/CPP_Modules)
#### [Module 00](https://github.com/arommers/CPP_Modules/tree/master/00)

#### [Module 01](https://github.com/arommers/CPP_Modules/tree/master/01)

#### [Module 02](https://github.com/arommers/CPP_Modules/tree/master/02)

#### [Module 03](https://github.com/arommers/CPP_Modules/tree/master/03)

#### [Module 04](https://github.com/arommers/CPP_Modules/tree/master/04)
