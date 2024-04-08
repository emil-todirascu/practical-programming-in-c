# Problem Set 2

## Problem Set 2.1
*Determine the size,minimum and maximum value following data types. Please specify if your machine is 32 bit or 64 bits in the answer.*
- *char*
- *unsigned char*
- *short*
- *int*
- *unsigned int*
- *unsigned long*
- *float*

*Hint: Use sizeof() operator,limits.h and float.h header files*

Machine is 64 bits
| Data Type       | Size            | Min             | Max |
| --------------- | --------------- | --------------- | --- |
| Char            | 1               | -128            | 127 |
| Unsigned Char   | 1               | 0               | 255 |
| Short           | 2               | -32768          | 32767 |
| Int             | 4               | -2147483648     | 2147483647 |
| Unsigned Int    | 4               | 0               | 4294967295 |
| Unsigned Long   | 4               | 0               | 4294967295 |
| Float           | 4               | 0.000000        | 340282346638528859811704183484516925440.000000 |
✔️
## Problem Set 2.2
*Write logical expressions that tests whether a given character variable c is*
- *lower case letter*
- *upper case letter*
- *digit*
- *white space (includes space,tab,new line)*
```
#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);

    if ('a' <= a && a <= 'z')
    {
        printf("The character is a lowercase letter\n");
    }
    else if ('A' <= a && a <= 'Z')
    {
        printf("The character is an uppercase letter\n");
    }
    else if ('0' <= a && a <= '9')
    {
        printf("The character is a digit\n");
    }
    else if (a == ' ' || a == '\t' || a == '\n')
    {
        printf("The character is a whitespace character\n");
    }
    else
    {
        printf("The character is a special character\n");
    }

    return 0;
}
```
✔️
## Problem Set 2.3
*Consider* `int val=0xCAFE;` *Write expressions using bitwise operators that do the following:*
- *test if atleast three of last four bits (LSB) are on*
- *reverse the byte order (i.e., produce* `val=0xFECA`*)*
- *rotate fourbits (i.e., produce* `val=0xECAF`*)*

in bit_ops.c
✔️
## Problem Set 2.4
*Using precedence rules, evaluate the following expressions and determine the value of the variables(without running the code). Also rewrite them using parenthesis to make the order explicit.*
- *Assume (x=0xFF33,MASK=0xFF00).Expression:* `c=x & MASK ==0`;
- *Assume (x=10,y=2,z=2;).Expression:* `z=y=x++ + ++y∗2`;
- *Assume (x=10,y=4,z=1;).Expression:* `y>>= x&0x2 && z`

`c=(x & (MASK ==0))`
c = 0\
`z=(y=(x++) + ((++y)∗2))`
x = 11, y= 3, z = 16\
`y>>= ((x & (0x2)) && z)`
y = 2
✔️
## Problem Set 2.5
*Determine if the following statements have any errors. If so, highlight them and explain why.*
- `int 2nd value=10`;
- *Assume (x=0,y=0,alliszero=1).* `alliszero =(x=1) && (y=0)`;
- *Assume (x=10,y=3,z=0;).* `y=++x+y;z=z−−>x`;
- *Assume that we want to test if last four bits of x are on. (*`int MASK=0xF;ison=x&MASK==MASK`*)* 

`int 2nd value=10` variable names cant start with a number\
`alliszero =(x=1) && (y=0)` should use == for comparison instead of =\
`y=++x+y;z=z−−>x` nothing wrong\
`int MASK=0xF;ison=x&MASK==MASK` needs parantheses for `(x&MASK)`
✔️