#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <ctime>
using namespace std;

void CursorView(char show);
void start();
void firstmenu();
void mainpage();
void firstmenu_time();
void firstmenu_money();
void secondmenu();
void secondmenu_ticket();
void thirdmenu();
void thirdmenu_class();
void fourthmenu();
void fourthmenu_choice();
void fourthmenu_choice1();
void fourthmenu_choice2();

int endday[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
	CursorView(false);
	system("mode con cols = 300 lines 50 | title Ice-Rink");
	start();
	return 0;
}

//커서 깜빡임 표시 X 함수
void CursorView(char show) {
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

//시작 로딩 화면
void start()
{
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t     I C E  R I N K";
	cout << "\n\n\n\n\t\t\t\t\t\t       2104 김민경";
	Sleep(2000);
	mainpage();
}

//메인 메뉴 선택 화면
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
			secondmenu();
			break;
		case '3':
			thirdmenu();
			break;
		case '4':
			fourthmenu();
			break;
		case '5':
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t     I C E  R I N K";
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  프로그램을 종료합니다.\n\n\n\n\n\n";
			break;
		}
	} while (ch != '5');
}

//이용시간 안내 화면
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
}
//이용시간 안내 화면2
void firstmenu_time() {
	cout << "\n\n\n\t\t\t\t\t\t\t이용 시간";
	cout << "\n\n\n\n\t\t\t\t 정기 휴무일 : 매월 1, 3주 월요일";
	cout << "\n\n\t\t\t\t 이용 가능한 시간 : 10:00~18:00";
	cout << "\n\n\n\t\t\t\t 정빙 시간표";
	cout << "\n\n\n\t\t\t\t 07:50~08:10 \t\t\t 17:50~18:10";
	cout << "\n\n\n\t\t\t\t 09:50~10:10 \t\t\t 19:50~20:10";
	cout << "\n\n\n\t\t\t\t 11:50~12:10 \t\t\t 21:50~22:10";
	cout << "\n\n\n\t\t\t\t 13:50~14:10 \t\t\t 23:50~00:10";
	cout << "\n\n\n\t\t\t\t 15:50~16:10";
}
//이용시간 안내 화면3
void firstmenu_money() {
	cout << "이전 페이지(z)";
	cout << "\n\n\n\t\t\t\t\t\t\t이용 가격";
	cout << "\n\n\n\t\t\t    경로 : 65세 이상/ 소인 : 14세 미만";
	cout << "\n\n\t\t\t    청소년 : 초등학생, 중학생, 고등학생";
	cout << "\n\n\n\t\t\t\t\t    ①입장료\t②스케이트화 대여료";
	cout << "\n\n\n\t\t\t\t\t\t소인/경로\t\t청소년\t\t    성인";
	cout << "\n\n\n\t\t\t\t  ①  \t\t  2000원\t\t3000원\t\t   4000원";
	cout << "\n\n\n\t\t\t\t  ②  \t\t  2000원\t\t3000원\t\t   4000원";
	cout << "\n\n\n\t\t\t\t ①+②\t\t  3000원\t\t5000원\t\t   7000원";
	cout << "\n\n\n\t\t\t    단체(20인 이상)\t\t\t전체 가격의 10% 추가 할인";

	char ch;
	cin >> ch;
	if (ch == 'z') {
		system("cls");
		mainpage();
	}
}




//매표 화면
void secondmenu() {
	char ch;
	cout << "이전 페이지(z)";
	secondmenu_ticket();
	cin >> ch;
	if (ch == 'z') {
		system("cls");
		mainpage();
	}
}
//매표 화면2
void secondmenu_ticket() {
	int ticket_a = 0, ticket_b = 0, ticket_c = 0, ticket_d = 0, ticket_e = 0, ticket_f = 0, ticket_g = 0, ticket_h = 0, ticket_i = 0;
	cout << "\n\n\n\t\t\t\t\t\t\t   매표";
	cout << "\n\n\n\t\t\t\t\t   ①입장료\t②스케이트화 대여료";
	cout << "\n\n\n\t\t\t\t\t소인/경로\t\t청소년\t\t  성인";
	cout << "\n\n\n\t\t\t  ①  \t\t ⓐ2000원\t\tⓑ3000원\tⓒ4000원";
	cout << "\n\n\n\t\t\t  ②  \t\t ⓓ2000원\t\tⓔ3000원\tⓕ4000원";
	cout << "\n\n\n\t\t\t ①+②\t\t ⓖ3000원\t\tⓗ5000원\tⓘ7000원";

	cout << "\n\n\n\n\n\n\t\t\t\t\tⓐ/ⓑ/ⓒ/ⓓ/ⓔ/ⓕ/ⓖ/ⓗ/ⓘ (띄어쓰기로 구분)\n\n\t\t\t\t\t\t";
	cin >> ticket_a >> ticket_b >> ticket_c >> ticket_d >> ticket_e >> ticket_f >> ticket_g >> ticket_h >> ticket_i;
	mainpage();
}




