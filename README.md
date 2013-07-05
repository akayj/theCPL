theCPL - The C Programming Language
====================================

Exercises in the book : `The C Programming Language`

## Description

### 2-4.c
Write an alternative version of `squeeze(s1, s2)` that deletes each character
in `s1` that matches any character in the string `s2`.

### 2-5.c
Write the function `any(s1, s2)`, which returns the first location in a
string `s1` where any character from the string `s2` occurs, or `-1`
if `s1` contains no characters from `s2`.
(The standard library frunction `strpbrk` does the same job but returns
a pointer to the location.)

### 2-6.c
Write a function `setbits(x, p, n, y)` that returns `x` with the `n` bits
that begin at position `p` set to the rightmost `n` bits of `y`,leaving the
other bits unchanges.
