#include <stdio.h>
int MaxNum(int, int, int);
int MinNum(int, int, int);
int GetAbsolValue(int);

int main(void)
{
	int num1, num2, num3;
	printf("���� 3�� �Է� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("���밪�� ���� ū ���� : %d\n", MaxNum(num1, num2, num3));
	printf("���밪�� ���� ���� ���� : %d\n", MinNum(num1, num2, num3));

	return 0;
}

int GetAbsolValue(int num)
{
	if (num > 0)
		return num;
	else
		return num * (-1);
}

int MaxNum(int num1, int num2, int num3)
{
	num1 = GetAbsolValue(num1);
	num2 = GetAbsolValue(num2);
	num3 = GetAbsolValue(num3);

	if (num1 > num2)
		return (num1 > num3) ? num1 : num3;
	else
		return (num2 > num3) ? num2 : num3;

}

int MinNum(int num1, int num2, int num3)
{
	num1 = GetAbsolValue(num1);
	num2 = GetAbsolValue(num2);
	num3 = GetAbsolValue(num3);

	if (num1 < num2)
		return (num1 < num3) ? num1 : num3;
	else
		return (num2 < num3) ? num2 : num3;
}