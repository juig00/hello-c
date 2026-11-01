#include <stdio.h>
int main()
{
	int a = 1;
	int b = 1;
	int c = 1;
	int i;
	int n = 20190324;
	int next;
	for(i=4;i<=n;i++)
	{
		next = a + b + c;
		a = b;
		b = c;
		
		next = next % 10000;
		c = next;
	}
	
	printf("%d", next);
	return 0;
}