#include <stdio.h>

int main(void) {
	int c,r,s,x,y,i,m;
	scanf("%d%d",&x,&y);
	
	for(i=x;i<=y;i++)
        {
             m=i; 
	  s=0;
	while(m!=0)
	{
		r=m%10;
		c=r*r*r;
		s+=c;
		m=m/10;
	}
	if(s==i)
	printf("%d\t",i);
	}
	return 0;
}
