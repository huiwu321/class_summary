#include"tongxunlu.h"
using namespace std;
void ShowMenu()
{
	cout<<"***************************"<<endl;
	cout<<"*******1�������ϵ��*******"<<endl;
	cout<<"*******2����ʾ��ϵ��*******"<<endl;
	cout<<"*******3��ɾ����ϵ��*******"<<endl;
	cout<<"*******4��������ϵ��*******"<<endl;
	cout<<"*******5���޸���ϵ��*******"<<endl;
	cout<<"*******6�����ͨѶ¼*******"<<endl;
	cout<<"*******0���˳�ͨѶ¼*******"<<endl;
	cout<<"***************************"<<endl;
}

void AddPerson(AddressBook* p)
{
	if(p->Size==MAX_NUM)
	{
		cout<<"ͨѶ¼�������޷����"<<endl; 
	}
	else
	{ 
		string name;
		cout << "��������:" << endl;
		cin >> name;
		p->PersonArray[p->Size].Name = name;
		string phone;
		cout << "�����ֻ���:" << endl;
		cin >> phone;
		p->PersonArray[p->Size].Phone = phone;
		
		p->Size++;
		cout<<"��ӳɹ�"<<endl; 		
	}
	system("pause");
	system("cls");
 } 
 
void ShowPerson(AddressBook* p){
 	if(p->Size==0)
 	{
 		cout<<"��ǰ��¼Ϊ��"<<endl; 
	}
	else
	{   
		cout<<"����"<<"\t\t"<<"�ֻ���"<<"\t\t"<<endl; 
		for(int i=0;i<=p->Size;i++)
		{
			cout<<p->PersonArray[i].Name<<"\t\t"<<p->PersonArray[i].Phone<<endl;
		}
	}
	system("pause");
	system("cls");
 }
void DeletePerson(AddressBook* p){
 	cout<<"����Ҫɾ������ϵ��������"<<endl;
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
		cout<<"���޴��ˣ���������Ƿ����"<<endl; 
	}
	else
	{
		for(int i=isexit;i<p->Size;i++)
		{
			p->PersonArray[i]=p->PersonArray[i+1];
		}
		p->Size--;
		cout<<"ɾ���ɹ�"<<endl;	
	}
	system("pause");
	system("cls");
 }
void FindPerson(AddressBook* p)
{
	string name;
	cout<<"����Ҫ���ҵ���ϵ��������"<<endl;
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
		cout<<"���޴��ˣ���������Ƿ����"<<endl; 
	}
	else
	{
		cout<<"����"<<"\t\t"<<"�ֻ���"<<"\t\t"<<endl; 
		cout<<p->PersonArray[isexist].Name<<"\t\t"<<p->PersonArray[isexist].Phone<<"\t\t"<<endl;
	}
	system("pause");
	system("cls");
}
void ModifyPerson(AddressBook * p)
{
	string name;
	cout<<"����Ҫ�޸ĵ���ϵ��������"<<endl;
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
		cout<<"���޴��ˣ���������Ƿ����"<<endl; 
	}
	else
	{
		string name;
		cout << "�����޸ĺ�����:" << endl;
		cin >> name;
		p->PersonArray[isexist].Name = name;
		string phone;
		cout << "�����޸ĺ��ֻ���:" << endl;
		cin >> phone;
		p->PersonArray[isexist].Phone = phone;
		cout<<"�޸ĳɹ�"<<endl;
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
		cout<<"�����"<<endl;
		system("pause");
	}	
	system("cls"); 
} 