//단체 강습 화면
void thirdmenu() {
	char ch;
	cout << "이전 페이지(z)";
	thirdmenu_class();
	cin >> ch;
	if (ch == 'z') {
		system("cls");
		mainpage();
	}
}
//단체 강습 화면2
void thirdmenu_class() {
	int class_day = 0, class_time = 0;
	string class_major = "";
	cout << "\n\n\n\t\t\t\t\t\t\t단체 강습";
	cout << "\n\n\n\t\t\t\t\t①월, 목\t ②화, 금\t    ③토";
	cout << "\n\n\n\t\t\t\t       10시  14시\t 10시  14시\t  10시  14시";
	cout << "\n\n\n\t\t\t피겨\t\t70000원\t\t  70000원\t   40000원";
	cout << "\n\n\n\t\t\t스피드\t\t70000원\t\t  70000원\t   40000원";

	cout << "\n\n\n\n\n\n\t\t\t\t\t    요일/시간/종목 (띄어쓰기로 구분)\n\n\t\t\t\t\t\t";
	cin >> class_day >> class_time >> class_major;
	mainpage();
}




//대관 안내 화면
void fourthmenu() {
	char ch;
	cout << "이전 페이지(z)";
	fourthmenu_choice();
	cin >> ch;
	if (ch == 'z') {
		system("cls");
		mainpage();
	}
	else if (ch == '1') {
		system("cls");
		fourthmenu_choice1();
	}
	else if (ch == '2') {
		system("cls");
		fourthmenu_choice2();
	}
}
//대관 안내 화면2
void fourthmenu_choice() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t   아이스링크장 대관";
	cout << "\n\n\n\n\t\t\t\t\t\t   1. 대관 시간 / 가격";
	cout << "\n\n\t\t\t\t\t\t       2. 대관 신청";
}
//대관 안내 화면3
void fourthmenu_choice1() {
	cout << "이전 페이지(z)";
	cout << "\n\n\n\n\n\t\t\t\t\t\t   대관 신청 / 가격";
	cout << "\n\n\n\n\t\t\t\t    시간\t\t  평일\t\t    주말";
	cout << "\n\n\n\t\t\t\t06:00~08:00\t\t150000원\t  200000원";
	cout << "\n\n\n\t\t\t\t08:00~10:00\t\t200000원\t  250000원";
	cout << "\n\n\n\t\t\t\t18:00~20:00\t\t250000원\t  300000원";
	cout << "\n\n\n\t\t\t\t20:00~22:00\t\t200000원\t  250000원";
	cout << "\n\n\n\t\t\t\t22:00~00:00\t\t150000원\t  200000원";

	char ch;
	cin >> ch;
	if (ch == 'z') {
		system("cls");
		mainpage();
	}
}
//대관 안내 화면4
void fourthmenu_choice2() {
	print_cal();

	int lent_day = 0;
	int lent_time = 0;


	cout << "\n\n\n\n\n\n\t\t\t\t\t\t날짜 / 시간 (띄어쓰기로 구분)\n\n\t\t\t\t\t\t";
	cin >> lent_day >> lent_time;
	mainpage();
}




//달력 출력 화면
bool yoonyear(int y)
{
	if (y % 4 != 0) {
		return false;
	}
	if (y % 100 != 0) {
		return true;
	}
	if (y % 400 == 0) {
		return true;
	}
	return false;
}
int firstyear(int year)
{
	int basic = 4;

	for (int y = 1900; y >= year; y--)
	{
		basic += 6;
		if (yoonyear(y))
			basic += 6;
	}    basic %= 7;

	return basic;
}
int firstMonth(int year, int month)
{
	int basic = 0;
	for (int i = 1; i < month; i++)
		basic += endday[i - 1] % 7;
	if (month > 2 && yoonyear(year)) {
		basic++;
	}
	return basic % 7;
}
void printcalendar(int year, int month)
{
	int startday, enter;
	int space = (firstyear(year) + firstMonth(year, month)) % 7;
	enter = space;
	for (startday = 0; startday < space; startday++) {
		cout << "    ";
	}

	for (startday = 1; startday <= endday[month - 1]; startday++)
	{
		cout << " " << startday << " ";
		if (startday < 10)
			cout << " ";
		if (enter == 6) {
			cout << "\n\n\n";
			cout << "\t\t\t\t\t\t";
			enter = 0;
		}
		else
			enter++;
	}
}
void print_cal() {
	int year, month, i;
	char week[7][4] = { {"Sun"},{"Mon"},{"Tue"},{"Wed"},{"Thu"},{"Fri"},{"Sat"} };

	time_t curr_time;
	struct tm* curr_tm;
	curr_time = time(NULL);
	curr_tm = localtime(&curr_time);
	year = curr_tm->tm_year + 1900;
	month = curr_tm->tm_mon + 1;

	if (yoonyear(year))
		endday[1] = 29;
	else endday[1] = 28;

	cout << "\n\n\n\t\t\t\t\t\t\t" << curr_tm->tm_year + 1900 << "년 " << curr_tm->tm_mon + 1 << "월" << endl;
	cout << "\n\n";
	if (month >= 1 && month <= 12)
	{
		cout << "\t\t\t\t\t\t";
		for (i = 0; i < 7; i++) {
			cout << week[i] << " ";
		}
		cout << "\n\n";
	}
	cout << "\t\t\t\t\t\t";
	printcalendar(year, month);
}