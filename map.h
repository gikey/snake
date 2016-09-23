#include<iostream>
#include"cursor.h"
using namespace std;
void Other_Information();
void Map_1(){
	for(int i = 0; i< 25; i ++){
		for(int j = 0; j< 32; j ++){
			if(i == 0 || i == 24 || j == 0 || j == 31){
				cout<<"□";
			}else{
				cout<<"  ";
			}
				
		}
		cout<<endl;
	}
	Other_Information();
}
void Map_2(){
	Map_1();
	for(int i = 1; i < 18; i++){
		Gotoxy(20,i);
		cout<<"□";
	}
	for(int i = 23; i > 4; i--){
		Gotoxy(40,i);
		cout<<"□";
	}
}
void Map_3(){
	Map_1();
	for(int i = 12; i< 50; i += 2){
		for(int j = 5; j< 20; j ++){
			Gotoxy(i,j);
			if((i == 12 && j != 12 && j != 13)|| (i == 48 && j != 12 && j != 13) || (j == 5 && i != 28 && i != 30) || (j == 19 && i != 28 && i != 30)){
				cout<<"□";
			}
		}
	}
}
void Map_4(){
	Map_1();
	for(int i = 6; i< 58; i += 2){
		for(int j = 3; j< 22; j ++){
			Gotoxy(i,j);
			if((i == 6 && j != 12 && j != 13)|| (i == 56 && j != 12 && j != 13) || j == 3 || j == 21 ){
				cout<<"□";
			}
		}
	}
	for(int i = 6;i < 19; i++){
		Gotoxy(30,i);
		cout<<"□";
	}
	for(int i = 18;i < 44; i+=2){
		Gotoxy(i,12);
		cout<<"□";
	}
}
void Other_Information(){
	Gotoxy(69,0);  cout<<"昵称：";
	Gotoxy(69,1);  cout<<"小键人"; 
	Gotoxy(69,3);  cout<<"得分：";
	Gotoxy(66,6);  cout<<"+ 速度 ↑";
	Gotoxy(66,8);  cout<<"- 速度 ↓";
	Gotoxy(66,10); cout<<"Q 暂停/继续";
	Gotoxy(66,12); cout<<"C 更换地图";
	Gotoxy(66,14); cout<<"R 主菜单";
	Gotoxy(66,16); cout<<"F 新游戏";
	Gotoxy(66,18); cout<<"E 退出";
	Gotoxy(71,20); cout<<"W";
	Gotoxy(66,22); cout<<"A";
	Gotoxy(77,22); cout<<"D";
	Gotoxy(71,24); cout<<"S";
	Gotoxy(70,22); cout<<"操作";
}
