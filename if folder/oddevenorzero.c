#include <stdio.h>

int main() {
    int num;

 
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num == 0) 
    {
        printf("%d is an zero.\n", num);
    } 
    else if (num % 2 == 0) 
    {
        printf("%d is an even number.\n", num);
    } 
    else if (num % 5==0)
     {
        printf("%d is a 5 multiplieer.\n", num);
    }
    else
    { 
        printf("%d is an odd number.\n", num);
    } 

    return 0;
}
