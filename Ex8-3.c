#include <stdio.h>
int main(void) {
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);//�迭 ��ü�� ũ�⸦ ����Ʈ ������ ���
	//�迭 ��� ���� = �迭 ��ü ũ��(20����Ʈ) / �迭 ��� �ϳ��� ũ��(4����Ʈ)
	for (i = 0; i < count; i++) {
		scanf("%d", &score[i]);
	}
	for (i = 0; i < count; i++) {
		total += score[i];
	}
	avg = total / (double)count;
	for (i = 0; i < count; i++) {
		printf("%5d", score[i]);
	}
	printf("\n");
	printf("��� : %.1lf\n", avg);
	return 0;
}