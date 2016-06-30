#include<stdio.h>
#include<conio.h>
void main()
{
char s[100];
int len,i,count=0;
clrscr();
scanf("%s",s);
len=strlen(s);
for(i=0;i<len;i++)
{
count=count+1;
}
printf("count of the string is %d",count);
getch();
}
