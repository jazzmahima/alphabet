#include<stdio.h>
#include<conio.h>
void main()
{
int q;
clrscr();
printf("Enter the char");
scanf("%s",&q);
if(((q>=a)&&(q<=z))||((q>=A)&&(q<=Z)))
{
printf("given char is alphabet");
}
else
{
printf("given char is not an alphabet");
}
getch();
}

