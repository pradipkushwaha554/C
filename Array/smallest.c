#include<stdio.h>
int main()
{
int m[10],a,n; 
printf("Enter 10 numbers:");

for (int i=0; i<10; i++)
{
scanf("%d",&m[i]);
}
a=m[0];
for (int i=0; i<10; i++)
{
if (a>m[i])
a=m[i];
}
printf(" The smallest number is:%d",a);
return 0;
}