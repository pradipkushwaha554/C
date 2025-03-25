#include<stdio.h>
int main ()
{
    int A[10],sum=0;
    float avg;
    printf("enter 10 number:  ");
    for (int i=0; i<10;i++)
    {

 scanf ("%d",&A[i]);
 sum=sum+A[i];

    }
    avg=sum/10.0;
printf("The average of 10 number:%f",avg);
return 0;
}
   
