<div align=center>
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg" width="150" height="150" />
</div>

## Harl Filter
So were back at it with Harl and his barrage of nonsense messages. This time around though we are requested to give Harl a certain message level and have him shout out each one in ascending order starting from the level we provided.
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
switch (expression) {         <<< in our case the provided level string. e.g."INFO".
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
- The break statement is crucial to exit the switch block and prevent fall-through to subsequent cases.

For our assignment however we don't want Harl to stop after one message. We do want the code to cascade further and execute every case from that point on beyond. We just need to give Harl a starting point to start rambling.
This also means that the default evalution will be true and that block of code would also be executed.
  
As you can see in our revised complain function below, we did include a break at the last case.

<div align="center">
  <img src="https://i.imgur.com/w0Hum2X.png">
</div>

**The reason why we only check the first character of each level instead of the whole string, is because the switch statement in C++ is designed to work with integral(whole numbers) or enumerated types. We could have made an enumeration of our levels, but using just the first character is safe since we use a different function to properly check the input.*  

*If we want to work with whole strings we would have to go back to our beloved if-else statements.*

---
### Quick Links  

#### [Home](https://github.com/arommers/CPP_Modules)
#### [Module 00](https://github.com/arommers/CPP_Modules/tree/master/00)

#### [Module 01](https://github.com/arommers/CPP_Modules/tree/master/01)

#### [Module 02](https://github.com/arommers/CPP_Modules/tree/master/02)

#### [Module 03](https://github.com/arommers/CPP_Modules/tree/master/03)

#### [Module 04](https://github.com/arommers/CPP_Modules/tree/master/04)
