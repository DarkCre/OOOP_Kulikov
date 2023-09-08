#pragma once
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

template <typename T>
bool СheckingValues(const T& Variable, istream& in = cin, T beginning = numeric_limits<T>::min(), T end = numeric_limits<T>::max())
{
	if (in.fail() || in.peek() != '\n' || Variable<beginning || Variable>end)
	{
		in.clear();
		in.ignore(1000, '\n');
		cout << "Указаны некоректные данные, пожалуйста, укажите число от " << beginning << " до " << end << endl;
		return false;
	}
	return true;
}

bool CheckingString(string S);