#include<stdio.h>
void main()
{
int i,num,pal=0,rev=0;
scanf("%d",&num);
pal=num;
for(i=0;pal>0;i++)
{
rev=rev*10+(pal%10);
pal=pal/10;
}
if(rev==num)
printf("palindrome");
else
printf("not palindrome")
}
