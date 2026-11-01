#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int b = 0;
	int n;
	int a=0;
	scanf("%d", &n);
	int m = 0;
	for (m = 2;m < n;m++)
	{
		int flag = 1;
		for(b = 2;b < m;b++)
		{
			
			if (m % b == 0)
			{
				flag = 0;
				break;
			}
		}
		if(flag==1)
		{
			a = a + m;
		}
	}
	printf("%d", a);
	return 0;
}