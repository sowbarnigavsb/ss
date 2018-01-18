#include <stdio.h>

int main(void) {
	int a,c;
	scanf("%d%d",&a,&c);
	for(int i=a+1;i<=c;i++)
	{
		if(i%2!=0)
		printf("%d\t",i);
		
	}
	

	return 0;
}
