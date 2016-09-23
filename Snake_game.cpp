#include<iostream>
#include<conio.h>
#include<ctime>
#include"move.h"
#include"menu.h"
using namespace std;
int main(){
	system("color E");
	char keydown;
	loop_1: Menu();
	system("cls");
	loop_2: Move m;
	m.Begin();
	while(true){
		if(!m.Moving()){
			while(keydown != 'E' && keydown != 'F' && keydown != 'R' && keydown != 'C'){
				keydown = toupper(getch());	
				if(keydown == 'E'){
					Sleep(1000);exit(0);
				}
				if(keydown == 'C'){
					system("cls");
					goto loop_2;
				}
				if(keydown == 'F'){
					system("cls");
					m.Begin();
				}
				if(keydown == 'R'){
					system("cls");
					goto loop_1;
				}
			}
		}
		if(kbhit()){
			keydown = toupper(getch());
			m.Change_dir(keydown);
		}
		keydown = '0';
	}
	return 0;
}
