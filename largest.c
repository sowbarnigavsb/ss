#include<stdio.h>
int main()
{
int m,n,o;
scanf("%d%d%d",&m,&n,&o);
if(m>n)
{
	if(m>o)
	printf("%d is greatest",m);
	else
	printf("%d is greatest",o);
}
else
{
	if(n>o)
	printf("%d is greatest",n);
	else
	printf("%d is greatest",o);
}
return 0;
}
