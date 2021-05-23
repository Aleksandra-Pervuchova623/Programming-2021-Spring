#include <iostream>
#include "Source.h"


using namespace std;

struct stackChar* push(struct stackChar* Head, char a)
{
	stackChar* ptr = new stackChar;
	/*if ((ptr = (struct stackChar*)malloc(sizeof(struct stackChar))) == NULL)
	{
		puts("Нет памяти");
		exit(-1);
	}*/
	ptr->c = a;
	ptr->next = Head;
	return ptr;
}

struct stackInt* push(struct stackInt* Head, int a)
{
	stackInt* ptr = new stackInt;
	/*if ((ptr = (struct stackInt*)malloc(sizeof(struct stackInt))) == NULL)
	{
		puts("Нет памяти");
		exit(-1);
	}*/
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