#include "Group_Kulikov.h"


void Group_Kulikov::add() {
	Student_Kulikov* St = new Student_Kulikov;
	cin >> *St;
	Group.push_back(St);
}

void Group_Kulikov::vector_output() {
	if (Group.size() == 0) {
		cout << "Необходимо сначала добавить студентов в группу!";
		return;
	}
	else {
		for (auto i = Group.begin(); i != Group.end(); ++i)
		{
			cout << **i <<endl;
		}
	}
}

void Group_Kulikov::write_file() {
	if (Group.size() == 0) {
		cout << "Необходимо сначала добавить студентов в группу!";
		return;
	}
	else {
		cout << "Введите название файла" << endl;
		string fname;
		cin >> fname;
		fname += ".txt";
		ofstream fout;
		fout.open(fname);
		if (!fout.is_open()) {
			cout << "Не удалось открыть файл!" << endl;
		}
		else {
			fout << Group.size() << endl;
			for (auto i = Group.begin(); i != Group.end(); ++i)
			{
				fout << **i << endl;
			}
			cout << "Запишь прошла успешно!" << endl;
		}
		fout.close();
	}
}

void Group_Kulikov::read_file() {
	if (Group.size() != 0) {
		cout << "Группа уже существует, если продолжите она будет удалена." << endl;
		cout << "Вы хотите продолжить?" << endl
			<< "Введите 1, если согласны" << endl
			<< "Введите 0, если хотите вернуться в главное меню: " << endl;
		int iter;
		do
		{
			cin >> iter;
		} while (!СheckingValues(iter, cin, 0, 1));
		if (iter == 0) {
			return;
		}
	}
	cout << "Введите название файла" << endl;
	string fname;
	cin >> fname;
	fname += ".txt";
	ifstream fin;
	fin.open(fname);
	if (!fin.is_open()) {
		cout << "Не удалось открыть файл!" << endl;
	}
	else {
		Group.clear();
		int size;
		fin >> size;
		for (int i = 0; i != size; ++i)
		{
			Student_Kulikov* St = new Student_Kulikov;
			fin >> *St;

			Group.push_back(St);
		}
		cout << "Считывание прошло успешно!" << endl;
	}
	fin.close();
}

void Group_Kulikov::clear() {
	for (auto i = Group.begin(); i != Group.end(); ++i)
	{
		delete* i;
	}
	Group.clear();
	cout << "Удаление прошло успешно!"<<endl;
}

