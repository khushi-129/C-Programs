#include <stdio.h>

int main()
{
    int a, b,c;
    printf("Enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);

    //ternary operator
    int max = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("%d is largest",max);

    return 0;

}