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

    // This will be used as my flag
    int exit = 0;
    char operation;
    double operand1, operand2;


    while(!exit){
        printf("Please enter a math operations from the following: +, -, *, /, e(to exit)\n");
        scanf(" %c", &operation); // space was added to prevent a newline character from being read in from the input buffer
        printf("Please enter two operands separated by a comma:\n");
        scanf("%lf, %lf", &operand1, &operand2);
        switch (operation)
        {
        case '+':
            printf("Result of addition: %lf\n", addition(operand1, operand2));
            break;
        case '-':
            printf("Result of subtraction: %lf\n", substraction(operand1, operand2));
            break;
        case '*':
            printf("Result of multiplication: %lf\n", multiplication(operand1, operand2));
            break;
        case '/':
            printf("Result of division: %lf\n", division(operand1, operand2));
            break;
        case 'e':
            printf("exiting...\n");
            exit=1;
            break;
        default:
            printf("Unknown operation entered...\n");
            break;
        }
    }

    return 0;
}