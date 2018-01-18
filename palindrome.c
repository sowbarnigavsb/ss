#include <stdio.h>

int main(void) {
	int a,b,r=0,d;
	scanf("%d",&a);
	d=a;
	while(a!=0)
	{
		b=a%10;
		r=r*10+b;
		a=a/10;
	}
	if(d==r)
	printf("Yes");
	else
	printf("No");
	// your code goes here
	return 0;
}
