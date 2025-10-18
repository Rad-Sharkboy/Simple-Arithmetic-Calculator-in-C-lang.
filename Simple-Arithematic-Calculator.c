#include <stdio.h>
#include <math.h>
int main(){
    char operator;
    int Num1, Num2;
    float result;

    printf("Choose an Operator;\n");
    printf("+ , - , * , /\n");
    printf("^ for power, s for square root, r for remainder\n");
    printf("Your Operator chosen: ");
    scanf(" %c", &operator);

    switch (operator){
    case '+':
        printf("Enter Num1 and Num2: ");
        scanf("%d %d", &Num1, &Num2);
        result = Num1 + Num2;
        printf("%d %c %d = %.0f", Num1, operator, Num2, result);
        break;
    case '-':
        printf("Enter Num1 and Num2: ");
        scanf("%d %d", &Num1, &Num2);
        result = Num1 - Num2;
        printf("%d %c %d = %.0f", Num1, operator, Num2, result);
        break;
    case '*':
        printf("Enter Num1 and Num2: ");
        scanf("%d %d", &Num1, &Num2);
        result = Num1 * Num2;
        printf("%d %c %d = %.0f", Num1, operator, Num2, result);
        break;
    case '/':
        printf("Enter Num1 and Num2: ");
        scanf("%d %d", &Num1, &Num2);
        if (Num2 == 0)
        {
            printf("Error: Division by zero!");
        }
        else
        {
            result = (float)Num1 / Num2;
            printf("%d %c %d = %.2f (2 D.P)", Num1, operator, Num2, result);
        }
        break;
    case '^':
        printf("Enter base and exponent: ");
        scanf("%d %d", &Num1, &Num2);
        result = pow(Num1, Num2);
        printf("%d ^ %d = %.2f", Num1, Num2, result);
        break;
    case 's':
        printf("Enter a number: ");
        scanf("%d", &Num1);
        if (Num1 < 0)
        {
            printf("Error: Square root of negative not allowed!");
        }
        else
        {
            result = sqrt(Num1);
            printf("sqrt(%d) = %.2f", Num1, result);
        }
        break;
    case 'r':
        printf("Enter Num1 and Num2: ");
        scanf("%d %d", &Num1, &Num2);
        if (Num2 == 0)
        {
            printf("Error: Division by zero not possible!");
        }
        else
        {
            int rem = Num1 % Num2;
            printf("%d %% %d = %d", Num1, Num2, rem);
        }
        break;
    default:
        printf("Invalid Operator.\n");
    }
    return 0;
}