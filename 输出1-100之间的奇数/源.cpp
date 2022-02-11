#include <stdio.h>
int main()
{
	int x,y,t,i;
	printf("请输入范围区间\n");
	scanf_s("%d", &x);
	printf("到\n");
	scanf_s("%d", &y);
	t=y-x;
	printf("这个范围的奇数为：");
	for (i = 0; i < t; i++)
	{
		if (x % 2 == 1)
		{
			printf("{%d}", x);
		}
	 x++;

	}


	return 0;
}