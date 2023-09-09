#include "Group_Kulikov.h"


void Group_Kulikov::add() {
	Student_Kulikov* St = new Student_Kulikov;
	cin >> *St;
	Group.push_back(St);
}

void Group_Kulikov::vector_output() {
	for (auto i = Group.begin(); i != Group.end(); ++i)
	{
		cout << **i <<endl;
	}
}

void Group_Kulikov::write_file() {
	cout << "������� �������� �����" << endl;
	string fname;
	cin >> fname;
	fname += ".txt";
	ofstream fout;
	fout.open(fname);
	if (!fout.is_open()) {
		cout << "�� ������� ������� ����!" << endl;
	}
	else {
		fout << Group.size()<<endl;
		for (auto i = Group.begin(); i != Group.end(); ++i)
		{
			fout << **i << endl;
		}
		cout << "������ ������ �������!" << endl;
	}
	fout.close();
}

void Group_Kulikov::read_file() {
	cout << "������� �������� �����" << endl;
	string fname;
	cin >> fname;
	fname += ".txt";
	ifstream fin;
	fin.open(fname);
	if (!fin.is_open()) {
		cout << "�� ������� ������� ����!" << endl;
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
		cout << "���������� ������ �������!" << endl;
	}
	fin.close();
}

void Group_Kulikov::clear() {
	for (auto i = Group.begin(); i != Group.end(); ++i)
	{
		delete* i;
	}
	Group.clear();
	cout << "�������� ������ �������!"<<endl;
}

