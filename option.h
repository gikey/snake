#include<iostream>
#include<cstdlib>
using namespace std;
int Map_show();
int option(){
	char ch;
	cout<<endl<<endl;
	cout<<"\t\t  *=*=*=*=*=*=*=*    ̰����   *=*=*=*=*=*=*=*"<<endl;
    cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  **              ����ѡ�����             **"<<endl;
    cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  **                1--��ͼ1               **"<<endl;
	cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  **                2--��ͼ2               **"<<endl;
    cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  **                3--��ͼ3               **"<<endl;
    cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  **                4--��ͼ4               **"<<endl;
    cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  **                5--�� ��               **"<<endl;
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
	cout<<"                                    �� ��                                      "<<endl;
	cout<<"               ��ͼ1                  *                ��ͼ2                   "<<endl;
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
	cout<<"              ��ͼ3                   *                 ��ͼ4                  "<<endl;
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






