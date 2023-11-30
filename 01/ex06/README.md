<div align="center">
  <img src="https://i.imgur.com/9RRWFs4.png">
</div>

## Harl Filter
So were back it with Harl and his barrage of nonsense messages. This time around though we are requested to give Harl a certain message level and have him shout out each one in ascending order starting from the level provided.
A quick reminder for the level messages:
- DEBUG
- INFO
- WARNING
- ERROR

So if we provided our program with the level string 'INFO', Harl should print out the INFO, WARNING and ERROR messages. If we gave him "WARNING" he would spew out the WARNING and ERROR messages. etc. etc.
We could construct a set of if-else statements, but that would become quite convoluted and ugly.  

There is a more elegant approach that our subject file heavily hints at :

---

### Switch Statements
The switch statement in C++ is a powerful tool that allows us to control the flow of our code to select from multiple alternatives based on the value of an expression. It provides a concise and efficient way to handle multiple cases without the need for a series of convoluted if-else statements.  

The syntax is straightforward:

```
switch (expression) { <<< in our case the provided level string
    case value1:
        // Code to be executed if expression matches value1
        break;

    case value2:
        // Code to be executed if expression matches value2
        break;
    // more possible cases
    default:
        // Code to be executed if expression doesn't match any case
}
```
- The switch statement evaluates the expression and compares it with the values specified in each case.
- If a match is found, the corresponding block of code is executed.
- The default case is optional and is executed when none of the specified case values matches the expression.

---
### Quick Links  

#### [Home](https://github.com/arommers/CPP_Modules)
#### [Module 00](https://github.com/arommers/CPP_Modules/tree/master/00)

#### [Module 01](https://github.com/arommers/CPP_Modules/tree/master/01)

#### [Module 02](https://github.com/arommers/CPP_Modules/tree/master/02)

#### [Module 03](https://github.com/arommers/CPP_Modules/tree/master/03)

#### [Module 04](https://github.com/arommers/CPP_Modules/tree/master/04)
