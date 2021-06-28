#include<stdio.h>
#include<windows.h>

void gotoxy(int x, int y) {
    COORD Pos = { x - 1, y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void main() {
    int x = 1;
    int y = 1;
    gotoxy(x, y);
    while (1) {
        if (GetAsyncKeyState(VK_LEFT)) { //왼쪽
            x--;
        }
        if (GetAsyncKeyState(VK_RIGHT)) { //오른쪽
            x++;
        }
        if (GetAsyncKeyState(VK_UP)) { //위
            y--;
        }
        if (GetAsyncKeyState(VK_DOWN)) { //아래
            y++;
        }

        system("cls");
        gotoxy(x, y);
        printf("♥");
    }
}