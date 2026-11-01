#include <stdio.h>
int main()
{
	int a;
	int b = 0;
	for (a = 1; a <= 100;a++)
	{
		if (a % 2 != 0)
			b = b + a;

	}
	printf("b=%d\n", b);
		return 0;
}