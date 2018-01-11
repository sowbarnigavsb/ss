#include<stdio.h>
int main()
{
int m,s=0;
scanf("%d",&m);
for(int i=1;i<=m;i++)
{
	s=s+i;
}
printf("sum of natural %d numbers is %d",m,s);

return 0;
}
