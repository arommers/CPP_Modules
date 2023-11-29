<div align="center">
  <img src="https://i.imgur.com/9RRWFs4.png">
</div>

## Unnecessary violence 
This exercise will further exemplify the different application of references and pointers that we talked about in the previous assignment.
We will also talk about `getters` and `setters` in this context to further our understanding of encapsulation in c++.

To this end we employ two classes(HumanA and HumanB) that will engage in an old fashioned, testosterone fueled showdown.  
Each welding either a pointer or a reference to a weapon class.

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

The first thing that you might have noticed, remembering that references cannot be null, is that HumanA is incapable of fighting barehanded. Coward!  

HumanA simply cannot be initialized or constructed without a reference to a weapon. HumanB however wil be unarmed by default.

Inversely, HumanB is able to 'pick up or equip' different weapons by making the pointer point to a different instance of the weapon class:

```
void    HumanB::setWeapon(Weapon& weapon)
{
    this->_weaponPtr = &weapon;
}
```

HumanA can't pick up a different weapon but has some C+ magic to help him circumvent this small annoyance.  
He can simply change the weapon he is holding by providing a string describing his weapon to the setter function.
Hereby changing the actual weapon.

```
void    Weapon::setType(const std::string& type)
{
    this->_type = type;
}
```

It doesn't seem like a fair fight, but I guess all is fair in love and pointers vs references.

---

### Quick Links  

#### [Home](https://github.com/arommers/CPP_Modules)
#### [Module 00](https://github.com/arommers/CPP_Modules/tree/master/00)

#### [Module 01](https://github.com/arommers/CPP_Modules/tree/master/01)

#### [Module 02](https://github.com/arommers/CPP_Modules/tree/master/02)

#### [Module 03](https://github.com/arommers/CPP_Modules/tree/master/03)

#### [Module 04](https://github.com/arommers/CPP_Modules/tree/master/04)
