#include <stdio.h>
int main()
{
	int n = 1;
	int w;
	int sum=0;
	
	int a = 0;
	for(n=1;n<=2020;n++)
	{
		int add = 0;
		int mul = 1;
		a = n;
		while(a>0)
		{
			w = a % 10;
			add += w;
			mul *= w;
			a /= 10;
		}
		if(mul>add)
		{
			sum += 1;
		}
	}
	
	
	printf("%d",sum);
	return 0;
}
