#include <stdio.h>

void print_char(char ch, int count);

int main(void) {
	print_char('@', 5);

	return 0;
}
void print_char(char ch, int count) {// 반환형이 없다 void
	int i;
	for (i = 0; i < count; i++) {
		printf("%c", ch);
	}
	return;// void면 return 단독 사용
}