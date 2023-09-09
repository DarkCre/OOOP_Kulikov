#include "Group_Kulikov.h"
#pragma once 

bool MainSharedConsole(Group_Kulikov& Group) {
	int iter;
	do
	{
		cin>>iter;
	} while (!СheckingValues(iter, cin, 0, 5));
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
		cout << "Возникла критическая ошибка!";
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
		cout << " Главное меню: " << endl
			<< "1. Добавить студента в группу" << endl
			<< "2. Вывести студентов группы" << endl
			<< "3. Сохранить студентов группы в файл" << endl
			<< "4. Извлечь перечень студентов из файла" << endl
			<< "5. Удалить группу" << endl
			<< "0. Выход" << endl << endl;
		cout<< "Введите пункт меню: "<<endl;
	} while (MainSharedConsole(Group));
	return true;
}