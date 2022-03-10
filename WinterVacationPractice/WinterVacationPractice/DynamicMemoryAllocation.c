#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* ptr1 = (int*)malloc(sizeof(int)); // heap ������ 4byteũ���� �޸� ���� �Ҵ�, �ش� �޸𸮰����� �ּҰ��� ������ ���� ptr1�� ��ȯ. => ptr1�� heap������ �Ҵ�� �� 4byte¥�� �޸� ������ ����Ŵ
	int* ptr2 = (int*)malloc(sizeof(int) * 3); // heap ������ 12byteũ���� int�� �迭(�޸� ����) �Ҵ�. ptr2�� heap������ �Ҵ�� �迭�� ���� �ּҰ�(�迭�� ù��° �ε����� �ּҰ�)�� ���´�. ptr2 = �Ҵ�� �迭�� �̸�(�迭�� �̸��� �迭�� ���� �ּҰ��� �ǹ�)
	int i;

	if (ptr1 != NULL) { // malloc �Լ��� ���� ���� ���� ����� �����ڵ�
		*ptr1 = 20; // ���� ��ȯ���� void�� malloc �Լ��� int������ ����ȯ ���־��� ������ ����(������ ����)�� �����ϴ� !
	}

	
	if (ptr2 != NULL) {
		for (i = 0; i < 12; i++) {
			ptr2[i] = i + 1;
		}
	}

	printf("%d\n", *ptr1);

	for (int i = 0; i < 12; i++) {
		printf("%d", ptr2[i]);
	}

	free(ptr1); // ptr1�� ���ڷ� �ϴ� free�Լ��� ȣ���Ͽ� heap������ �Ҵ�� �޸𸮰����� �Ҹ��Ŵ
	free(ptr2); // ptr2�� ���ڷ� �ϴ� free�Լ� ȣ��

	return 0;
}