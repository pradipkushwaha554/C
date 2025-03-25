#include<stdio.h>
int fact(int);
int  main()
{
    int  p,n;
    printf("Enter a number:");
scanf ("%d",&n);
    p=fact(n);
    printf("%d is the factorial of %d.",p,n);

    return 0;
}
int fact(int n)
{
int s;

if(n==1)
return 1;
s=n*fact(n-1);
return s;


}