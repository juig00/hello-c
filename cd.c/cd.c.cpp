#include <stdio.h>
int main()
{
	char st[100];
	int b = 0;
	printf("输入字符串");
	fgets(st, sizeof(st), stdin);
	for(int i=0;st[i]!='\0';i++)
	{if(st[i]>='0'&&st[i]<='9')
	{
		b += st[i] - '0';
	}
	}printf("%d\n", b);
	return 0;


}