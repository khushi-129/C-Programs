/*Write a C program to display the binary representation of all even numbers between 1 and N.*/
#include <stdio.h>

int main()
{
    int N,num,bit,flag;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(int i = 2; i <= N; i += 2)
    {
        printf("%d = ",i);
        flag = 0;       //to flag when first nonzero digit is encountered(i.e 1)

        for(int num = 31; num >= 0; num--)
        {
            bit = ((i>>num)&1);

            if(bit == 1)
                flag = 1;
            
            if(flag)
                printf("%d", bit);
        }
        printf("\n");
    }
    return 0;
}