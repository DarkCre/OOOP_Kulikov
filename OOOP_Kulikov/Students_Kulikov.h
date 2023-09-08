#pragma once
#include "Checking.h"
using namespace std;

class Students_Kulikov
{
private:
	string _StudentName;
	string _StudentSurname;
	int _ID;
	int _StudentAge;
	static int _StudentID;
public:
	Students_Kulikov();


	friend ifstream& operator>>(ifstream& fin, Students_Kulikov& S);
	friend istream& operator>>(istream& fin, Students_Kulikov& S);
	friend ofstream& OutputObjectsFile(ofstream& fout, const Students_Kulikov& S);
	friend ostream& operator<<(ostream& fout, const Students_Kulikov& S);

		//void Set(string PipeName, double PipeLength, double PipeDia, bool PipeStatus);

		//void SetStatus(bool PipeStatus);

		//string GetName() const;
		//bool GetStatus() const;
		//double GetDia() const;
		//double GetLength() const;

		//void InputStatusCheck();


		//static int GetID();
		//static void IDreplacement(const unordered_map<int, Pipe>& MapP);

};

