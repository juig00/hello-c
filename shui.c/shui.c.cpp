
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c, d;//百，十。个
	int e = 0;
	for(a=100;a<=999;a++)
	
	{
		b = a / 100;
		c = a / 10 % 10;
		d = a % 10;
		if (a == b * b * b + c * c * c + d * d * d)
			e = e + 1;
		
	}
	printf("100到999之间有%d个水仙花数\n",e);

	return 0;

}