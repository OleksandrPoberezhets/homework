#include "pch.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int maxLen = 0;

	ifstream file;
	ofstream outfile;

	double dstrLen;
	bool f = true;

	file.open("C:\\Users\\Pitercantrop\\Desktop\\Cpp\\6.27input.txt");

	while (!file.eof()) {
		string str;
		getline(file, str);
		

		if (str.length() > maxLen) {
			maxLen = str.length();
		}

		if (str.length() % 2 != 0) {
			str.insert(0, 1, ' ');
			cout << "not 2" << endl;
		}
		cout << str << endl;
		cout << str.length() << endl;

	}
	file.close();

	file.open("C:\\Users\\Pitercantrop\\Desktop\\Cpp\\6.27input.txt");
	outfile.open("C:\\Users\\Pitercantrop\\Desktop\\Cpp\\6.27output.txt");

	while (!file.eof()) {
		string str;
		getline(file, str);

		
		str.insert(0, (maxLen / 2)-(str.length()/2), ' ');
		

		outfile << str << endl;
		cout << str << endl;
		cout << str.length() << endl;
	}


	file.close();
	outfile.close();

	return 0;
}