# Lab 0
The overall goal of this lab is to generate a "math.c" and "math.h" file that can eventually be placed into 
an example UART Calculator code.
## Usage
The math.h and math.c files can be placed into a working directory and the function, math(int num1, int num2, char operator),
can be called upon to perform various functions to the integers, num1 and num2 based.
## Functions
### Add ("+")
- the sum of num1 and num2 is calculated and the value is returned.
### Subtarct ("-")
-the difference between num1 and num2 is calculated and the value is returned.
### Multiply ("*")
- num1 and num2 are multiplied together and the value is returned.
### Divide ("/")
- num1 is divided by num2 and the value is returned. The decimal place of the value is truncated.
### Modulus ("%")
- num1 is divided by num2 and the remainder value is returned.
### Left Shift ("<")
- num1 is shifted left num2 number of times and then returned. 
### Right Shift (">")
- num1 is shifted right num2 number of times and then returned. 
### Bitwise AND ("&")
- each numbers place of num1 is ANDed with the corresponding numbers place of num2.
### Bitwise OR ("|")
- each numbers place of num1 is ORed with the corresponding numbers place of num2.
### Bitwise XOR ("^")
- each numbers place of num1 is XORed with the corresponding numbers place of num2.
### Bitwise Inverse ("~")
- each numbers place of num1 inverted and the new num1 is returned.

