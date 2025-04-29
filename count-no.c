#include<stdio.h>
int main()
{
int  x[10],i,y,lookFor,count;
y=0;
i=0;
while(y<=9)
{
printf("enter a number %d : ",i);
scanf("%d",&x[y]);
y++;
i++;
}
printf("enter number to search and count : ");
scanf("%d",&lookFor);
y=0;
count=0;
while(y<=9)
{
if(lookFor==x[y])
{
count++;
}
y++;
}
printf("search %d at count %d ",lookFor,count);
return 0;
}