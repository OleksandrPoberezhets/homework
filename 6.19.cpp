
#include "pch.h"
#include <fstream>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	double wAmount = 0;
	double w2Amount = 0;

	string lst[20] = {"bb","cc","dd","ff","gg","hh","jj","kk","ll","mm","nn","pp","qq","rr","ss","tt","vv","ww","xx","zz"};

	ifstream file;
	string temp;

	file.open("C:\\Users\\Pitercantrop\\Desktop\\Cpp\\txt.txt");

	while (file >> temp) {
		wAmount++;

		cout << temp  << endl;
		for (int i = 0; i < 20; i++) {
			if (temp.find(lst[i]) != -1) {
				w2Amount++;
			}
		}
	}
	file.close();
	cout << (w2Amount / wAmount)*100 <<"%"<< endl;
	return 0;
}