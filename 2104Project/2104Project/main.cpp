#include<iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;


class rink {

};


void start();
void firstmenu();
void mainpage();
void firstmenu_time();
void firstmenu_money();


int main()
{
	system("mode con cols = 300 lines 50 | title Ice-Rink");
	start();
	return 0;
}

void start()
{
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t     I C E  R I N K";
	cout << "\n\n\n\n\t\t\t\t\t\t       2104 김민경";
	Sleep(100);
	mainpage();
}

void mainpage() {
	char ch;
	do
	{
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\tMAIN MENU";
		cout << "\n\n\n\n\t\t\t\t\t\t   1. 이용 시간 / 가격";
		cout << "\n\n\t\t\t\t\t\t\t 2. 매표";
		cout << "\n\n\t\t\t\t\t\t       3. 단체 강습";
		cout << "\n\n\t\t\t\t\t\t\t 4. 대관";
		cout << "\n\n\t\t\t\t\t\t\t 5. 종료";
		cout << "\n\n\n\n\t\t\t\t\t\t   선택한 메뉴(1~5) : ";
		cin >> ch;
		system("cls");
		switch (ch)
		{
		case '1':
			firstmenu();
			break;
		case '2':
			break;
		case '3':
			break;
		case '4':
			break;
		case '5':
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t     I C E  R I N K";
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  프로그램을 종료합니다.\n\n\n\n\n\n";
			break;
		default:cout << "\a";
		}
		cin.ignore();
		cin.get();
	} while (ch != '5');
}

void firstmenu() {
	char ch;
	cout << "이전 페이지(z), 다음페이지(a)";
	firstmenu_time();
	cin >> ch;
	if (ch == 'z') {
		system("cls");
		mainpage();
	}
	else if (ch == 'a') {
		system("cls");
		firstmenu_money();
	}
	cin.ignore();
	cin.get();
}

void firstmenu_time() {
	cout << "\n\n\n\t\t\t\t\t\t\t이용 시간";
	cout << "\n\n\n\n\t\t\t 정기 휴무일 : 매월 1, 3주 월요일";
	cout << "\n\n\t\t\t 이용 가능한 시간 : 10:00~18:00";
	cout << "\n\n\t\t\t 정빙 시간표";
	cout << "\n\n\n\t\t\t 07:50~08:10 \t\t\t 17:50~18:10";
	cout << "\n\n\n\t\t\t 09:50~10:10 \t\t\t 19:50~20:10";
	cout << "\n\n\n\t\t\t 11:50~12:10 \t\t\t 21:50~22:10";
	cout << "\n\n\n\t\t\t 13:50~14:10 \t\t\t 23:50~00:10";
	cout << "\n\n\n\t\t\t 15:50~16:10";
}

void firstmenu_money() {
	cout << "이전 페이지(z)";
	cout << "\n\n\n\t\t\t\t\t\t\t이용 가격";
	cout << "\n\n\n\n\t\t\t 경로 : 65세 이상/ 소인 : 14세 미만";
	cout << "\n\n\t\t\t 청소년 : 초등학생, 중학생, 고등학생";
	cout << "\n\n\n\t\t\t\t\t\t\t소인/경로";

	if (getch() == 'z') {
		system("cls");
		mainpage();
	}
	cin.ignore();
	cin.get();
}