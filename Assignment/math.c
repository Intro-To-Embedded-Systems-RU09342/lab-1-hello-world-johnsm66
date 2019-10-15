//Michael Johns
//Lab 1

//Does the specified mathematical operation on two operands
int math(int num1, int num2, char operator)
{
    switch (operator)
    {
        case '+': return num1 + num2; //add
        case '-': return num1 - num2; // subtract
        case '*': return num1 * num2; // multiply
        case '/': return num2 == 0 ? 0 : num1 / num2; //division, returns 0 if num2=0
        case '%': return num2 == 0 ? 0 : num1 % num2; //modulus, returns 0 if num2=0
        case '<': return num2 > 0 ? num1 << num2 : num1; //shift left, returns num1 if num2<=0
        case '>': return num2 > 0 ? num1 >> num2 : num1; //shift right, returns num1 if num2<=0
        case '&': return num1 & num2; //bitwise AND
        case '|': return num1 | num2; //bitwise OR
        case '^': return num1 ^ num2; //bitwise XOR
        case '~': return ~num1; //bitwise NOT, ignores num2
    }
}

