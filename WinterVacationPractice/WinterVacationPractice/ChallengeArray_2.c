#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char array[10];
	int i = 0;

	printf("�ܾ �Է��ϼ��� : ");
	scanf_s("%9s", array, (unsigned)_countof(array));

	while (array[i] == '\0')
		i++; 

	for (int x = 0; x < i; x++) {
		for (int y = i - 1; y >= 0; y--) {
			array[y] = array[x];
		}
	}

	printf("�Է¹��� �ܾ��� ���� : %s\n", array);

	return 0;
}