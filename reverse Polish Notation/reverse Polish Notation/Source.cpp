#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <DocumentSource.h>

using namespace std;

struct stackChar
{
	char c; struct stackChar* next;
};

struct stackChar* push(struct stackChar*, char);
char del(struct stackChar**);
int prior(char);

struct stackInt
{
	int c; struct stackInt* next;
};

struct stackInt* push(struct stackInt*, int);
int del(struct stackInt**);
bool isNumber(char);

void revPolNot(char a[], char b[], struct stackChar* opers) {
	int k = 0;
	int point = 0;
	while (a[k] != '\0' && a[k] != '=')
	{
		if (a[k] == ')')
		{
			while (opers->c != '(')
			{
				b[point++] = del(&opers);
			}
			del(&opers);
		}
		if (a[k] >= '0' && a[k] <= '9')
		{
			b[point++] = a[k];
		}
		if (a[k] == '(')
		{
			opers = push(opers, '(');
		}
		if (a[k] == '+' || a[k] == '-' || a[k] == '*' || a[k] == '/')
		{
			if (opers == NULL)
			{
				opers = push(opers, a[k]);
			}
			else
			{
				if (prior(opers->c) < prior(a[k]))
				{
					opers = push(opers, a[k]);
				}
				else
				{
					while (opers != NULL && prior(opers->c) >= prior(a[k]))
					{
						b[point++] = del(&opers);
					}
					opers = push(opers, a[k]);
				}
			}
		}
		++k;
	}
	while (opers != NULL)
	{
		b[point++] = del(&opers);
	}
}

/*int main()
{
	setlocale(LC_ALL, "Russian");
	struct stackChar* opers = NULL;
	char a[80] = "";
	char outstring[80] = "";
	int k;
	int point;
	//do
	//{
	puts("Введите выражение:");
	fflush(stdin);
	gets_s(a);
	k = 0;
	point = 0;
	while (a[k] != '\0' && a[k] != '=')
	{
		if (a[k] == ')')
		{
			while (opers->c != '(')
			{
				outstring[point++] = del(&opers);
			}
			del(&opers);
		}
		if (a[k] >= '0' && a[k] <= '9')
		{
			outstring[point++] = a[k];
		}
		if (a[k] == '(')
		{
			opers = push(opers, '(');
		}
		if (a[k] == '+' || a[k] == '-' || a[k] == '*' || a[k] == '/')
		{
			if (opers == NULL)
			{
				opers = push(opers, a[k]);
			}
			else
			{
				if (prior(opers->c) < prior(a[k]))
				{
					opers = push(opers, a[k]);
				}
				else
				{
					while (opers != NULL && prior(opers->c) >= prior(a[k]))
					{
						outstring[point++] = del(&opers);
					}
					opers = push(opers, a[k]);
				}
			}
		}
		++k;
	}
	while (opers != NULL)
	{
		outstring[point++] = del(&opers);
	}
	//outstring[point] = '/0';
	printf("\n%s\n", outstring);
	fflush(stdin);
	//} while (getchar() != 'n');

	struct stackInt* calc = NULL;
	int res = 0;
	int x = 0;
	int y = 0;
	for (int i = 0; i < strlen(outstring); ++i)
	{
		if (isNumber(outstring[i]))
		{
			calc = push(calc, outstring[i] - '0');
		}
		else
		{
			x = del(&calc);
			y = del(&calc);
			switch (outstring[i]) {
			case '+': res = x + y; break;
			case '-':res = y - x; break;
			case '*': res = x * y; break;
			case '/': res = y / x; break;
			}

			calc = push(calc, res);
		}
	}
	res = del(&calc);
	cout << res;
}*/

struct stackChar* push(struct stackChar* Head, char a)
{
	struct stackChar* ptr;
	if ((ptr = (struct stackChar*)malloc(sizeof(struct stackChar))) == NULL)
	{
		puts("Нет памяти");
		exit(-1);
	}
	ptr->c = a;
	ptr->next = Head;
	return ptr;
}

struct stackInt* push(struct stackInt* Head, int a)
{
	struct stackInt* ptr;
	if ((ptr = (struct stackInt*)malloc(sizeof(struct stackInt))) == NULL)
	{
		puts("Нет памяти");
		exit(-1);
	}
	ptr->c = a;
	ptr->next = Head;
	return ptr;
}

char del(struct stackChar** Head)
{
	struct stackChar* ptr;
	char a;
	if (*Head == NULL)
	{
		return '\0';
	}
	ptr = *Head;
	*Head = ptr->next;
	a = ptr->c;
	free(ptr);
	return a;
}

int del(struct stackInt** Head)
{
	struct stackInt* ptr;
	int a;
	if (*Head == NULL)
	{
		return '\0';
	}
	ptr = *Head;
	*Head = ptr->next;
	a = ptr->c;
	free(ptr);
	return a;
}

int prior(char a)
{
	switch (a)
	{
	case '*':
		return 3;
	case '/':
		return 3;
	case '+':
		return 2;
	case '-':
		return 2;
	case '(':
		return 1;
	}
}

bool isNumber(char a)
{
	return a <= '9' && a >= '0';
}