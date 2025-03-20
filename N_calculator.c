#include <stdio.h>  
int main()
{
    float number1, number2;
    float answer;
    char op;

    printf(" Enter the operation to perform(+, -, *, /):   ");
    scanf_s("%c", &op);
    printf(" Enter the first number: ");
    scanf_s(" %f", &number1);
    printf(" Enter the second number: ");
    scanf_s(" %f", &number2);

    switch (op) {
        //addition  
    case '+':
        answer = number1 + number2;
        printf(" %f + %f = %.2f\n", number1, number2, answer);
        break;

        //substraction  
    case '-':
        answer = number1 - number2;
        printf(" %f - %f = %.2f\n", number1, number2, answer);
        break;

        //multiplication  
    case '*':
        answer = number1 * number2;
        printf(" %f * %f = %.2f\n", number1, number2, answer);
        break;

        //division  
    case '/':
        if (number2 == 0)
        {
            printf(" \n Divisor cannot be zero. Please enter another value \n");
            scanf_s("%f", &number2);
        }
        answer = number1 / number2;
        printf(" %f / %f = %.2f\n", number1, number2, answer);
        break;

    default:
        printf(" \n Enter valid operator \n");

    }

    
    
    return 0;
}
