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
	 	case 1://�����ϵ��
		 	AddPerson(&AddressBook_A); 
	 		break;
	 	case 2://��ʾ��ϵ�� 
	 		ShowPerson(&AddressBook_A);
		 	break;
		case 3://ɾ����ϵ�� 
			DeletePerson(&AddressBook_A);
			break;
		case 4://������ϵ��
			FindPerson(&AddressBook_A);
			break; 
		case 5://�޸���ϵ��
			ModifyPerson(&AddressBook_A);
			break; 
		case 6://�����ϵ�� 
			CleanPerson(&AddressBook_A);
			break; 
		case 0:// �˳�
			cout<<"��ӭ�´�ʹ��"<<endl;
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
