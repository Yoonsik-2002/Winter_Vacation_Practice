#include <stdio.h>

int main(void)
{
	int num1 = 10; 
	int num2 = 20;  
	int num0 = 0;

	int* ptr1 = &num1;
	int* ptr2 = &num2;

	*ptr1 += 10;
	*ptr2 -= 10;

	ptr1 = &num0;
	ptr2 = &num1;
	ptr1 = &num2;

	printf("ptr1�� ����Ű�� ������ ����� �� : %d --- ptr2�� ����Ű�� ������ ����� �� : %d\n", *ptr1, *ptr2);

	return 0;
}