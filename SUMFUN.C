#include<stdio.h>
int sum(int,int);
int a,b,s;
int main()
{
printf("Enter the numbers :");
scanf("%d %d",&a,&b);
s=sum(a,b);
printf("The sum is :%d",s);
getch();
clrscr();
}
int sum(int x, int y)
{
return x+y;
}

