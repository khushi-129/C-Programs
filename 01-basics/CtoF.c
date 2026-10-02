#include <stdio.h>

int main()
{
    float cel, far;
    //C to F
    printf("Enter value of Temperature in C:\n");
    scanf("%f",&cel);
    far = (cel*1.8)+32;
    printf("%.2f C = %.2f F\n",cel,far);

    //F to C
    printf("Enter value of Temperature in F:\n");
    scanf("%f",&far);
    cel = (far-32)/1.8;
    printf("%.2f F = %.2f C",far,cel);

    return 0;
}