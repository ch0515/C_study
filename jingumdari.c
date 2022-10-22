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
    int y = 4;
    system("cls");

    setColor(yellow, black);
    gotoxy(x, y);
    printf("    _ _                            _           _      ");
    gotoxy(x, ++y);
    printf("   (_|_)_ _   __ _  _  _ _ __   __| | __ _ _ _(_)     ");
    gotoxy(x, ++y);
    printf("   | | | ' | / _` || || | '  \\\\/ _`  / _` | '_| |     ");
    gotoxy(x, ++y);
    printf("  _/ |_|_||_\\\\__, |\\\\_,_|_|_|_\\\\__,_\\\\__,_|_| |_|     ");
    gotoxy(x, ++y);
    printf(" |__/        |___/                                    ");


    setColor(white, black);
    x = 45, y = 12;
    gotoxy(x, y);
    printf(" ---||-------||-------||----||------||-------||-----");
    gotoxy(x, ++y);
    printf("|                                                   |");
    gotoxy(x, ++y);
    printf("|      �ۡ�� �̹� ������ ¡�˴ٸ� �Դϴ� �ۡ��    |");
    gotoxy(x, ++y);
    printf("|                                                   |");
    gotoxy(x, ++y);
    printf("|      ���� ����, ������ ¡�˴ٸ��� �ǳʼ���        |");
    gotoxy(x, ++y);
    printf("|  �� 10���� ��ȸ �ȿ� ¡�˴ٸ��� �ǳʸ� ����Դϴ� |");
    gotoxy(x, ++y);
    printf("|                                                   |");
    gotoxy(x, ++y);
    printf("|          ����Ű(ENTER)�� ���� �����ϼ���          |");
    gotoxy(x, ++y);
    printf("|                                                   |");
    gotoxy(x, ++y);
    printf(" ---||-------||-------||----||------||-------||-----");

    gotoxy(x + 5, 30);
    setColor(darkgray, black);
    printf("developed by �輭�� ������ �ְ��� Ȳä��");
    setColor(white, black);
}

