#include<stdio.h>
void main()
{
int i,a[10],n;
printf("Enter the n value:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
if(i==a[i])
{
printf("%d",a[i]);
}
}
}


