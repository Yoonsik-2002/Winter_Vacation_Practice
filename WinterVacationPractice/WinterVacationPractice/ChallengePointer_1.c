#include <stdio.h>

int main(void)
{
	int num = 17;

	int* ptr1 = &num;
	int* ptr2 = ptr1; // ptr1��ü�� int�� ���� num�� �ּҰ��� ������ �ִ� ������ �����̱� ������ & ������ ��� X. ptr1�� ptr2 �Ѵ� num�� ����Ų��. 

	(*ptr1)++; // 17++;
	(*ptr2)++; // 18++;

	printf("%d\n", num);

	return 0;
}