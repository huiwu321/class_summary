#include<iostream>
#include<string>
using namespace std;
#define MAX_NUM 1000
struct Person
{
	string Name;
	string Phone;	 
};
struct AddressBook
{
	struct Person PersonArray[MAX_NUM];
	int Size;
};
void ShowMenu();
void AddPerson(AddressBook* p);
void ShowPerson(AddressBook* p);
void DeletePerson(AddressBook* p);
void FindPerson(AddressBook* p);
void ModifyPerson(AddressBook * p);
void CleanPerson(AddressBook * p);
