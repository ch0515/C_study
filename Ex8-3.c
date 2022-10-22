#include <stdio.h>
int main(void) {
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);//배열 전체의 크기를 바이트 단위로 계산
	//배열 요소 개수 = 배열 전체 크기(20바이트) / 배열 요소 하나의 크기(4바이트)
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
	printf("평균 : %.1lf\n", avg);
	return 0;
}