#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char array[10];
	char max = 0;
	int len = 0, i;

	printf("�ܾ �Է��ϼ��� : ");
	scanf_s("%9s", array, (unsigned)_countof(array));

	while (array[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		if(max < array[i])
			max = array[i];

	printf("���� ū �ƽ�Ű ��Ʈ���� ���� : %c \n", max);

	return 0;
}