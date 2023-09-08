#include "Students_Kulikov.h"

int Students_Kulikov::_StudentID = 0;

Students_Kulikov::Students_Kulikov()
{
	_StudentName = "NoName";
	_StudentSurname = "NoSurname";
	_StudentAge = 0;
	_ID = _StudentID;
	_StudentID++;
}

ostream& operator<<(ostream& fout, const Students_Kulikov& St)
{
	cout << "Данные студента: " << endl;
	cout << "Имя: " << St._StudentName << endl
		<< "Фамилия: " << St._StudentSurname << endl
		<< "Возраст:: " << St._StudentAge << endl;
	return fout;
}

ofstream& OutputObjectsFile(ofstream& fout, const Students_Kulikov& St)
{
	fout<< St._ID << endl 
		<< St._StudentName << endl 
		<< St._StudentSurname << endl 
		<< St._StudentAge << endl;
	return fout;
}

ifstream& operator>>(ifstream& fin, Students_Kulikov& St)
{
	fin >> St._ID;
	
	fin >> ws;
	getline(fin, St._StudentName);
	fin >> ws;
	getline(fin, St._StudentSurname);
	fin >> St._StudentAge;

	return fin;
}

istream& operator>>(istream& fin, Students_Kulikov& St)
{
	do
	{
		cout << "Введите имя студента (на латинском языке):" << endl;
		cin >> ws;
		getline(cin, St._StudentName);
	} while (!CheckingString(St._StudentName));
	do
	{
		cout << "Введите фамилию студента (на латинском языке):" << endl;
		cin >> ws;
		getline(cin, St._StudentSurname);
	} while (!CheckingString(St._StudentSurname));
	do
	{
		cout << "Введите возраст студента:" << endl;
		cin >> St._StudentAge;
	} while (!СheckingValues(St._StudentAge, cin, 16, 90));

	return fin;

}