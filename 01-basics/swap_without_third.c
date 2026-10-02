#include <stdio.h>

int main()
{
    int a, b;

    /* Method 1 : Single statement using the comma operator */
    printf("Method 1: Comma operator\n");
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);

    printf("Numbers before Swap: a = %d and b = %d\n",a,b);
    a = a + b, b = a - b, a = a - b;
    printf("Numbers after Swap: a = %d and b = %d\n",a,b);

    /* Method 2 : Bitwise XOR operator */
    printf("Method 2: Bitwise XOR operator\n");
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);

    printf("Numbers before Swap: a = %d and b = %d\n",a,b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("Numbers after Swap: a = %d and b = %d\n",a,b);

    return 0;
}