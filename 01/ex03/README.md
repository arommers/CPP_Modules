<div align="center">
  <img src="https://i.imgur.com/9RRWFs4.png">
</div>

## Unnecessary violence 
This exercise will exemplify the different application of references and pointers, using `getters` and `setters`.

To this end we will use two classes(HumanA and HumanB) that will engage in an old fashioned, testosterone fueled showdown.
HumanA equips his weapon using a reference:

```
HumanA::HumanA(const std::string name, const Weapon& weapon): _name(name), _weapon(weapon)
{
    std::cout << "HumanA constructed" << std::endl;
}
```

HumanB however, arms himself by use of a pointer:

```
HumanB::HumanB(std::string name): _name(name), _weaponPtr(nullptr)
{
    std::cout << "HumanB constructed" << std::endl;
}
```

---

### Quick Links  

#### [Home](https://github.com/arommers/CPP_Modules)
#### [Module 00](https://github.com/arommers/CPP_Modules/tree/master/00)

#### [Module 01](https://github.com/arommers/CPP_Modules/tree/master/01)

#### [Module 02](https://github.com/arommers/CPP_Modules/tree/master/02)

#### [Module 03](https://github.com/arommers/CPP_Modules/tree/master/03)

#### [Module 04](https://github.com/arommers/CPP_Modules/tree/master/04)
