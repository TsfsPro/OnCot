#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	cout << "Игра угадай число.!" << endl;
	int numb = rand();
	cout << "Число сгенереровано!" << endl;
	cout << "Теперь очередь за вами! Введите число." << endl;
	int usNumber = 0;
	cin >> usNumber;
	if (usNumber == numb) {
		cout << "Поздравляю вы угадали." << endl;
		cout << "Вы ввели: " << usNumber << ". А мы загадали " << numb << endl;
	}
	else {
		cout << "Вы не угадали." << endl;
		cout << "Вы ввели: " << usNumber << ". А мы загадали: " << numb << endl;
	}

}


