#include <stdio.h>

int sum(int x, int y);//�Լ� ȣ�� ��, �����Ϸ����� ��ȯ���� �̸� �˸��� ���� �Լ� ������ ��
//int sum(int, int);�� ������ ����

//�Լ� ������ ���ٸ� �Լ� ���Ǵ� �׻� �Լ� ȣ�� ������ �־�� ��
//��, �Լ� ������� ���ٸ� sum �Լ� ���ǰ� main���� �־����.

int main(void) {
	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("result : %d\n", result);
	return 0;
}
int sum(int x, int y) {
	//int temp;
	//temp = x + y;
	//return temp; temp�� x + y�� ���� �����ؼ� ��ȯ�ϴ� ������ ��
	return (x + y); //temp ������ ���� �ʰ� �ٷ� ���� ��ȯ
}