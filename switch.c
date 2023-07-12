// switch case - menu driven program        case -> number /  char
#include <stdio.h>
int main()
{
    int a, b, ch;
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);
    printf("1. Addititon");
    printf("\n2. Substraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n\nEnter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Addition  of a and b is: %d\n", a + b);
        break;
    case 2:
        printf("Substraction  of a and b is: %d\n", a - b);
        break;
    case 3:
        printf("Multiplication  of a and b is: %d\n", a * b);
        break;
    case 4:
        printf("Division  of a and b is: %d\n", a / b);
        break;
    default:
        printf("Wrong input......");
        break;
    }
}