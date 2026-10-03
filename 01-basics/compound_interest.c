#include <stdio.h>
#include <math.h>

int main()
{
    /* Compound Interest Formula : a = p*(1 + (r/n))^(n*t)
        where p = Principal,
        a = Amount,
        r = Interest Rate (decimal),
        n = No of times interest is compunded per year,
        t = Time (years)
    */
    double a, p, r;
    int n, t;
    printf("Calculating Compound Interest\n");
    printf("Enter the values for Principal amount, Interest rate(decimal), interest compounded per year, Time Period:\n");
    scanf("%lf %lf %d %d",&p,&r,&n,&t);
    a = p * pow(1.0 + (r/(double)n),(n*t));
    printf("\n The Amount is: %.2f",a);

    return 0;
}