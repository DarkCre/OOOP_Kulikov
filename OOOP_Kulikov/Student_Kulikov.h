#pragma once
#include "Checking.h"

class Student_Kulikov
{
private:
	string _StudentName;
	string _StudentSurname;
	int _ID;
	int _StudentAge;
	static int _StudentID;
public:
	Student_Kulikov();
	friend ifstream& operator>>(ifstream& fin, Student_Kulikov& S);
	friend istream& operator>>(istream& fin, Student_Kulikov& S);
	friend ofstream& OutputObjectsFile(ofstream& fout, const Student_Kulikov& S);
	friend ostream& operator<<(ostream& fout, const Student_Kulikov& S);
	~Student_Kulikov() {}
};

