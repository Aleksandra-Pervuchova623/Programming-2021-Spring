#pragma once

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

