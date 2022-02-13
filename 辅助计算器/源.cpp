#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	printf("注：此处是项目，做功能运算\n");
	printf("                            {1}求这个范围的奇数\n");
	printf("                            {2}求这个范围的偶数\n");
	printf("                            {3}这两个数相加\n");
	printf("                            {4}这两个数相减\n");
	printf("                            {5}这两个数相乘\n");
	printf("                            {6}这两个数相除\n");
	printf("请输入一个俩个数字：\n");
	scanf_s("%d", &a);
	printf("到\n");
	scanf_s("%d", &b);
	printf("请选择需要的项目：\n");
	scanf_s("%d", &c);
	switch (c)
	{
	case 1:
		int i, t;
		t = b - a;
		d = a;
		printf("这个范围的奇数为：");
		for (i = 0; i <= t; i++)
		{
			if (d % 2 == 1)
			{
				printf("{%d}", d);
			}
		d++;
		}
		break;
	case 2:
		e = a;
		t = b - a;
		printf("这个范围的偶数为：");
		for (i = 0; i <= t; i++)
		{
			if (e % 2 == 0)
			{
				printf("{%d}", e);
			}
		e++;
		}
		break;
	case 3:
		t = a + b;
		printf("这两个数相加是（%d）", t);
		break;
	case 4:
		t = b - a;
		printf("这两个数相减是（%d）", t);
		break;
	case 5:
		t = a * b;
		printf("这两个数相乘是（%d）", t);
		break;
	case 6:
		float f,x,y;
		x = a;
		y = b;
		f = x / y;
		printf("这两个数相除是（%f）", f);
		break;
	default:
		printf("你在搞笑？ 输入错误了");
		break;
	}
	return 0;
}