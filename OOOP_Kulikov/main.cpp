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
		cout << " Главное меню: " << endl
			<< "1. Добавить трубу" << endl
			<< "2. Добавить КС" << endl
			<< "3. Просмотр всех объектов" << endl
			<< "4. Изменение объектов" << endl
			<< "5. Сохранить" << endl
			<< "6. Загрузить" << endl
			<< "7. Работа с графом" << endl
			<< "0. Выход" << endl << endl;
	} while (!MainSharedConsole);



	return true;
}