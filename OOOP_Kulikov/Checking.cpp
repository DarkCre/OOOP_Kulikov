#include "Checking.h"

bool CheckingString(string S)
{
	int i = 0;
	while (i != S.size()) {
		if (!(S[i] >= 'A' && S[i] <= 'z') && !(S[i] == ' ') /* && !(S[i] >= '0' && S[i] <= '9')*/)
		{
			cout << "В имени должны быть только латинские буквы или цифры." << endl;
			return false;
		}
		++i;
	}
	return true;
}