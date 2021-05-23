#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct st
{
	int c; struct st* next;
};

struct st* push(struct st*, int);

int delI(struct st**);
char delC(struct st**);

bool isNumber(char);


int main() {
	struct st* calc = NULL;
	int res = 0;
	int x = 0;
	int y = 0;
	char outstring[80] = "";
	gets_s(outstring);
	for (int i = 0; i < strlen(outstring); ++i)
	{
		if (isNumber(outstring[i]))
		{
			calc = push(calc, outstring[i] - '0');
		}
		else
		{
			x = delI(&calc);
			y = delI(&calc);
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

struct st* push(struct st* Head, int a)
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

int delI(struct st** head)
{
	struct st* ptr;
	int a;
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
