#include"tongxunlu.h"
int main()
{	AddressBook AddressBook_A;
	AddressBook_A.Size=0;
 	while (1)
 	{
	 ShowMenu();
	 int select=0;
	 cin>>select;
	 switch(select)
	 {
	 	case 1://添加联系人
		 	AddPerson(&AddressBook_A); 
	 		break;
	 	case 2://显示联系人 
	 		ShowPerson(&AddressBook_A);
		 	break;
		case 3://删除联系人 
			DeletePerson(&AddressBook_A);
			break;
		case 4://查找联系人
			FindPerson(&AddressBook_A);
			break; 
		case 5://修改联系人
			ModifyPerson(&AddressBook_A);
			break; 
		case 6://清空联系人 
			CleanPerson(&AddressBook_A);
			break; 
		case 0:// 退出
			cout<<"欢迎下次使用"<<endl;
			system("pause");
			return 0;
			break; 
		default: 
			break;
	 }
    }
 	system("pause");
 	return 0;
 }
