#include <stdio.h>

/* Basic addition of two operands */
double addition(double op1, double op2){
    return op1 + op2;
}

/* Basic subtraction of two operands*/
double substraction(double op1, double op2) {
    return op1 - op2;
}

/* Basic multiplication of two operands */
double multiplication(double op1, double op2) {
    return op1 * op2;
}


/* 
- Basic division of two operands 
- Check is operand 2 is zero. If yes, return the value of 0.0
*/
double division(double op1, double op2){
    if (op2 == 0.0){
        return 0.0;
    }

    return op1 / op2;
}

int main(){

    return 0;
}