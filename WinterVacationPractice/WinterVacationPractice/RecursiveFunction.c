#include <stdio.h>

void Recursive(int); // �Լ� ����

int main(void)
{
	Recursive(3); // �Լ� ȣ��
	return 0;
}

void Recursive(int num) // �Լ� ���� 
{
	if (num <= 0) // ����Լ��� Ż������
		return;
	printf("Recursive Call ! \n", num); 
	Recursive(num - 1); // �Լ� ȣ��(���)
}

/*#incude <stdio.h>

void Recursive(int num)
{
	if (num <= 0)
	return;
	printf("Recursive Call ! \n", num);
	Recursive(num - 1);
}

int main(void)
{
	Recursive(3);
	return 0;
}*/