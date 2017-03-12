#include <iostream>
#include <windows.h>
using namespace std;

union Tablo { char *etaj; };

void main() {
	setlocale(0, "");
	int user; Tablo tablo;
	while (true){
	do {
	cin >> user ;
	if(user > 3 || user < -1) {	system("cls"); cout << "Вы нажали на кнопку которой в данном ливте нет" << endl;}
	} while(user > 3 || user < -1 ); system("cls");
	
	
	 switch(user) {
	 case-1:tablo.etaj = "(-1) Подвал, Находяться оборудование обоспечивающее маркет водой, и электричистом";    break;
	 case 0:tablo.etaj = "(0) Бытовая техника"; break;
	 case 1:tablo.etaj = "(1) Сенсорные гаджеты"; break;
	 case 2:tablo.etaj = "(2) Компьютерная электроника "; break;
	 case 3:tablo.etaj = "(3) Аксесуары"; break ;}
	 cout << tablo.etaj << endl;}}