#include <stdio.h>
int main()
{
	int x,y,t,i;
	printf("�����뷶Χ����\n");
	scanf_s("%d", &x);
	printf("��\n");
	scanf_s("%d", &y);
	t=y-x;
	printf("�����Χ������Ϊ��");
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