#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int a;
	int b = 2;
	scanf("%d", &a);
	for (b;b <= a;b++)
	{
		if (a % b == 0)
			break;
	}
	    if(a==1||b<a)
	printf("%d不是素数\n",a);
		
	else printf("%d是素数\n",a);
		return 0;
}
	







