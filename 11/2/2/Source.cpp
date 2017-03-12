#include <iostream>
#include <vector>
#include <string>
#include <windows.h>

using namespace std;

struct MyStruct {string name; float vlajnost, veter, tm; int month ;}; void show (int vsp_gorod);

void main() {	system("chcp 1251");	system("cls");
MyStruct uslov; vector<MyStruct>m_uslov;float vlaj_vsp = 1000,v_suhitm =0, month_vsp = 5,mas[36]; vector<string>m_name; int vsp_gorod =0,q = 0, w = 18 , vvsp_gorod = 0; string mx_vlaj,as; HANDLE hOUTPUT = GetStdHandle(STD_OUTPUT_HANDLE);


while (true) { cout << "Ввести еще город ? ESC - Нет " << endl; system("pause"); if (GetAsyncKeyState(VK_ESCAPE)) { break; }
cout << "Введите название города : "; cin >>  uslov.name;  uslov.month =1; m_name.push_back(uslov.name);
for (int q = 1; q < 13; q++) { system ("cls"); cout << "\n\tМесяц "<<(uslov.month++); cout <<"\n\nВлажность в % : "; cin >> uslov.vlajnost; cout << "\nВетер : "; cin >> uslov.veter; cout << "\nТемпература : ";cin >> uslov.tm; m_uslov.push_back({ uslov.name,uslov.vlajnost ,uslov.veter,uslov.tm,uslov.month});}}system("cls");
for (auto q : m_uslov) { vvsp_gorod++;
	if (q.name == m_name[vsp_gorod]) { 
		if(vlaj_vsp > q.vlajnost) {vlaj_vsp = q.vlajnost ; month_vsp = (q.month - 1);}}  
			if (vvsp_gorod == 12) { cout <<"   В "<< m_name[vsp_gorod]  << " cамым сухим месяцем был " << month_vsp << " его влажность составляет " << vlaj_vsp << " % " << endl;vvsp_gorod = 0; vsp_gorod++; vlaj_vsp = 1000;}} vlaj_vsp = 0; system("pause");
		
for(auto q : m_uslov) if(vlaj_vsp < q.vlajnost) {vlaj_vsp = q.vlajnost; mx_vlaj = q.name; month_vsp = (q.month - 1);}cout << "\nСамой дождливой страной являеться " << mx_vlaj << " ее влажность составила " << vlaj_vsp <<" % в "<< month_vsp << "м месяце" << endl; vsp_gorod =0; system("pause");

for (auto q : m_uslov) { vvsp_gorod++;
	if (q.name == m_name[vsp_gorod]) { 
		if(v_suhitm < (q.tm - q.vlajnost)) { v_suhitm = (q.tm - q.vlajnost); vlaj_vsp = q.vlajnost; month_vsp = q.tm; mx_vlaj = m_name[vsp_gorod];}}
			if (vvsp_gorod == 12) { vvsp_gorod = 0; vsp_gorod++;}
			} cout << "\n Самая сухая и гарячая cтрана "<< mx_vlaj<<" её температура в один из месяцев достигла "<< month_vsp <<" градусов! а влажность была "<< vlaj_vsp <<" % "<< endl; v_suhitm =0; vlaj_vsp = 1000; vvsp_gorod =0; vsp_gorod =0;

for (auto q : m_uslov) { vvsp_gorod++; 
	if (q.name == m_name[vsp_gorod]) { v_suhitm += q.tm; }
		if (vvsp_gorod == 12) { if (vlaj_vsp > v_suhitm) {vlaj_vsp = v_suhitm; mx_vlaj = q.name;} vsp_gorod++; vvsp_gorod = 0;v_suhitm =0;}} cout << "\nСамая холодная страна " << mx_vlaj <<" в среднем её температура составляет "<< (vlaj_vsp / 2) << endl; m_name.clear(); vsp_gorod =0;
		vsp_gorod =0;

cout << "\nВведите страну которую показать во временах года " << endl; cin >> mx_vlaj; system("cls"); vsp_gorod =0; for (auto q : m_uslov) {if(q.name == mx_vlaj) {mas[vsp_gorod] = q.vlajnost; vsp_gorod++;  mas[vsp_gorod] = q.veter; vsp_gorod++;mas[vsp_gorod] = q.tm; vsp_gorod++;}}vsp_gorod = 0; v_suhitm = 1; vvsp_gorod = 7, vlaj_vsp =1;
for(int e =0; e < 18; e++){ 
	if(q % 3 == 0) { SetConsoleTextAttribute(hOUTPUT, FOREGROUND_BLUE | FOREGROUND_INTENSITY); cout << "\n   Месяц " << v_suhitm <<  "\t\tМесяц " << vvsp_gorod << endl << endl;vvsp_gorod++, v_suhitm++; SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);}

if(v_suhitm <= 4) { SetConsoleTextAttribute(hOUTPUT, FOREGROUND_BLUE| FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_INTENSITY);} else { SetConsoleTextAttribute(hOUTPUT, FOREGROUND_GREEN | FOREGROUND_INTENSITY);}
	vsp_gorod++; show(vsp_gorod); cout << mas[q]; SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); cout << "\t";

if(v_suhitm <= 4) { SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED| FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_INTENSITY);} else { SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_INTENSITY);}
	 show(vsp_gorod); cout << mas[w] << endl;
	if (vsp_gorod == 3) { vsp_gorod = 0;cout << endl ; } q++; w++, vlaj_vsp++;} SetConsoleTextAttribute(hOUTPUT, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);}

void show (int vsp_gorod) {
	switch (vsp_gorod) {
	case 1:cout << "Влажность в % : "; break;
	case 2:cout << "Ветер : \t"; break;
	case 3:cout << "Температура :\t"; break;}}