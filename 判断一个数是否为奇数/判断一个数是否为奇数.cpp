#include <stdio.h>
int main()
{
	int x, y;
	printf("请输入数字：");
	scanf_s("%d", &x);
	if (1 == x % 2)
	{
		printf("这个数是奇数\n");
	}
	else
	{
		printf("这个数是偶数\n");
	}
return 0;
}