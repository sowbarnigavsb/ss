#include <stdio.h>
int main(void) 
{
	int a,c,count=0;
	scanf("%d%d",&a,&c);
	for(int i=a+1;i<=c;i++)
	{
		count=0;
		for(int j=1;j<=i;j++)
		{
		if(i%j==0)
		count ++;
		}
		if(count==2)
		printf("%d\t",i);
		
		
	}
	

	return 0;
}
