#include<stdio.h>
int main ()
{
    int A[10],avg,sum=0;
    printf("enter 10 number:  ");
    for (int i=0; i<10;i++)
    {

 scanf ("%d",&A[i]);

    }
    int d;
    for (int i=0; i<10;i++)
    {
        for (int j=i+1; j<10;j++)
        {
    if (A[i]>A[j])
    {
    
    d=A[i];
    A[i]=A[j];
    A[j]=d;
    
        }
    }

}
  printf("\n");  
  printf("The number is sorting in ascending order:\n"); 

for (int k=0; k<10;k++)
        {
    
    printf("%d,         ",A[k]);
    
        } 
   
return 0;
}
   
