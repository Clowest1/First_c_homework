#include <stdio.h>

int main(){
    char func;
    double num1, num2;
    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &func);
    if (func != '+' && func != '-' && func != '*' && func != '/'){
        printf("Error: Invalid operation.\n");
        return 1;
    }
    printf("Enter two numbers: ");
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
            return 1;
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    return 0;
}