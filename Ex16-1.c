#include <stdio.h>
#include <stdlib.h>
// malloc, free함수를 사용하려면 stdlib.h 헤더파일을 인클루드 해야함
int main(void) {
	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int));
	if (pi == NULL) {
		printf("메모리가 부족합니다.\n");
		exit(1);//프로그램 종료
	}
	pd = (double*)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.4;

	printf("정수형으로 사용 : %d\n", *pi);
	printf("실수형으로 사용 : %d\n", *pd);

	free(pi);
	free(pd);//동적 할당 영역 반환

	return 0;
}