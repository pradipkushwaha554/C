#include <Stdio.h>
void  codd(int);
int main()
{
int s, n;
printf("Enter a number:");
scanf("%d",&n);
codd(n);

return 0;
}

void codd(int n)
{
    if(n>=1)
{
    codd(n-1);
printf(" %d  ",n );

}

}
