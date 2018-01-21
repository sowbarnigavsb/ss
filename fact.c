#include <stdio.h>

int main(void) {
	int n,m=1,i;
	scanf("%d",&n);
		
	for(i=1;i<=n;i++)
	{
		m=m*i;
	}
	printf("Factorial of %d is %d",n,m);
           
	return 0;
}
