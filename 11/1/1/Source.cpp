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
while (true) { cout << "Введите имя : ";cin >> school.name; cout << "\nВведите пол : "; cin >> school.sex; cout << "\nВведите дату рождения : "; cin >> school.date; cout << "\nВведите класс : "; cin >> school.klas; cout << "\nВведите возраст : "; cin >> school.year;
cout << "\nВведите оценку с Истории : "; cin >> school.bal1; cout << "\nВведите оценку с Анг языка : "; cin >> school.bal2; cout << "\nВведите оценку с Заруб лит : "; cin >> school.bal3; cout << "\nВведите оценку с Немец язык : "; cin >> school.bal4; cout << "\nВведите оценку с Экологии : "; cin >> school.bal5;
m_school.push_back({school.name, school.sex, school.date, school.klas, school.year,school.bal1 ,school.bal2 ,school.bal3 ,school.bal4 ,school.bal5 });
system("Pause"); if (GetAsyncKeyState(VK_ESCAPE)) { break ;}}  system("cls");
cout << "Выпускники 11 класса" << endl;for(auto q : m_school) if (q.klas == "11") cout << "  " << q.name << endl; cout << "Выпускники 9 класса" << endl; for (auto q : m_school) if (q.klas == "9") cout <<"  "<< q.name << endl;
cout << "Введите класс в котором будет показан среднестатистический бал"<< endl; cin >> vsp;  cout << "\nПо какому предмету вывести среднестатистический бал? \n 1 История | 2 Анг язык | 3 Заруб лит | 4 Немец язык | 5 Экология" << endl; cin >> predmet;
for(auto q : m_school) { 
	if(q.klas == vsp)
	    switch (predmet) {
		 case 1: Sred_Bal_Predmet_Classa += q.bal1; system("cls"); cout << "Среднестатистический бал Истории : " << Sred_Bal_Predmet_Classa << endl; break;
		  case 2: Sred_Bal_Predmet_Classa += q.bal2; system("cls"); cout << "Среднестатистический бал Анг языка : " << Sred_Bal_Predmet_Classa << endl; break;
		   case 3: Sred_Bal_Predmet_Classa += q.bal3; system("cls"); cout << "Среднестатистический бал Заруб лит : " << Sred_Bal_Predmet_Classa << endl; break;
		    case 4: Sred_Bal_Predmet_Classa += q.bal4; system("cls"); cout << "Среднестатистический бал Немец язык : " << Sred_Bal_Predmet_Classa << endl; break;
		     case 5: Sred_Bal_Predmet_Classa += q.bal5; system("cls"); cout << "Среднестатистический бал Экологии : " << Sred_Bal_Predmet_Classa << endl; break;}}
string name_schollboy; cout << "Введите имя ученика что бы посмотреть его средний бал " << endl;   cin >> name_schollboy; system("cls");
for(auto q : m_school) { predmet = 0; predmet += q.bal1; predmet += q.bal2; predmet += q.bal3; predmet += q.bal4; predmet += q.bal5; if (q.name == name_schollboy) {cout << "Среднестатистический бал " << name_schollboy << " = " << (predmet /= 5) << endl;}}
for(auto q : m_school) { ochenka = 0; ochenka += q.bal1; ochenka += q.bal2; ochenka += q.bal3; ochenka += q.bal4; ochenka += q.bal5; if((ochenka /= 5) >= 10) {cout <<"  Отличники : "<< q.name <<" "<< ochenka << endl;}}
for (auto q : m_school) { ochenka = 0; ochenka += q.bal1; ochenka += q.bal2; ochenka += q.bal3; ochenka += q.bal4; ochenka += q.bal5; if ((ochenka /= 5) <= 5 ) {cout << "  Двоечники : " << q.name << " " << ochenka << endl;}}
cout << "Введите номер класса для просмотра среднестатистического возраста: "; cin >> voz_vsp;  predmet =0;
for(auto q : m_school) {if(q.klas == voz_vsp) { vozrast += q.year; predmet++;}} vozrast /= predmet; cout << "Среднестатистический возраст учеников класса " << voz_vsp << " составляет " << vozrast <<" Лет (Год(а))" << endl;
return 0; }