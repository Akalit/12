#include <iostream>
#include <string>
#include <vector>
#include<windows.h>


using namespace std;

struct School {
	string name; string sex; string date; string klas; float year; float bal1; float bal2; float bal3; float bal4; float bal5;
};


int main () {   system("chcp 1251");	system("cls");
School school;	vector<School>m_school; int predmet; float Sred_Bal_Predmet_Classa =0; float ochenka =0, dvoesh =0, vozrast =0; string vsp, voz_vsp;
while (true) { cout << "������� ��� : ";cin >> school.name; cout << "\n������� ��� : "; cin >> school.sex; cout << "\n������� ���� �������� : "; cin >> school.date; cout << "\n������� ����� : "; cin >> school.klas; cout << "\n������� ������� : "; cin >> school.year;
cout << "\n������� ������ � ������� : "; cin >> school.bal1; cout << "\n������� ������ � ��� ����� : "; cin >> school.bal2; cout << "\n������� ������ � ����� ��� : "; cin >> school.bal3; cout << "\n������� ������ � ����� ���� : "; cin >> school.bal4; cout << "\n������� ������ � �������� : "; cin >> school.bal5;
m_school.push_back({school.name, school.sex, school.date, school.klas, school.year,school.bal1 ,school.bal2 ,school.bal3 ,school.bal4 ,school.bal5 });
system("Pause"); if (GetAsyncKeyState(VK_ESCAPE)) { break ;}}  system("cls");
cout << "���������� 11 ������" << endl;for(auto q : m_school) if (q.klas == "11") cout << "  " << q.name << endl; cout << "���������� 9 ������" << endl; for (auto q : m_school) if (q.klas == "9") cout <<"  "<< q.name << endl;
cout << "������� ����� � ������� ����� ������� �������������������� ���"<< endl; cin >> vsp;  cout << "\n�� ������ �������� ������� �������������������� ���? \n 1 ������� | 2 ��� ���� | 3 ����� ��� | 4 ����� ���� | 5 ��������" << endl; cin >> predmet;
for(auto q : m_school) { 
	if(q.klas == vsp)
	    switch (predmet) {
		 case 1: Sred_Bal_Predmet_Classa += q.bal1; system("cls"); cout << "�������������������� ��� ������� : " << Sred_Bal_Predmet_Classa << endl; break;
		  case 2: Sred_Bal_Predmet_Classa += q.bal2; system("cls"); cout << "�������������������� ��� ��� ����� : " << Sred_Bal_Predmet_Classa << endl; break;
		   case 3: Sred_Bal_Predmet_Classa += q.bal3; system("cls"); cout << "�������������������� ��� ����� ��� : " << Sred_Bal_Predmet_Classa << endl; break;
		    case 4: Sred_Bal_Predmet_Classa += q.bal4; system("cls"); cout << "�������������������� ��� ����� ���� : " << Sred_Bal_Predmet_Classa << endl; break;
		     case 5: Sred_Bal_Predmet_Classa += q.bal5; system("cls"); cout << "�������������������� ��� �������� : " << Sred_Bal_Predmet_Classa << endl; break;}}
string name_schollboy; cout << "������� ��� ������� ��� �� ���������� ��� ������� ��� " << endl;   cin >> name_schollboy; system("cls");
for(auto q : m_school) { predmet = 0; predmet += q.bal1; predmet += q.bal2; predmet += q.bal3; predmet += q.bal4; predmet += q.bal5; if (q.name == name_schollboy) {cout << "�������������������� ��� " << name_schollboy << " = " << (predmet /= 5) << endl;}}
for(auto q : m_school) { ochenka = 0; ochenka += q.bal1; ochenka += q.bal2; ochenka += q.bal3; ochenka += q.bal4; ochenka += q.bal5; if((ochenka /= 5) >= 10) {cout <<"  ��������� : "<< q.name <<" "<< ochenka << endl;}}
for (auto q : m_school) { ochenka = 0; ochenka += q.bal1; ochenka += q.bal2; ochenka += q.bal3; ochenka += q.bal4; ochenka += q.bal5; if ((ochenka /= 5) <= 5 ) {cout << "  ��������� : " << q.name << " " << ochenka << endl;}}
cout << "������� ����� ������ ��� ��������� ��������������������� ��������: "; cin >> voz_vsp;  predmet =0;
for(auto q : m_school) {if(q.klas == voz_vsp) { vozrast += q.year; predmet++;}} vozrast /= predmet; cout << "�������������������� ������� �������� ������ " << voz_vsp << " ���������� " << vozrast <<" ��� (���(�))" << endl;
return 0; }