#include <stdio.h>
#include <math.h>


int main(){
    int num;
    int flag = 1;
    printf("Enter a Positive Integer: ");
    scanf("%d",&num);

    if (num<=1){
        printf("Not a Positive Integer!");
    }

    else{
        for (int i = 2; i <= sqrt(num); i++){
            if (num % i == 0){
                flag = 0;
                break;
            }
        }
        if (flag == 0){
            printf("%d is not a Prime Number.", num);
        }
        else{
            printf("%d is a Prime Number.", num);
        }
    }
    return 0;

}