#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct st
{
	string c; struct st* next;
};

struct st* push(struct st*, char);

string del(struct st**);

bool isNumber(char);


int main() {
	struct st* calc = NULL;
	int res = 0;
	int x = 0;
	int y = 0;
	char outstring[80] = "";
	string str;
	gets_s(outstring);
	for (int i = 0; i < strlen(outstring); ++i)
	{
		if (isNumber(outstring[i]))
		{
			calc = push(calc, outstring[i]);
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
	res = delI(&calc);
	cout << res;
	return 0;
}

struct st* push(struct st* Head, char a[])
{
	struct st* ptr;
	if ((ptr = (struct st*)malloc(sizeof(struct st))) == NULL)
	{
		puts("Нет памяти");
		exit(-1);
	}
	ptr->c = a;
	ptr->next = Head;
	return ptr;
}


string del(struct st** head)
{
	struct st* ptr;
	string a;
	if (*head == NULL)
	{
		return '\0';
	}
	ptr = *head;
	*head = ptr->next;
	a = ptr->c;
	free(ptr);
	return a;
}

bool isNumber(char a)
{
	return a <= '9' && a >= '0';
}
