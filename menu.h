#include<iostream>
using namespace std;
void Menu()
{
	char ch;
	cout<<endl<<endl;
    cout<<"\t\t  *=*=*=*=*=*=*=*    ̰����   *=*=*=*=*=*=*=*"<<endl;
    cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  **              ����ѡ�����             **"<<endl;
    cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  **                1--��ʼ                **"<<endl;
	cout<<"\t\t  **                                       **"<<endl; 
    cout<<"\t\t  **                2--�˳�                **"<<endl;
    cout<<"\t\t  **                                       **"<<endl;
    cout<<"\t\t  **                3--����                **"<<endl;
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
    		cout<<"̰����1.1��2014.1.25"<<endl<<endl;
    		cout<<"1.���в����������ִ�Сд"<<endl;
    		cout<<"2.���˵�������Ϸ��������ͼ��ֻ������Ϸ���������"<<endl;
    		Gotoxy(57,23);
    		cout<<"��";Sleep(200);cout<<"��";Sleep(200);cout<<"��";Sleep(200);
			cout<<"��";Sleep(200);cout<<"��";Sleep(200);cout<<"��";Sleep(1000);
			if(kbhit()){
				getch(); system("cls");
    			return Menu();
			}
    	}
    	
    }else{
    	goto loop;
    }
}
