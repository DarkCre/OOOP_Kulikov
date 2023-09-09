#pragma once
#include "Student_Kulikov.h"
#include <vector>


class Group_Kulikov
{
private:
	vector<Student_Kulikov*> Group;
public:
	void add();
	void vector_output();
	void read_file();
	void write_file();
	void clear();
	~Group_Kulikov() {};
};

