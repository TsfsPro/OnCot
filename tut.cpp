
//Простой конвертор валют
#include <iostream>
#include<string>

using namespace std;


int main(){
	setlocale(LC_ALL, "Rus");
	double yer = 1.13;
	double uen = 0.01;
	double fra = 1.36;
    double doll;
    int vib;

	cout<<"Выберите необходимую валюту для конвертации."<<endl;
	cout<<"1  Евро в доллары"<<endl;
	cout<<"2 Йены в доллары"<<endl;
	cout<<"3 Франки в доллары. "<<endl;
	cin>>vib;
	if(vib == 1){
		cout<<"Введите количество EURO"<<endl;
		cin>>doll;
		doll = doll * yer;
		cout<<"Результат: "<<doll << " $." <<endl;
	}
	else if(vib == 2){
		cout<<"Введите количество EIN"<<endl;
		cin>>doll;
		doll = doll * uen;
		cout<<"Результат: "<<doll << "$."  <<endl;
	}
	else if(vib == 3){
		cout<<"Введите количество FRA"<<endl;
		cin>>doll;
		doll = doll * fra;
		cout<<"Результат: "<<doll << " $."  <<endl;
	}
	else{
		cout<<"Введите корректное значение."<<endl;
	}


	return 0;
}