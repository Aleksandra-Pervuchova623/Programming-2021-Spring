#include <iostream>
using namespace std;

void countSort(int* a, int len);
void quickSort(int* a, int st, int end);
void swap(int& a, int& b);
void merger(int* a, int* b, int* c, int len1, int len2);


int main()
{
	int len1 = 10;
	int len2 = 10;
	int* a = new int[len1];
	int* b = new int[len2];
	for (int i = 0; i < len1; ++i)
	{
		a[i] = rand() % 100;
		b[i] = rand() % 100;
	}
	for (int i = 0; i < len1; ++i)
	{
		cout << a[i] << ' ';
		if (i == len1 - 1)
		{
			cout << endl;
		}
	}
	for (int i = 0; i < len2; ++i)
	{
		cout << b[i] << ' ';
		if (i == len2 - 1)
		{
			cout << endl;
		}
	}
	countSort(a, len1);
	int start = 0;
	quickSort(b, start, len2 - 1);
	for (int i = 0; i < len1; ++i)
	{
		cout << a[i] << ' ';
		if (i == len1 - 1)
		{
			cout << endl;
		}
	}
	for (int i = 0; i < len2; ++i)
	{
		cout << b[i] << ' ';
		if (i == len2 - 1)
		{
			cout << endl;
		}
	}
	int L = len1 + len2;
	int* c = new int[L];
	merger(a, b, c, len1, len2);
	for (int i = 0; i < L; ++i)
	{
		cout << c[i] << ' ';
	}
	delete[] a;
	delete[] b;
	delete[] c;
}

void countSort(int* a, int len)
{
	const int n = 100;
	int count[n] = { 0 };
	for (int i = 0; i < len; ++i)
	{
		++count[a[i]];
	}
	int index = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < count[i]; ++i)
		{
			a[index] = i;
			++index;
		}
	}

}

void quickSort(int* a, int st, int end)
{
	int v = st;
	int w = end;
	int piv = a[(v + w) / 2];
	while (v <= w)
	{
		while (a[v] < piv)
		{
			++v;
		}
		while (a[w] > piv)
		{
			--w;
		}
		if (v <= w)
		{
			swap(a[v++], a[w--]);
		}
	}
	if (st < w)
	{
		quickSort(a, st, w);
	}
	if (end > v)
	{
		quickSort(a, v, end);
	}
}

void swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

void merger(int* a, int* b, int* c, int len1, int len2)
{

	int h = 0;
	int k = 0;
	for (int t = 0; t < len1+len2; ++t)
	{
		if (k == len2)
		{
			c[t] = a[h];
			++h;
		}
		else
			if (h == len1)
			{
				c[t] = b[k];
				++k;
			}
			else
				if (a[h] <= b[k])
				{
					c[t] = a[h];
					++h;
				}
				else
				{
					c[t] = b[k];
					++k;
				}
	}
}

