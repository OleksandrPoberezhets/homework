
#include "pch.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int strNum = 0;
	int maxLen = 0;
	int minLen = 0;
	ifstream file;

	bool f=true;

	file.open("C:\\Users\\Pitercantrop\\Desktop\\Cpp\\6.31input.txt");

	while (!file.eof()) {
		strNum++;
		string str;
		getline(file, str);
		cout << str << endl;
		cout << str.length() << endl;
		if (f==true) {
			minLen = str.length();
			f = false;
		}
		if (str.length()<minLen) {
			minLen = str.length();
		}
		if (str.length() > maxLen) {
			maxLen = str.length();
		}

	}
	cout << "Max length: " << maxLen << endl;
	cout << "Min length: " << minLen << endl;


	ofstream outfile;          // поток для записи
	outfile.open("C:\\Users\\Pitercantrop\\Desktop\\Cpp\\6.31output.txt"); // окрываем файл для записи
	outfile<< "Max length: " << maxLen << endl;
	outfile << "Min length: " << minLen << endl;
	outfile.close();

	return 0;
}