#include <stdio.h>
#include <stdlib.h>
// malloc, free�Լ��� ����Ϸ��� stdlib.h ��������� ��Ŭ��� �ؾ���
int main(void) {
	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int));
	if (pi == NULL) {
		printf("�޸𸮰� �����մϴ�.\n");
		exit(1);//���α׷� ����
	}
	pd = (double*)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.4;

	printf("���������� ��� : %d\n", *pi);
	printf("�Ǽ������� ��� : %d\n", *pd);

	free(pi);
	free(pd);//���� �Ҵ� ���� ��ȯ

	return 0;
}