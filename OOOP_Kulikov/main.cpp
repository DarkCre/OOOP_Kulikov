#include "Group_Kulikov.h"
#pragma once 

bool MainSharedConsole() {
	return false;
}

int main()
{
	setlocale(LC_ALL, "rus");

	Group_Kulikov Group;
	Group.add();
	Group.add();
	Group.vector_output();
	
	do {
		cout << endl;
		cout << " ������� ����: " << endl
			<< "1. �������� �����" << endl
			<< "2. �������� ��" << endl
			<< "3. �������� ���� ��������" << endl
			<< "4. ��������� ��������" << endl
			<< "5. ���������" << endl
			<< "6. ���������" << endl
			<< "7. ������ � ������" << endl
			<< "0. �����" << endl << endl;
	} while (!MainSharedConsole);



	return true;
}