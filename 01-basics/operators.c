#include <stdio.h>

int main()
{
   int a, b;
   printf("Enter two numbers:\n");
   scanf("%d %d",&a, &b); 
   printf("\nPerforming Calculations using Operators\n");
   printf("=============================================\n");
   printf("\n\t 1. Arithmetic\n=============================\n");
   
   printf("%d + %d = %d\n",a,b,a+b);
   printf("%d - %d = %d\n",a,b,a-b);
   printf("%d * %d = %d\n",a,b,a*b);
   printf("%d / %d = %d\n",a,b,a/b);
   printf("%d %% %d = %d\n",a,b,a%b);

   printf("=============================================\n");
   printf("\n\t 2. Relational\n=============================\n");
   
   printf("%d == %d = %d\n",a,b,a==b);
   printf("%d != %d = %d\n",a,b,a!=b);
   printf("%d > %d = %d\n",a,b,a>b);
   printf("%d < %d = %d\n",a,b,a<b);
   printf("%d >= %d = %d\n",a,b,a>=b);
   printf("%d <= %d = %d\n",a,b,a<=b);

   printf("=============================================\n");
   printf("\n\t 3. Logical\n=============================\n");
   
   printf("(%d>4) && (%d<6) = %d\n",a,b,(a>4)&&(b<6));
   printf("(%d>4) || (%d<6) = %d\n",a,b,(a>4)||(b<6));
   printf("!0 = %d\n",!0);

   printf("=============================================\n");
   printf("\n\t 4. Assignment\n=============================\n");
   
   printf("a += 5 = %d\n",a+=5);
   printf("a -= 5 = %d\n",a-=5);
   printf("a *= 5 = %d\n",a*=5);
   printf("a /= 5 = %d\n",a/=5);
   printf("a %%= 5 = %d\n",a%=5);
   
   printf("=============================================\n");
   printf("\n\t 5. Increament & Decreament\n=============================\n");
   
   printf("b = ++a = %d\n",b=++a);
   printf("a = %d\n",a);
   printf("b = a++ = %d\n",b=a++);
   printf("a = %d\n",a);
   printf("b = --a = %d\n",b=--a);
   printf("a = %d\n",a);
   printf("b = a-- = %d\n",b=a--);
   printf("a = %d\n",a);

   printf("=============================================\n");
   printf("\n\t 6. Bitwise\n=============================\n");
   
   printf("%d & %d = %d\n",a,b,a&b);
   printf("%d | %d = %d\n",a,b,a|b);
   printf("%d ^ %d = %d\n",a,b,a^b);
   printf("~%d = %d\n",b,~b);
   printf("%d << 2 = %d\n",a,a<<2);
   printf("%d >> 2 = %d\n",a,a>>2);
   
   
   return 0;
}