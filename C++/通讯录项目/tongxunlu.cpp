#include"tongxunlu.h"
using namespace std;
void ShowMenu()
{
	cout<<"***************************"<<endl;
	cout<<"*******1、添加联系人*******"<<endl;
	cout<<"*******2、显示联系人*******"<<endl;
	cout<<"*******3、删除联系人*******"<<endl;
	cout<<"*******4、查找联系人*******"<<endl;
	cout<<"*******5、修改联系人*******"<<endl;
	cout<<"*******6、清空通讯录*******"<<endl;
	cout<<"*******0、退出通讯录*******"<<endl;
	cout<<"***************************"<<endl;
}

void AddPerson(AddressBook* p)
{
	if(p->Size==MAX_NUM)
	{
		cout<<"通讯录已满，无法添加"<<endl; 
	}
	else
	{ 
		string name;
		cout << "输入姓名:" << endl;
		cin >> name;
		p->PersonArray[p->Size].Name = name;
		string phone;
		cout << "输入手机号:" << endl;
		cin >> phone;
		p->PersonArray[p->Size].Phone = phone;
		
		p->Size++;
		cout<<"添加成功"<<endl; 		
	}
	system("pause");
	system("cls");
 } 
 
void ShowPerson(AddressBook* p){
 	if(p->Size==0)
 	{
 		cout<<"当前记录为空"<<endl; 
	}
	else
	{   
		cout<<"姓名"<<"\t\t"<<"手机号"<<"\t\t"<<endl; 
		for(int i=0;i<=p->Size;i++)
		{
			cout<<p->PersonArray[i].Name<<"\t\t"<<p->PersonArray[i].Phone<<endl;
		}
	}
	system("pause");
	system("cls");
 }
void DeletePerson(AddressBook* p){
 	cout<<"输入要删除的联系人姓名："<<endl;
	string name;
	cin>>name;
	int isexit=-1;
	for(int i=0;i<=p->Size;i++)
	{
		if(p->PersonArray[i].Name==name)
			isexit=i;
	} 
	if(isexit==-1)
	{
		cout<<"查无此人，检查姓名是否错误"<<endl; 
	}
	else
	{
		for(int i=isexit;i<p->Size;i++)
		{
			p->PersonArray[i]=p->PersonArray[i+1];
		}
		p->Size--;
		cout<<"删除成功"<<endl;	
	}
	system("pause");
	system("cls");
 }
void FindPerson(AddressBook* p)
{
	string name;
	cout<<"输入要查找的联系人姓名："<<endl;
	cin>>name;
	int isexist=-1;
	for(int i=0;i<=p->Size;i++)
	{
		if(p->PersonArray[i].Name==name)
		{
			isexist=i;
			break; 
		}
	} 
	if(isexist==-1)
	{
		cout<<"查无此人，检查姓名是否错误"<<endl; 
	}
	else
	{
		cout<<"姓名"<<"\t\t"<<"手机号"<<"\t\t"<<endl; 
		cout<<p->PersonArray[isexist].Name<<"\t\t"<<p->PersonArray[isexist].Phone<<"\t\t"<<endl;
	}
	system("pause");
	system("cls");
}
void ModifyPerson(AddressBook * p)
{
	string name;
	cout<<"输入要修改的联系人姓名："<<endl;
	cin>>name;
	int isexist=-1;
	for(int i=0;i<=p->Size;i++)
	{
		if(p->PersonArray[i].Name==name)
		{
			isexist=i;
			break; 
		}
	} 
	if(isexist==-1)
	{
		cout<<"查无此人，检查姓名是否错误"<<endl; 
	}
	else
	{
		string name;
		cout << "输入修改后姓名:" << endl;
		cin >> name;
		p->PersonArray[isexist].Name = name;
		string phone;
		cout << "输入修改后手机号:" << endl;
		cin >> phone;
		p->PersonArray[isexist].Phone = phone;
		cout<<"修改成功"<<endl;
	}
	system("pause");
	system("cls");
}
void CleanPerson(AddressBook* p)
{
	int isreal=2;
	cout<<"Are you sure?"<<endl;
	cout<<"1--Yes   else--No"<<endl;
	cin>>isreal;
	if(isreal==1)
	{
		p->Size=0;
		cout<<"已清空"<<endl;
		system("pause");
	}	
	system("cls"); 
} 
