#include <stdio.h>
int main(void) {
	char str[80];

	printf("문자열 입력 : ");
	gets(str);
	puts("입력된 문자열 : ");
	puts(str);
	// gets는 입력할 배열의 크기를 검사하지 않으므로 배열 크기를 고려하기
	//+ scanf함수, strcpy도 포함
	return 0;
}