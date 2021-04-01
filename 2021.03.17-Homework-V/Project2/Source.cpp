#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	fstream fbin;
	char b = ' ';
	fbin.open("in.txt", ios::binary | ios::in | ios::out);
	if (!fbin)
	{
		cout << "Файл не удалось открыть" << endl;
	}
	else
	{
		cout << "Файл открыт" << endl;
	}
	while (true)
	{
		fbin.read((char*)&b, sizeof(b));
		if (fbin.eof()) {
			break;
		}
		cout << b;
		if (b == 'e' || b == 'y' || b == 'u' || b == 'i' || b == 'o' || b == 'a')
		{
			fbin.seekg(-(int)sizeof(char), ios::cur);
			b = '#';
			fbin.write((char*)&b, sizeof(char));
			fbin.seekg(fbin.tellg(), ios::beg);
        }
	}
	fbin.close();
}