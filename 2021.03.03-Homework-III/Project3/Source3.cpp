#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ifstream fin("in.txt");
	string str;
	int index = 0;
	fin >> str;
	cout << str ;
	fin.close();
	return 0;
}