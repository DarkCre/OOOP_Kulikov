#include "Group_Kulikov.h"
#pragma once 

bool MainSharedConsole(Group_Kulikov& Group) {
	int iter;
	do
	{
		cin>>iter;
	} while (!�heckingValues(iter, cin, 0, 5));
	switch (iter)
	{
	case (1):
	{
		Group.add();
		break;
	}
	case (2):
	{
		Group.vector_output();
		break;
	}
	case (3):
	{
		Group.write_file();
		break;
	}
	case (4):
	{
		Group.read_file();
		break;
	}
	case (5):
	{
		Group.clear();
		break;
	}
	case (0):
	{
		return false;
	}
	default:
		cout << "�������� ����������� ������!";
		return false;
		break;
	}
	return true;
}

int main()
{
	setlocale(LC_ALL, "rus");

	Group_Kulikov Group;
	
	do {
		cout << endl;
		cout << " ������� ����: " << endl
			<< "1. �������� �������� � ������" << endl
			<< "2. ������� ��������� ������" << endl
			<< "3. ��������� ��������� ������ � ����" << endl
			<< "4. ������� �������� ��������� �� �����" << endl
			<< "5. ������� ������" << endl
			<< "0. �����" << endl << endl;
		cout<< "������� ����� ����: "<<endl;
	} while (MainSharedConsole(Group));
	return true;
}