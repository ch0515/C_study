#include <stdio.h>
int main(void) {
	char str[80];

	printf("���ڿ� �Է� : ");
	gets(str);
	puts("�Էµ� ���ڿ� : ");
	puts(str);
	// gets�� �Է��� �迭�� ũ�⸦ �˻����� �����Ƿ� �迭 ũ�⸦ ����ϱ�
	//+ scanf�Լ�, strcpy�� ����
	return 0;
}