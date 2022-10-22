#include "jingumdari.h"

int main(void) {
	while (1) {
		drawTitle();
		if (!menuDraw()) {
			gloop();
		}
		else
			break;
	}

	return 0;
}

void drawTitle() {
	int x = 48;
	int y = 2;
	system("cls");

	setColor(yellow, black);
	printf("\n\t\t\t\t    _ _                            _           _      ");
	printf("\n\t\t\t\t   (_|_)_ _   __ _  _  _ _ __   __| | __ _ _ _(_)     ");
	printf("\n\t\t\t\t   | | | ' | / _` |  || | '  \\\\/ _`  / _` | '_| |     ");
	printf("\n\t\t\t\t  _/ |_|_||_\\\\__, |\\\\_,_|_|_|_\\\\__,_\\\\__,_|_| |_|     ");
	printf("\n\t\t\t\t |__/        |___/                                    ");


	setColor(white, black);
	x = 37, y = 10;
	gotoxy(x, y);
	printf(" ---||-------||-------||----||------||-------||-----");
	gotoxy(x, ++y);
	printf("|                                                   |");
	gotoxy(x, ++y);
	printf("|           �ȱ��� ¡�˴ٸ��� ���߽ʽÿ�.           |");
	gotoxy(x, ++y);
	printf("|                                                   |");
	gotoxy(x, ++y);
	printf("|      ���� ����, ������ ¡�˴ٸ��� �ǳʽʽÿ�.     |");
	gotoxy(x, ++y);
	printf("|          ����Ű(�� ��) ����Ű(ENTER)              |");
	gotoxy(x, ++y);
	printf("|                                                   |");
	gotoxy(x, ++y);
	printf("|  �� 10���� ��ȸ �ȿ� ¡�˴ٸ��� �ǳʸ� ����Դϴ� |");
	gotoxy(x, ++y);
	printf("|                                                   |");
	gotoxy(x, ++y);
	printf(" ---||-------||-------||----||------||-------||-----");

	x = 94, y = 20;
	setColor(lightcyan, black);
	gotoxy(x, y);
	printf("    �� �� C  C �� ��");
	gotoxy(x, ++y);
	printf("  �� ( //��- ��//) �� ");
	gotoxy(x, ++y);
	printf("    �������� U U��������");
	gotoxy(x, ++y);
	printf("    �� ����ȳ�  ��");
	gotoxy(x, ++y);
	printf("    ������������������������");
	setColor(white, black);

	// ���⿡ ĳ���� ������ ��!!
	setColor(brown, black);
	x = 7;
	y = 20;
	gotoxy(x, y);
	printf("������ �����������ξ���������");
	gotoxy(x, ++y);
	printf("��>��������������\\,�� ��/��");
	gotoxy(x, ++y);
	printf("������>����`�� ��o��o)��");
	gotoxy(x, ++y);
	printf("���� ����>�� �� ��,�� ��");
	gotoxy(x, ++y);
	printf("������������_,,,/������");
	setColor(white, black);
}

int menuDraw() {
	int input;
	int x = 58, y = 23;
	int key = y;
	int num = 1;
	gotoxy(x - 2, y);
	printf("> �����ϱ�\n");
	gotoxy(x, y + 1);
	printf("�����ϱ�");
	while (1) {
		input = _getch();
		switch (input) {
		case UP: {
			if (y > key) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, --y);
				printf(">");
			}
			break;
		}
		case DOWN: {
			if (y < key + num) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, ++y);
				printf(">");
			}
			break;
		}
		case ENTER: {
			return y - key;
		}
		case ESC: {
			break;
		}
		}
	}
	return 0;
}
int keyControl() {
	int input;
	while (1) {
		input = _getch();
		switch (input) {
		case LEFT: {
			return 1;
			break;
		}
		case RIGHT: {
			return 2;
			break;
		}
		}
	}
	return 0;
}
void gloop() {
	int center = 15;
	int index = center;
	int turn = center;
	int life = center - 1;
	int arr_bool[16][2];	// 1 0 �� �迭
	char arr_glass[16][2];
	int a;

	//const randomBit = rand() % 2;
	//�� �־��ֱ�
	system("cls");
	srand(time(NULL));
	for (int i = 0; i < 16; i++) {
		arr_bool[i][0] = rand() % 2;
		arr_bool[i][1] = !arr_bool[i][0];
		for (int j = 0; j < 2; j++) {
			arr_glass[i][j] = 'O';
			//printf("%d ", arr_bool[i][j]);
		}
		//printf("\n");
	}
	while (1) {

		system("cls");
		//�׵θ� �׷��ֱ�
		for (int i = 0; i < 70; i++) {
			gotoxy(i, 0);
			printf("��");
			gotoxy(i, 29);
			printf("��");
		}
		for (int i = 0; i < 29; i++) {
			setColor(yellow, black);
			gotoxy(0, i);
			printf("��");
			gotoxy(70, i);
			printf("��");
			setColor(white, black);
		}
		int x = 25;
		int y = 3;
		// ¡�˴ٸ� �׷��ֱ�
		for (int i = 0; i < 16; i++) {
			gotoxy(x, ++y);
			printf("||");
			setColor(lightgreen, black);
			for (int j = 0; j < 2; j++) {
				printf("   %c   ", arr_glass[i][j]);
			}
			setColor(white, black);
			printf("||");
			if (i == turn + 1) printf("<------����ġ\n");
			else printf("\n");
		}

		x = 75;
		y = 2;
		gotoxy(x, y);
		printf("�������� �״´� ���ƾ�~");
		y = 4; gotoxy(x, ++y);
		setColor(red, black);
		printf("(;���Ь�<`)");
		gotoxy(x, ++y);
		printf("  _______//");
		gotoxy(x, ++y);
		printf("  --|||||- ");
		gotoxy(x, ++y);
		printf("    ||||| ");
		gotoxy(x, ++y);
		printf("     || // ");
		setColor(white, black);

		setColor(lightcyan, black);
		y = 12;
		gotoxy(x, y);
		printf(" -----------------");
		gotoxy(x, ++y);
		printf("|   ���� %d��   |\n", life);
		gotoxy(x, ++y);
		printf(" -----------------");

		y = 16;
		gotoxy(x, y);
		printf(" ----------------------");
		gotoxy(x, ++y);
		printf("|   %d�� ������ ����!   |\n", center - life);
		gotoxy(x, ++y);
		printf(" ----------------------");

		setColor(white, black);
		y = 19;
		gotoxy(x, ++y);
		printf("����� ������?");
		gotoxy(x, ++y);
		printf("1. ���� 2. ������\n");
		gotoxy(x, ++y);
		scanf_s("%d", &a);


		y = 25;
		if (a == 1 || a == 2) {
			if (arr_bool[index][a - 1] == 1) {
				gotoxy(x, y);
				printf("����!\n");
				Sleep(1000);
				index--;
				turn--;
			}
			else {
				gotoxy(x, y);
				printf("���!\n");
				Sleep(1000);
				arr_glass[index][a - 1] = ' ';
				index = center;
				turn = center;
				life--;
			}
		}
		if (life == 0) {
			int x = 58;
			int y = 10;
			system("cls");
			gotoxy(x, y);
			printf("���� ����...");
			Sleep(3000);
			break;
		}
		if (turn == -1) {
			system("cls");
			gotoxy(x, y);
			printf("���!!!");
			Sleep(2000);
			break;
		}
	}
}