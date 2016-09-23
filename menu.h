#include<iostream>
using namespace std;
void Menu()
{
	char ch;
	cout<<endl<<endl;
    cout<<"\t\t  *=*=*=*=*=*=*=*    贪吃蛇   *=*=*=*=*=*=*=*"<<endl;
    cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  **              输入选项代码             **"<<endl;
    cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  **                1--开始                **"<<endl;
	cout<<"\t\t  **                                       **"<<endl; 
    cout<<"\t\t  **                2--退出                **"<<endl;
    cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  **                3--关于                **"<<endl;
    cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;
    loop: ch = getch();
    if(ch == '1'){
    	return ;
    }else if(ch == '2'){
    	exit(0);
    }else if(ch == '3'){
    	while(true){
    		system("cls");
    		cout<<"贪吃蛇1.1，2014.1.25"<<endl<<endl;
    		cout<<"1.所有操作均不区分大小写"<<endl;
    		cout<<"2.主菜单、新游戏、更换地图都只能在游戏结束后操作"<<endl;
    		Gotoxy(57,23);
    		cout<<"按";Sleep(200);cout<<"任";Sleep(200);cout<<"意";Sleep(200);
			cout<<"键";Sleep(200);cout<<"返";Sleep(200);cout<<"回";Sleep(1000);
			if(kbhit()){
				getch(); system("cls");
    			return Menu();
			}
    	}
    	
    }else{
    	goto loop;
    }
}
