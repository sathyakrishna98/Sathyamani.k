#include<stdio.h>
void main()
{
int num,power=0,power1,i;
scanf("%d %d",&num,&power1);
for(i=0;i<power1;i++)
{
power=num*power;
}
printf("%d",power);
}
