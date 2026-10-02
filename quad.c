#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,x1,x2,disc;
    printf("Enter values for coefficients a, b & c :\n");
    scanf("%f %f %f",&a,&b,&c);
    if (a==0)
    {
        printf("Invalid Value!");
    }
    else
    {
        disc = (b*b - 4*a*c);
        if (disc > 0)
        {
            printf("Real and Distinct Roots:\n");
            x1 = (-b + sqrt(disc))/2*a;
            x2 = (-b - sqrt(disc))/2*a;
            printf("The roots of the Quadratic equation are: %.2f %.2f \n",x1,x2);

        }
        else if (disc == 0)
        {
            printf("Real and Equal Roots:\n");
            x1 = (-b)/2*a;
            printf("The roots of the Quadratic equation are: %.2f %.2f \n",x1,x1);

        }
        else
        {
            printf("Roots are complex and distinct:\n");
            x1 = (-b)/2*a;
            x2 = sqrt(disc)/2*a;
            printf("Root1 %.2f + %.3fi \n",x1,x2);
            printf("Root1 %.2f - %.3fi \n",x1,x2);

        }
        
    }
    return 0;
}