#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	printf("ע���˴�����Ŀ������������\n");
	printf("                            {1}�������Χ������\n");
	printf("                            {2}�������Χ��ż��\n");
	printf("                            {3}�����������\n");
	printf("                            {4}�����������\n");
	printf("                            {5}�����������\n");
	printf("                            {6}�����������\n");
	printf("������һ���������֣�\n");
	scanf_s("%d", &a);
	printf("��\n");
	scanf_s("%d", &b);
	printf("��ѡ����Ҫ����Ŀ��\n");
	scanf_s("%d", &c);
	switch (c)
	{
	case 1:
		int i, t;
		t = b - a;
		d = a;
		printf("�����Χ������Ϊ��");
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
		printf("�����Χ��ż��Ϊ��");
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
		printf("������������ǣ�%d��", t);
		break;
	case 4:
		t = b - a;
		printf("������������ǣ�%d��", t);
		break;
	case 5:
		t = a * b;
		printf("������������ǣ�%d��", t);
		break;
	case 6:
		float f,x,y;
		x = a;
		y = b;
		f = x / y;
		printf("������������ǣ�%f��", f);
		break;
	default:
		printf("���ڸ�Ц�� ���������");
		break;
	}
	return 0;
}