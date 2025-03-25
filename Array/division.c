#include<stdio.h>
int main()
{
int m[10]; 
float a,n;
printf("Enter marks of 8 subjects:");

for (int i=0; i<8; i++)
{
scanf("%d",&m[i]);
if((m[i]>100)|| (m[i]<0))
{
printf("Mark must be between 0 to 100 \n");
i=i-1;
a=a-m[i];
}
a=a+m[i];
}
n=a/8;
printf("The percentage is %f",n);
printf("\n");

if(n>=90)
{
    printf(" Grade:A+");
}
else if (n>=80)

    {
        printf(" Grade:A");
}
else if (n>=70)

    {
        printf(" Grade:B+");
}
else if (n>=60)

    {
        printf(" Grade:B");
}
else if (n>=50)

    {
        printf(" Grade:C+");
}
else if (n>=40)

    {
        printf(" Grade:C");
}
else if (n<40)

    {
        printf(" NG \n" );
        printf("Fail");
}
return 0;
}

