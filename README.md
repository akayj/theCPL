theCPL - The C Programming Language
====================================

Exercises in the book : `The C Programming Language`

## Description

**2-4**
Write an alternative version of `squeeze(s1,s2)` that deletes each character
in `s1` that matches any character in the string `s2`.

**2-5**
Write the function `any(s1,s2)`, which returns the first location in a
string `s1` where any character from the string `s2` occurs, or `-1`
if `s1` contains no characters from `s2`.
(The standard library frunction `strpbrk` does the same job but returns
a pointer to the location.)

**2-6**
Write a function `setbits(x,p,n,y)` that returns `x` with the `n` bits
that begin at position `p` set to the rightmost `n` bits of `y`,leaving the
other bits unchanged.

**2-7**
Write a function `invert(x,p,n)` that returns `x` with the `n` bits that
begin at point `p` inverted(ie., 1 changed to 0 and vice versa),leaving
the others unchanged.

**2-8**
Write a function `rightrot(x,n)` that returns the value of the integer `x`
rotated to the right by `n` positions.

**2-9**
In a two's complement number system, `x &= (x-1)` deletes the rightmost 1-bit
in `x`. Explain why.Use this observation to write a faster version of `bitcount`.
