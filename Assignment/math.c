//Michael Johns
//Lab 1

//Does the specified mathematical operation on two operands
int math(int num1, int num2, char operator)
{
    switch (operator)
    {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return num2 == 0 ? 0 : num1 / num2; //returns 0 if num2=0
        case '%': return num2 == 0 ? 0 : num1 % num2; //returns 0 if num2=0
        case '<': return num2 > 0 ? num1 << num2 : num1; //returns num1 if num2<=0
        case '>': return num2 > 0 ? num1 >> num2 : num1; //returns num1 if num2<=0
        case '&': return num1 & num2;
        case '|': return num1 | num2;
        case '^': return num1 ^ num2;
        case '~': return ~num1; //ignores num2
    }
}

