#include <stdio.h>

int sum(int x, int y);//함수 호출 전, 컴퍼일러에게 반환형을 미리 알리기 위해 함수 선언을 함
//int sum(int, int);로 쓸수도 있음

//함수 선언이 없다면 함수 정의는 항상 함수 호출 이전에 있어야 함
//즉, 함수 선언식이 없다면 sum 함수 정의가 main위에 있어야함.

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
	//return temp; temp는 x + y의 값을 저장해서 반환하는 역할을 함
	return (x + y); //temp 변수를 쓰지 않고 바로 값을 반환
}