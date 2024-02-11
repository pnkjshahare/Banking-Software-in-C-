#include<stdio.h>
int main()
{
    int i,n=1,a;
    char name[30];
    // for(i=0;i<n;i++)
    // {
    //     printf("enter your name\n");
    //     printf("for exist press 1 to continue 0\n");
    //     scanf("%d",)
    // }
do
{
    printf("enter your name\n");
    gets(name);
   printf("for exist press 0 contiune 11\n");
   scanf("%d",&a);
    if(a==1)
    {
        n++;
        i++;
    }
    if(a==0)
    {
    n=0;
    }
    }
    while(i<n);

}