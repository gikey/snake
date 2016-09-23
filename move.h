#include<iostream>
#include"option.h"
#include"snake.h"
#include"map.h"
using namespace std;
static int count;
class Move{
private:
	Snake s;
	SnakeNode *p;
	char point;
	int speed,map;
	int food_x,food_y;
public:
	Move();
	void Begin();
	bool Moving();
	void Change_dir(char);
	void Get_food();
	void Stop_move();
	bool Snake_died(int,int);
	void Print_died();
};
Move::Move(){
	this->map = option();
	system("cls");
}
void Move::Begin(){
	if(this->map == 1){
		Map_1();
	}else if(this->map == 2){
		Map_2();
	}else if(this->map == 3){
		Map_3();
	}else{
		Map_4();
	}
	s.Snake_Birth();
	SnakeNode *q;
	this->p = q = s.Get_head();
	while(this->p){
		Gotoxy(this->p->x,this->p->y);
		if(p == q){
			cout<<"¡Ñ";
		}else{
			cout<<"¡ñ";
		}
		this->p = this->p->next;
	}
	Get_food();
	this->point = 'd';
	Gotoxy(70,4);
	count = 0;
	cout<<count;
	this->speed = 300;
}
bool Move::Moving(){
	int h_x,h_y;
	this->p = s.Get_head();
	h_x = this->p->x;
	h_y = this->p->y;
	this->p = this->p->next;
	if(Snake_died(h_x,h_y)){
		Print_died();
		return false;
	}
	switch(this->point){
		case 'a':h_x-=2; break;
		case 'd':h_x+=2; break;
		case 'w':h_y--; break;
		case 's':h_y++; break;
	}
	s.Add_head(h_x/2,h_y);
	Gotoxy(h_x,h_y);
	cout<<"¡Ñ";
	this->p = s.Get_head()->next;
	Gotoxy(this->p->x,this->p->y);
	cout<<"¡ñ";
	if(h_x == this->food_x && h_y == this->food_y){
		count ++;
		Gotoxy(70,4);
		cout<<count;
		Get_food();
	}else{
		Gotoxy(s.Get_tail_x(),s.Get_tail_y());
		cout<<"  ";
		s.Del_tail();
	}
	Sleep(this->speed);
	return true;
}
void Move::Change_dir(char dir){
	switch(dir){
		case 'W' : if(this->point != 's')this->point = 'w';break;
		case 'S' : if(this->point != 'w')this->point = 's';break;
		case 'A' : if(this->point != 'd')this->point = 'a';break;
		case 'D' : if(this->point != 'a')this->point = 'd';break;
		case 'Q' : Stop_move();break;
		case 'E' : Sleep(1000);exit(0);break;
		case '+' : if(this->speed >= 100)this->speed -= 50;break;
		case '=' : if(this->speed >= 100)this->speed -= 50;break;
		case '-' : this->speed += 50;break;
		case '_' : this->speed += 50;break;
	}
}
void Move::Get_food(){
	int x,y;
	srand((unsigned int) time(NULL));
	SnakeNode *q = s.Get_head();
	x = rand()%59+2;
	y = rand()%22+2;
	if(x%2 != 0) x += 1;
	while(Snake_died(x,y)){
		x = rand()%59+2;
		y = rand()%22+2;
		if(x%2 != 0) x += 1;
	}
	this->food_x = x; 
	this->food_y = y;
	Gotoxy(this->food_x,this->food_y);
	cout<<"¡ô";
}
void Move::Stop_move(){
	char ch;
	while(ch != 'Q'){
		ch = toupper(getch());
	}
}
bool Move::Snake_died(int x,int y){
	while(this->p){
		if(x == this->p->x && y ==this->p->y){
			return true;
		}
		this->p = this->p->next;
	}
	if(x == 0 ||x == 62 || y == 0 ||y == 24){
		return true;
	}
	if(this->map == 2){
		if((x == 20 && y > 0 && y <18) || (x == 40 && y > 4 && y < 24)) {
			return true;
		}
	}
	if(this->map == 3){
		if((x == 12 || x == 48) && ((y > 4 && y < 12) || (y > 13 && y < 20))){
			return true;
		}
		if((y == 5 || y == 19) && ((x > 11 && x < 28)||(x > 30 && x < 50))){
			return true;
		}
	}
	if(this->map == 4){
		if((x == 6 || x == 56) && ((y > 2 && y < 12) || (y > 13 && y < 22))){
			return true;
		}
		if((y == 3 || y == 21) && x > 5 && x < 58){
			return true;
		}
		if(x == 30 && y > 5 && y < 19){
			return true;
		}
		if(y == 12 && x > 16 && x < 44){
			return true;
		}
	}
	return false;
}

void Move::Print_died(){
	Gotoxy(24,11);
	cout<<'G';Sleep(200);cout<<'A';Sleep(200);cout<<'M';Sleep(200);
	cout<<'E';Sleep(200);cout<<' ';Sleep(200);cout<<'I';Sleep(200);
	cout<<'S';Sleep(200);cout<<' ';Sleep(200);cout<<'O';Sleep(200);
	cout<<'V';Sleep(200);cout<<'E';Sleep(200);cout<<'R';Sleep(200);
	cout<<'!';Sleep(200);cout<<'!';Sleep(200);cout<<'!';
	s.Snake_Destroy();
	s.Snake_Birth();
}









