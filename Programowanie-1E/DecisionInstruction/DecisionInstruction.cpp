#include <iostream>

/*
DRY - don't repeat yourself - nie powtarzaj si�
*/

/*
Operatory por�wnania:

* r�wno�ci				==
* r�no�ci				!=
* wi�kszo�ci			>
* mniejszo�ci			<
* wi�ksze lub r�wne		>=
* mniejsze lub r�wne	<=

argument1 >= argument2

Wynikiem dzia�ania tych operator�w
jest warto�� logiczna true/false typu bool

bool zmienna = true;
bool zmienna2 = 5 > 74;

*/

/*
Operatory logiczna:
F - false
T - true

			  and		  or		not
A	B		A && B		A || B		!A
F	F		  F			  F			T
F	T		  F			  T			T
T	F		  F			  T			F
T   T		  T			  T			F


*/

/*
Napisz funkcj�, kt�a wczyta dwie liczby i wykona dzielenie na nich
*/
void task1()
{
	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsza liczbe:\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe (nie podawaj zera):\n";
	std::cin >> secondNumber;

	//iloraz
	int quotient = 0;

	/*if (secondNumber != 0)
		quotient = firstNumber / secondNumber;

	if (secondNumber != 0)
		std::cout << "Iloraz: " << quotient << "\n";

	if (secondNumber == 0)
		std::cout << "Dzielenie przez zero!!!!\n";*/

	if (secondNumber != 0)
	{
		quotient = firstNumber / secondNumber;
		std::cout << "Iloraz: " << quotient << "\n";
	}
	else
	{
		std::cout << "Dzielenie przez zero!!!!\n";
	}

	std::cout << "Koniec programu\n";
}

/*
Napisz funkjc�, kt�ra wczyta liczb� i wy�wietli informacj�
czy jest ona dodatnia czy nie.
*/
void task2()
{
	int numberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> numberToCheck;

	if (numberToCheck > 0)
		std::cout << "Liczba wi�ksza od zera\n";
	else
		std::cout << "Liczba r�wna lub mniejsza od zera\n";
}

/*
Napisz funkcj�, kt�ra wczyta liczb� i wy�wietli informacj�
czy jest ona w zakresie <10, 25>.
*/
void task3()
{
	int numberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> numberToCheck;

	/*if (numberToCheck >= 10)
	{
		if (numberToCheck <= 25)
		{
			std::cout << "Liczba jest w zakresie\n";
		}
		else
		{
			std::cout << "Liczba nie jest w zakresie\n";
		}
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie\n";
	}*/

	if (!(numberToCheck >= 10 && numberToCheck <= 25))
	{
		std::cout << "Liczba nie jest w zakresie\n";
	}
	else
	{
		std::cout << "Liczba jest w zakresie\n";
	}
}

int main()
{
	//task1();
	//task2();
	task3();
}
