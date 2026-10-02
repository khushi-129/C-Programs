//swapping two varbales without using third variable
#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d %d",&x,&y);

    printf("Numbers before Swapping \nx = %d\n",x);
    printf("y = %d\n",y);

    x = x^y;
    y = x^y;
    x = x^y;

    printf("Numbers After swapping\nx = %d\n",x);
    printf("y = %d\n",y);

    return 0;
}