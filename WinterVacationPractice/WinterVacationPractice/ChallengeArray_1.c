#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char array[10];
	int i = 0;

	printf("�ܾ �Է��ϼ��� : ");
	scanf_s("%s", array, (unsigned)_countof(array)); // scanf_s ��� : ������ ����(%s, %c)�� �Է¹��� ���� argument���� size�� ����������Ѵ�. (������, �Ǽ��� ���� �Է¹������� scanf�� �����ϰ� ���) ex) scanf_s("%s %c", var1, sizeof(var1), var2, sizeof(var2));

	while (array[i] != '\0') {
		i++;
	}

	printf("���� ���� : %d", i);
	printf("\n�迭�� ũ��� : %zu", sizeof(array));


	return 0;
}