#include <stdio.h>

int main() {
    int num1, num2;
        char operator;

            // Input: Read two integers and the operator
                scanf("%d %d %c", &num1, &num2, &operator);

                    // Perform the calculation based on the operator
                        switch (operator) {
                                case '+':
                                            printf("%d\n", num1 + num2);
                                                        break;
                                                                case '-':
                                                                            printf("%d\n", num1 - num2);
                                                                                        break;
                                                                                                case '*':
                                                                                                            printf("%d\n", num1 * num2);
                                                                                                                        break;
                                                                                                                                case '/':
                                                                                                                                            if (num2 == 0) {
                                                                                                                                                            printf("Error: Division by zero\n");
                                                                                                                                                                        } else {
                                                                                                                                                                                        printf("%d\n", num1 / num2);
                                                                                                                                                                                                    }
                                                                                                                                                                                                                break;
                                                                                                                                                                                                                        default:
                                                                                                                                                                                                                                    printf("Error: Invalid operator\n");
                                                                                                                                                                                                                                                break;
                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                        return 0;
                                                                                                                                                                                                                                                        }