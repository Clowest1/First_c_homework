#include <stdio.h>

int main(){
    char func;
    double num1, num2;
    printf("Enter the operation (+, -, *, /): ");
    if (scanf("%c", &func)!=1){
        printf("Error: Invalid operation.\n");
        return 1;
    }
    if (func != '+' && func != '-' && func != '*' && func != '/'){
        printf("Error: Invalid operation.\n");
        return 1;
    }
    printf("Enter two numbers: example: 2.5 3.5\n");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Error: Invalid numbers.\n");
        return 1;
    }
    if (func == '+'){
        printf("Result: %f\n", num1 + num2);
    } else if (func == '-' ){
        printf("Result: %f\n", num1 - num2);
    } else if (func == '*'){
        printf("Result: %f\n", num1 * num2);
    } else if (func == '/'){
        if (num2 != 0){
            printf("Result: %f\n", num1 / num2);
        } else {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
    }
    return 0;
}