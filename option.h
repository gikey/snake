#include<iostream>
#include<cstdlib>
using namespace std;
int Map_show();
int option(){
	char ch;
	cout<<endl<<endl;
	cout<<"\t\t  *=*=*=*=*=*=*=*    贪吃蛇   *=*=*=*=*=*=*=*"<<endl;
    cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  **              输入选项代码             **"<<endl;
    cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  **                1--地图1               **"<<endl;
	cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  **                2--地图2               **"<<endl;
    cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  **                3--地图3               **"<<endl;
    cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  **                4--地图4               **"<<endl;
    cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  **                5--查 看               **"<<endl;
    cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;
    loop: ch = getch();
    if(ch == '1'){
    	return 1;
    }else if(ch == '2'){
    	return 2;
    }else if(ch == '3'){
    	return 3;
	}else if(ch == '4'){
		return 4;
	}else if(ch == '5'){
		system("cls");
		Map_show();
	}
	else{
		goto loop;
	}
}
int Map_show(){
	cout<<"                                    查 看                                      "<<endl;
	cout<<"               地图1                  *                地图2                   "<<endl;
	cout<<"     --------------------------       *       --------------------------       "<<endl;
	cout<<"     |                        |       *       |       |                |       "<<endl;
	cout<<"     |                        |       *       |       |        |       |       "<<endl;
	cout<<"     |                        |       *       |       |        |       |       "<<endl;
	cout<<"     |                        |       *       |       |        |       |       "<<endl;
	cout<<"     |                        |       *       |       |        |       |       "<<endl;
	cout<<"     |                        |       *       |       |        |       |       "<<endl;
	cout<<"     |                        |       *       |                |       |       "<<endl;
	cout<<"     --------------------------       *       --------------------------       "<<endl;
	cout<<"                                      *                                        "<<endl;
	cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
	cout<<"              地图3                   *                 地图4                  "<<endl;
	cout<<"     --------------------------       *        --------------------------      "<<endl;
	cout<<"     |                        |       *        | ---------------------- |      "<<endl;
	cout<<"     |     -----  -----       |       *        | |                    | |      "<<endl;
	cout<<"     |     |          |       |       *        | |         |          | |      "<<endl;
	cout<<"     |                        |       *        |         --+--          |      "<<endl;
	cout<<"     |     |          |       |       *        | |         |          | |      "<<endl;
	cout<<"     |     -----  -----       |       *        | |                    | |      "<<endl;
	cout<<"     |                        |       *        | ---------------------- |      "<<endl;
	cout<<"     --------------------------       *        --------------------------      "<<endl;
	cout<<"                                      *                                        "<<endl;
	getch();
	system("cls");
	return option();
} 






