#include<windows.h>
void Gotoxy(int x,int y){     // 在屏幕上定位光标函数
    COORD point = {x , y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), point);
}
