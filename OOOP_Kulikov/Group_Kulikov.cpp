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

void Group_Kulikov::clear() {
	for (auto i = Group.begin(); i != Group.end(); ++i)
	{
		delete* i;
	}
	Group.clear();
}

