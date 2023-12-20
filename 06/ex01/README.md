<div align=center>
    <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg" width="150" height="150" />
</div>
          
# Reinterpret Casting
Reinterpret_cast is one of the casting operators in C++ that is used for low-level type casting. Its primary purpose is to convert pointers or integral types to other types.
This type of casting is primarily used for converting pointers of one type to pointers of another type, even if the types are unrelated.
It can be useful in scenarios where we need to perform low-level operations, such as handling memory addresses.  

An exmaple is converting integral types (like int or uintptr_t) to pointer types and vice versa.
This is commonly used in scenarios where you need to treat an integer as a memory address or vice versa. 

Reinterpret_cast is commonly used to convert between a void* (a pointer to an unspecified type) and other pointer types.  

Example from our code:

```
int main()
{
    Data        oldData;
    Data        *newData;
    uintptr_t   ptr;

    oldData.value = 42;
    
    ptr = Serializer::serialize(&oldData);
    newData = Serializer::deserialize(ptr);
    
    return (0);
}
```

*In this example, reinterpret_cast within the serializer function is used to convert pointer to an int( horribly named ptr).
In deserialize the pointer is turned back into a pointer to our data struct.*

---

## When to Use reinterpret_cast:
#### Low-Level Operations:
We use reinterpret_cast when dealing with low-level programming, memory manipulation, or scenarios where we need to perform type conversions that are not possible with safer casting operators.

#### Type Punning:
Type punning refers to accessing a value through a pointer of a different type. Reinterpret_cast is often used in type punning.

---

## How reinterpret_cast Differs from Other Casts:
#### Static_cast:
Static_cast is used for safer, more predictable conversions between related types.
It performs conversions that are known at compile-time, and it checks for type compatibility.
It is not as powerful as reinterpret_cast and is not meant for low-level operations.

#### Dynamic_cast:
Dynamic_cast is primarily used for safe downcasting in polymorphic class hierarchies.
It is checked at runtime and requires polymorphic (virtual) classes.

---

### C-Style Cast:

The C-style cast ((type) syntax) can perform a variety of conversions, including reinterpret_cast, static_cast, and other conversions.
C-style casts are powerful but lack the specificity and safety checks of C++ casting operators. They are not recommended in C++.



