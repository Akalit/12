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
	if(user > 3 || user < -1) {	system("cls"); cout << "�� ������ �� ������ ������� � ������ ����� ���" << endl;}
	} while(user > 3 || user < -1 ); system("cls");
	
	
	 switch(user) {
	 case-1:tablo.etaj = "(-1) ������, ���������� ������������ �������������� ������ �����, � �������������";    break;
	 case 0:tablo.etaj = "(0) ������� �������"; break;
	 case 1:tablo.etaj = "(1) ��������� �������"; break;
	 case 2:tablo.etaj = "(2) ������������ ����������� "; break;
	 case 3:tablo.etaj = "(3) ���������"; break ;}
	 cout << tablo.etaj << endl;}}