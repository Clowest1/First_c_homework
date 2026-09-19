#include <stdio.h>

int cmp_double(double a, double b);

int main() {
  // TODO uinit values
  char func;
  double num1, num2;

  // TODO: input func
  printf("Enter the operation (+, -, *, /): ");
  if (scanf(" %c", &func) != 1) { // print_error \ soft_assert
    printf("Error: Invalid input.\n");
    return 1;
  }

  // Move to dispatcher func
  if (func != '+' && func != '-' && func != '*' && func != '/') {
    printf("Error: Invalid operation.\n");
    return 1;
  }

  printf("Enter two numbers(example: 2.5 3.5):");
  if (scanf("%lf %lf", &num1, &num2) != 2) {
    printf("Error: Invalid numbers.\n");
    return 1;
  }

  if (func == '+') {
    printf("Result: %f\n", num1 + num2); // TODO: split logic and io
  } else if (func == '-') {
    printf("Result: %f\n", num1 - num2); // TODO: move to func
  } else if (func == '*') {
    printf("Result: %f\n", num1 * num2);
  } else if (func == '/') {
    if (cmp_double(num2, 0.0) != EQUAL) {
      printf("Result: %f\n", num1 / num2);
    } else {
      printf("Error: Division by zero is not allowed.\n");
      return 1;
    }
  }
  // else { // na podumat'
  //     printf("Error: invalid operation\n");
  // }

  return 0;
}

enum CMP_RESULT {
 LESS  = -1,
 EQUAL =  0,
 GREAT =  1
};

CMP_RESULT cmp_double(double a, double b) {
  const double eps = 1e-9;

  //
  // fabs(a - b) < eps -> bivalent   (EQ / NOT EQ)
  //                   -> trivalent  (LESS, EQ, GREAT)
  //
  //
  //
  return (a - b > eps) ? GREAT : ((b - a > eps) ? LESS : EQUAL);
}

// TODO: 
// readme
// Makefile
// split into functions
// split into files
// test from file
// 

