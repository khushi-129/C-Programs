#include <stdio.h>

int main()
{   
    /* Dividing two Integers using Bitwise Operators */
    unsigned int dvd,div,quot = 0;
    int i;
    
    printf("Enter the value for Dividend and Divisor: \n");
    scanf("%u %u",&dvd, &div);

    if (div == 0)
    {
        printf("Zero Division Error!");
        return 1;
    }

    for (i = 31; i >= 0; i--)
    {
        if ((dvd >> i)>=div)
        {
            dvd -= (div << i);
            quot = quot | (1u << i);
        }

    }
    printf("Quotient = %u and Remainder = %u",quot,dvd);
    return 0;

}