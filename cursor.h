#include<windows.h>
void Gotoxy(int x,int y){     // ����Ļ�϶�λ��꺯��
    COORD point = {x , y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), point);
}
