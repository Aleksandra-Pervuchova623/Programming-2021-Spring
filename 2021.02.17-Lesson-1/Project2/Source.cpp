#include <iostream>
using namespace std;

double average(double n, ...)
{
	int m = (int)n;
	double result = 0;
	for (int i = 1; i <= m; ++i)
	{
		double* ptr = &n + i;
		cout << *ptr;
		if (i != m)
		{
			cout << ", ";
		}
		else
		{
			cout << endl;
		}
		result += *ptr;
	}
	return result / n;
}

int main()
{
	cout << average(5, 67.5, 3.2, 5.5, 89.7, 7.0) << endl;
	return 0;
}