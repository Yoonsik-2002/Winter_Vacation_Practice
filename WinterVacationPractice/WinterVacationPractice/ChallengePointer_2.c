#include <stdio.h>

int main(void)
{
	int num1 = 10; int num2 = 20;

	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp; // int�� ������ ���� temp����

	(* ptr1) += 10;
	(* ptr2) -= 10;

	temp = ptr1; // ������ ���� temp�� ptr1(num1)�� ����Ŵ
	ptr1 = ptr2;
	ptr2 = temp;

	printf("ptr1�� ����Ű�� ������ ����� �� : %d --- ptr2�� ����Ű�� ������ ����� �� : %d\n", *ptr1, *ptr2);

	return 0;

}

