# C-Recap

Init this repo to just recap my c learnings and also to learn more about memory this time, how it stores different things
like functions, variables etc on the hardware level.

## Datatypes

 * int - An integer.
 * float - Rational numbers(decimal numbers).
 * char - Character(A | B | c | d etc).
 * char* - Array of characters(string).

 NOTE: In C, the memory/size of each datatypes varies based on the operating system architecture(64|32 bit).
- int: 8bytes
- char: 1byte
- float: 4bytes
- double: 8bytes
 `1byte = 8bits`
 To know a datatype size you can use `sizeof` operator, also  there is a special datatype called `size_t`
 this is mostly used to know the sizeof `size_t size = sizeof(int)`, technically here u can also use int,
 but if ur data structure exceeds range of int from the sizeof, then int may not be the perfect solution.

## Format specifiers
    
 Unlike js|python, in C you need to specify the format specifier based on the datatype,
 * %d - for int.
 * %f - for float.
 * %c - for char.
 * %s - for char*.
 * %zu - for sizeof.
 EG: `printf("%d", int_variable)`


## Structs

 In c Structs are something similar to objects/classes that are in python/js, unlike things like inheritance, abstract classes etc
structs are simply objects that contain multiple datatypes.
 Unlike objects in js/python the datatypes in C structs are ordered, meaning it assigns a set of block and assign
each datatype next by next.

EG: In the below example `age, fullName` are next to next block in the memory.
```C
struct Emp {
  int age;
  char *fullName;
}
```
 To initialize struct, there are multiple ways.

way1:
```C
struct Emp emp = { 21, "Manikandan Arjunan" };

```

way2:
```C
struct Emp emp = {
    .age = 21,
    .fullName = "Manikandan Arjunan"
};

```

in way1, if the ordering changed for some reason, u need to change ur initialization again(as i said struct in c is
ordered along with memory by placing data types next in the block),