int menuDraw() {
    int input;
    int x = 68, y = 26;
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
        case ESC: {
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
    int arr_bool[16][2];   // 1 0 �� �迭
    char arr_glass[16][2];
    int a, x, y;

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
        for (int i = 2; i < 70; i++) {
            gotoxy(i, 2);
            printf("��");
            gotoxy(i, 30);
            printf("��");
        }
        for (int i = 2; i < 30; i++) {
            gotoxy(2, i);
            printf("��");
            gotoxy(70, i);
            printf("��");
            setColor(white, black);
        }
        x = 28, y = 8;
        // ¡�˴ٸ� �׷��ֱ�
        for (int i = 0; i < 16; i++) {
            gotoxy(x, ++y);
            printf("||");
            setColor(yellow, black);
            for (int j = 0; j < 2; j++) {
                printf("   %c   ", arr_glass[i][j]);
            }
            setColor(white, black);
            printf("||");
            if (i == turn + 1) printf("<------����ġ\n");
            else printf("\n");
        }

        x = 90;
        y = 2;
        gotoxy(x, y);
        printf("  - - - - - - - - - - - - - - -");
        gotoxy(x, ++y);
        printf("/                              ��");
        gotoxy(x, ++y);
        printf("|  ���� ����.. ���� ����Ѵ�... |");
        gotoxy(x, ++y);
        printf("��                             /");
        gotoxy(x, ++y);
        printf("  - - - - - - - -     - - - - -");
        gotoxy(x, ++y);
        printf("                 ��  /");
        gotoxy(x, ++y);
        printf("                  ��/");
        gotoxy(x, ++y);
        printf(" /�ң����������ҫ�");
        gotoxy(x, ++y);
        printf("������������������");
        gotoxy(x, ++y);
        printf(" Y��������������Y");
        gotoxy(x, ++y);
        printf(" | �ܡ����� �ܡ�|");
        gotoxy(x, ++y);
        printf(" �� //(_��_) //��");
        gotoxy(x, ++y);
        printf("�� ������������");
        gotoxy(x, ++y);
        printf("��/��|������|)");

        y += 2;
        setColor(white, black);
        gotoxy(x, y);
        printf(" -----�� �� �� ��-----");
        gotoxy(x, ++y);
        printf("|                     |");
        gotoxy(x, ++y);
        printf("|                     |");
        gotoxy(x, ++y);
        printf("|    ����� ������?   |");
        gotoxy(x, ++y);
        printf("|                     |");
        gotoxy(x, ++y);
        printf("|    ��(��) ��(��)    |");
        gotoxy(x, ++y);
        printf("|  ����Ű�� ��������  |");
        gotoxy(x, ++y);
        printf("|  �� �ٸ� �� �ϳ���  |");
        gotoxy(x, ++y);
        printf("|      ������!      |");
        gotoxy(x, ++y);
        printf("|                     |");
        gotoxy(x, ++y);
        printf("|   %d�� ������ ����!  |", center - life);
        gotoxy(x, ++y);
        printf("|                     |");
        gotoxy(x, ++y);
        printf(" ---------------------");

        x = 15, y = 3;
        gotoxy(x, y);
        gotoxy(x, ++y);
        printf("           -----------------------------");
        gotoxy(x, ++y);
        printf("���� %d�� |", life);
        setColor(red, black);
        for (int i = 1; i <= life; i++) {
            printf("��");
        }
        setColor(white, black);
        for (int i = 0; i <= 14 - life; i++) {
            printf("  ");
        }
        printf("|");
        gotoxy(x, ++y);
        printf("           -----------------------------");

        a = keyControl();

        x = 33, y = 27;
        if (a == 1 || a == 2) {
            if (arr_bool[index][a - 1] == 1) {
                gotoxy(x, y);
                setColor(lightcyan, black);
                printf("����!\n");
                setColor(white, black);
                x = 90;
                y = 2;
                gotoxy(x, y);
                printf("  - - - - - - - - - - - - - - -");
                gotoxy(x, ++y);
                printf("/                              ��");
                gotoxy(x, ++y);
                printf("|          ��~ ��Ҵ�!          |");
                gotoxy(x, ++y);
                printf("��                             /");
                gotoxy(x, ++y);
                printf("  - - - - - - - -     - - - - -");
                gotoxy(x, ++y);
                printf("                 ��  /");
                gotoxy(x, ++y);
                printf("                  ��/");
                setColor(yellow, black);
                gotoxy(x, ++y);
                printf(" /�ң����������ҫ�");
                gotoxy(x, ++y);
                printf("������������������");
                gotoxy(x, ++y);
                printf(" Y��������������Y");
                gotoxy(x, ++y);
                printf(" |   >������ <��|");
                gotoxy(x, ++y);
                printf(" �� //(_��_) //��");
                gotoxy(x, ++y);
                printf("�� ������������");
                gotoxy(x, ++y);
                printf("��/��|������|)");
                Sleep(1200);
                setColor(white, black);
                index--;
                turn--;
            }
            else {
                gotoxy(x, y);
                setColor(red, black);
                printf("���!\n");
                setColor(white, black);
                x = 90;
                y = 2;
                gotoxy(x, y);
                printf("  - - - - - - - - - - - - - - -");
                gotoxy(x, ++y);
                printf("/                              ��");
                gotoxy(x, ++y);
                printf("|     ���� ���!! ��������!!    |");
                gotoxy(x, ++y);
                printf("��                             /");
                gotoxy(x, ++y);
                printf("  - - - - - - - -     - - - - -");
                gotoxy(x, ++y);
                printf("                 ��  /");
                gotoxy(x, ++y);
                printf("                  ��/");
                setColor(red, black);
                gotoxy(x, ++y);
                printf(" /�ң����������ҫ�");
                gotoxy(x, ++y);
                printf("������������������");
                gotoxy(x, ++y);
                printf(" Y��������������Y");
                gotoxy(x, ++y);
                printf(" |   �С��� �С�|");
                gotoxy(x, ++y);
                printf(" �� //(_��_) //��");
                gotoxy(x, ++y);
                printf("�� ������������");
                gotoxy(x, ++y);
                printf("��/��|������|)");
                Sleep(1200);
                setColor(white, black);
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