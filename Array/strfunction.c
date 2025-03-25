#include<stdio.h>
#include<string.h>
int main()
{
    char p[100];
    printf("Enter a Full Name:");
    fgets(p,sizeof(p),stdin);
         for( int i=0;p[i];i++)
    {
   if (p[i]=='a'|| p[i]=='e' || p [i]=='i' || p[i]=='o' || p[i]=='u')
   {
   printf("%c",p[i]);
   }
    }
   return 0;
}