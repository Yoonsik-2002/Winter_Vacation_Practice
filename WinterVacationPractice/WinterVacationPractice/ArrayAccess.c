#include <stdio.h>

int main(void)
{
	int array[5];
	int sum = 0;

	array[0] = 2, array[1] = 2, array[2] = 1, array[3] = 3, array[4] = 10;
	// int array[ ] = {2, 2, 1, 3, 10} �ʱ�ȭ ����Ʈ�� �̿��Ͽ� �ѹ��� ���� ����

	int len = sizeof(array) / sizeof(int);

	for (int i = 0; i < len; i++) {
		sum += array[i];
	}

	printf("�迭 ��ҿ� ����� ���� �� : %d", sum);

	return 0;
}