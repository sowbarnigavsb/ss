#include <stdio.h>

int main(void) {
	int b,e,i,s=1;
	scanf("%d%d",&b,&e);
	for(i=1;i<=e;i++)
	{
		s=s*b;
	}
	printf("%d power of %d is %d",b,e,s);
	
	// your code goes here
	return 0;
}
