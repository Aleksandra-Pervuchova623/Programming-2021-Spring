#include<iostream>
#include<string>

using namespace std;

template<typename T1, typename T2>
T1 sum(T1 a, T2 b)
{
	return a + b;
}

template<typename T1, typename T2>
T1 diff(T1 a, T2 b)
{
	return a - b;
}

template<typename T1, typename T2>
T1 mult(T1 a, T2 b)
{
	return a * b;
}

template<typename T1, typename T2>
T1 div(T1 a, T2 b)
{
	return a / b;
}

template<typename T1, typename T2>
T1 mod(T1 a, T2 b)
{
	while (a > b) a -= b;
	return a;
}

int operationIndex(char operation)
{
	switch (operation)
	{
	case '+':return 0;
	case '-':return 1;
	case '*':return 2;
	case '/':return 3;
	case '%':return 4;
	}
}

bool isInt(string str)
{
	return str.find('.') == -1;
}

bool isDouble(string str)
{
	return str.find('.') != -1;
}

template<typename T1, typename T2>
T1 calculate(T1 a, T2 b, char operation)
{
	T1(*ops[5])(T1, T2) = { sum, diff, mult, div , mod };
	return ops[operationIndex(operation)](a, b);
}

int main(int argc, char* argv[])
{
	string op1;
	string op2;
	string op;

	if (strcmp(argv[1], "--operator") == 0)
	{
		op = argv[2]; op1 = argv[4]; op2 = argv[6];
	}
	if (strcmp(argv[3], "--operator") == 0)
	{
		op = argv[4]; op1 = argv[2]; op2 = argv[6];
	}
	if (strcmp(argv[5], "--operator") == 0)
	{
		op = argv[6]; op1 = argv[2]; op2 = argv[4];
	}

	cout << op1 << " ";
	cout << op << " ";
	cout << op2 << "=";


	if (isInt(op1) && isInt(op2))
	{
		cout << calculate(stoi(op1), stoi(op2), op[0]);
	}
	else if (isDouble(op1) && isDouble(op2))
	{
		cout << calculate(stod(op1), stod(op2), op[0]);
	}
	else
	{
		if (isInt(op1))
		{
			cout << calculate(stoi(op1), stod(op2), op[0]);
		}
		else
		{
			cout << calculate(stod(op1), stoi(op2), op[0]);
		}
	}

	return 0;
}




/*Написать калькулятор, который может принимать параметры командной строки :
--operand1 целое число или число с точкой
--operator + -/ % *
--operand2 целое число или число с точкой
Выводит, соответственно, результат вычисления.В самом коде предполагается увидеть массив функций - операторов и какой - нибудь switch,
который по значению переданного параметра вызывает ту или иную функцию из массива.
Предполагается увидеть что - нибудь из такого :
int resolveOpNumber(char op);
template<class T1, class T2>
T1 calc(T1 a, T2 b, T1(*op)(T1, T2));

Пример работы :
mycalc.exe --operand1 45 --operand2 8 --operator %
45 % 8 = 5

Если программа получает некорректный ключ или не получает достаточного количества параметров, она отказывается работать.

upd1.Добавил приблизительный набор функций для подсчета.Конечно, нужно добавить какой - нибудь парсинг введенных чисел.
Обратите внимания на номера строк.Как - то так вышло, что в calculate у меня всего 2 строки. (43 и 46 - скобки).То есть мудрить там не нужно.*/