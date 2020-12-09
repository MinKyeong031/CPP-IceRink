#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;

void cursor_view(char show);
void remove_scrollbar();
void start();
void firstmenu();
void mainpage();
void firstmenu_time();
void firstmenu_money();
void secondmenu();
void thirdmenu();
void fourthmenu();
void fifthmenu();
void fifthmenu_ticket();
void fifthmenu_class();
void fifthmenu_lent();

int endday[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
	//커서 깜빡임 X
	cursor_view(false);
	//스크롤바 없애기
	remove_scrollbar();
	//콘솔 창 크기, 타이틀
	system("mode con cols = 300 lines 50 | title Ice-Rink");
	//시작 로딩 함수
	start();

	return 0;
}

//커서 깜빡임 표시 X 함수
void cursor_view(char show) {
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

//스크롤 X 함수
void remove_scrollbar() {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO info;
	GetConsoleScreenBufferInfo(handle, &info);
	COORD new_size =
	{
		info.srWindow.Right - info.srWindow.Left + 1,
		info.srWindow.Bottom - info.srWindow.Top + 1
	};
	SetConsoleScreenBufferSize(handle, new_size);
}

//시작 로딩 화면
void start()
{
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t     I C E  R I N K";
	cout << "\n\n\n\n\t\t\t\t\t\t       2104 김민경";
	
	//1초 뒤 메인 메뉴 선택 화면
	Sleep(1000);

	system("cls");
	mainpage();
}

//메인 메뉴 선택 화면
void mainpage() {
	char ch;
	do
	{
		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\tMAIN MENU";
		cout << "\n\n\n\n\t\t\t\t\t\t   1. 이용 시간 / 가격";
		cout << "\n\n\t\t\t\t\t\t\t 2. 매표";
		cout << "\n\n\t\t\t\t\t\t       3. 단체 강습";
		cout << "\n\n\t\t\t\t\t\t\t 4. 대관";
		cout << "\n\n\t\t\t\t\t\t\t 5. 기록";
		cout << "\n\n\t\t\t\t\t\t\t 6. 종료";
		cout << "\n\n\n\n\t\t\t\t\t\t   선택한 메뉴(1~6) : ";
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
			fifthmenu();
			break;
		case '6':
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t     I C E  R I N K";
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  프로그램을 종료합니다.\n\n\n\n\n\n";
			break;
		}
	} while (ch != '6');
}

//이용시간 안내 화면
void firstmenu() {
	char ch;

	firstmenu_time();

	cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
	cin >> ch;

	switch (ch) {
	case 'a':
		system("cls");
		firstmenu_money();
		break;
	default:
		system("cls");
		mainpage();
	}
}
//이용시간 안내 화면2
void firstmenu_time() {
	cout << "이전 페이지(z), 다음페이지(a)";
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
	char ch;

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

	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
	cin >> ch;

	switch (ch) {
	case 'z':
		system("cls");
		mainpage();
		break;
	default:
		system("cls");
		firstmenu_time();
	}
}


class User {
public:
	string user_name;
};

class User2 :public User {
public:
	char choice;
	int ticket_a = 0, ticket_b = 0, ticket_c = 0, ticket_d = 0, ticket_e = 0, ticket_f = 0, ticket_g = 0, ticket_h = 0, ticket_i = 0, member = 0, sum = 0;
};
class User3 :public User {
public:
	int class_day = 0, class_time = 0, sum = 0;
	string class_major = "";
	string class_d;
};
class User4 :public User {
public:
	string user_name;
	int price = 0;
	int lent_day = 0, lent_time = 0;
};


//매표 화면
void secondmenu() {
	cout << "하나라도 0을 입력할 시 화면 취소";
	
	User2 user;

	cout << "\n\n\n\t\t\t\t\t\t\t   매표";
	cout << "\n\n\n\t\t\t\t\t   ①입장료\t②스케이트화 대여료";
	cout << "\n\n\n\t\t\t\t\t소인/경로\t\t청소년\t\t  성인";
	cout << "\n\n\n\t\t\t  ①  \t\t ⓐ2000원\t\tⓑ3000원\tⓒ4000원";
	cout << "\n\n\n\t\t\t  ②  \t\t ⓓ2000원\t\tⓔ3000원\tⓕ4000원";
	cout << "\n\n\n\t\t\t ①+②\t\t ⓖ3000원\t\tⓗ5000원\tⓘ7000원";

	cout << "\n\n\n\t\t\t\t\t\t 이름 >> ";
	cin >> user.user_name;

	cout << "\n\t\t\t\t\t\t ⓐ / ⓑ / ⓒ >> ";
	cin >> user.ticket_a >> user.ticket_b >> user.ticket_c;
	cout << "\n\t\t\t\t\t\t ⓓ / ⓔ / ⓕ >> ";
	cin >> user.ticket_d >> user.ticket_e >> user.ticket_f;
	cout << "\n\t\t\t\t\t\t ⓖ / ⓗ / ⓘ >> ";
	cin >> user.ticket_g >> user.ticket_h >> user.ticket_i;

	if (user.ticket_a == 0 && user.ticket_b == 0 && user.ticket_c == 0 && user.ticket_d == 0 && user.ticket_e == 0 && user.ticket_f == 0 && user.ticket_g == 0 && user.ticket_h == 0 && user.ticket_i == 0) {
		cout << "\n\t\t\t\t\t\t\t매표 실패";
	}
	else {
		//인원 수 구함
		user.member = user.ticket_a + user.ticket_b + user.ticket_c + user.ticket_d + user.ticket_e + user.ticket_f + user.ticket_g + user.ticket_h + user.ticket_i;
		//총 금액 구함
		user.sum = user.ticket_a * 2000 + user.ticket_b * 3000 + user.ticket_c * 4000 + user.ticket_d * 2000 + user.ticket_e * 3000 + user.ticket_f * 4000 + user.ticket_g * 3000 + user.ticket_h * 5000 + user.ticket_i * 7000;

		//20인 이상 할인 10%
		if (user.member >= 20) {
			user.sum *= 0.9;
		}

		//파일 입력
		ofstream secondtxt{ "secondmenu.txt", ios::app };
		secondtxt << user.user_name << "\t" << user.ticket_a << "\t" << user.ticket_b << "\t" << user.ticket_c << "\t" << user.ticket_d << "\t" << user.ticket_e
			<< "\t" << user.ticket_f << "\t" << user.ticket_g << "\t" << user.ticket_h << "\t" << user.ticket_i << "\t" << user.sum << endl;
		secondtxt.close();

		cout << "\n\t\t\t\t\t\t\t매표 성공";
	}
	Sleep(1000);

	system("cls");
	mainpage();
}


//단체 강습 화면
void thirdmenu() {
	cout << "하나라도 0을 입력할 시 화면 취소";

	User3 user;

	cout << "\n\n\n\t\t\t\t\t\t\t\t단체 강습";
	cout << "\n\n\n\t\t\t\t\t\t①월, 목\t ②화, 금\t    ③토";
	cout << "\n\n\n\t\t\t\t\t       10시  14시\t 10시  14시\t  10시  14시";
	cout << "\n\n\n\t\t\t\t피겨\t\t70000원\t\t  70000원\t   40000원";
	cout << "\n\n\n\t\t\t\t스피드\t\t70000원\t\t  70000원\t   40000원";

	cout << "\n\n\n\n\n\t\t\t\t\t\t 이름 >> ";
	cin >> user.user_name;

	cout << "\n\n\n\t\t\t\t\t\t 요일 / 시간 / 종목 >> ";
	cin >> user.class_day >> user.class_time >> user.class_major;

	if (user.class_day == 0 || user.class_time == 0 || user.class_major == "0") {
		cout << "\n\n\n\t\t\t\t\t\t\t신청 실패";
	}
	else {
		//강습 요일
		if (user.class_day == 1) {
			user.class_d = "월, 목";
		}
		else if (user.class_day == 2) {
			user.class_d = "화, 금";
		}
		else {
			user.class_d = "토";
		}

		//강습료
		if (user.class_day == 3) {
			user.sum = 40000;
		}
		else {
			user.sum = 70000;
		}

		//파일 입력
		ofstream thirdtxt{ "thirdmenu.txt", ios::app };
		thirdtxt << user.user_name << "\t" << user.class_d << "\t" << user.class_time << "\t" << user.class_major << "\t" << user.sum << endl;
		thirdtxt.close();

		cout << "\n\n\n\t\t\t\t\t\t\t신청 성공";
	}
	Sleep(1000);

	system("cls");
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
	int space = (firstyear(year) + firstMonth(year, month-1)) % 7;
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
			cout << "\n";
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

	cout << "\n\t\t\t\t\t\t\t" << year << "년 " << month << "월\n" << endl;
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




//대관 안내 화면
void fourthmenu() {
	cout << "모두 0을 입력할 시 화면 취소";

	User4 user;

	//달력 출력
	print_cal();
	
	cout << "\n\n\t\t\t\t\t\t    시간\t\t  가격";
	cout << "\n\n\t\t\t\t\t\t06:00~08:00\t\t150000원";
	cout << "\n\n\t\t\t\t\t\t08:00~10:00\t\t200000원";
	cout << "\n\n\t\t\t\t\t\t18:00~20:00\t\t250000원";
	cout << "\n\n\t\t\t\t\t\t20:00~22:00\t\t200000원";
	cout << "\n\n\t\t\t\t\t\t22:00~00:00\t\t150000원";

	cout << "\n\n\n\t\t\t\t\t\t 이름 / 날짜 / 시간 >> ";
	cin >> user.user_name >> user.lent_day >> user.lent_time;

	if (user.lent_day == 0 && user.lent_time == 0) {
		cout << "\n\t\t\t\t\t\t\t대관 실패";
	}
	else {
		bool flag = true;

		string line;
		int offset;

		time_t curr_time;
		struct tm* curr_tm;
		curr_time = time(NULL);
		curr_tm = localtime(&curr_time);

		string date = to_string(curr_tm->tm_year + 1900) + "." + to_string(curr_tm->tm_mon + 1) + "." + to_string(user.lent_day);
		string search1 = date;
		string search2 = to_string(user.lent_time);

		//대관료
		if (user.lent_time == 6 || user.lent_time == 22) {
			user.price = 150000;
		}
		else if (user.lent_time == 8 || user.lent_time == 20) {
			user.price = 200000;
		}
		else {
			user.price = 250000;
		}

		//대관이 이미 완료된 상태일 때
		ifstream fourthtxt_i;
		fourthtxt_i.open("fourthmenu.txt");

		while (!fourthtxt_i.eof())
		{
			getline(fourthtxt_i, line);
			if ((offset = line.find(search1, 0)) != string::npos) {
				if ((offset = line.find(search2, 0)) != string::npos) {
					flag = false;
				}
			}
		}

		//선택한 날짜가 이미 지났다면
		if (curr_tm->tm_mday >= lent_day) {
			flag = false;
		}

		if (flag) {
			//파일 입력
			ofstream fourthtxt_o{ "fourthmenu.txt", ios::app };
			fourthtxt_o << user.user_name << "\t\t" << date << "\t" << user.lent_time << "\t" << user.price << endl;
			fourthtxt_o.close();

			cout << "\n\n\n\t\t\t\t\t\t\t  대관 성공";
		}
		else {
			cout << "\n\n\n\t\t\t\t\t\t\t  대관 불가";
		}
		fourthtxt_i.close();
	}
	Sleep(1000);

	system("cls");
	mainpage();
}




//기록 화면
void fifthmenu() {
	char ch;

	cout << "이전 페이지(z)";
	cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t       1. 매표 기록";
	cout << "\n\n\t\t\t\t\t\t       2. 강습 기록";
	cout << "\n\n\t\t\t\t\t\t       3. 대관 기록";

	cout << "\n\n\n\n\t\t\t\t\t\t   선택한 메뉴(1~3) : ";
	cin >> ch;

	system("cls");
	switch (ch)
	{
	case '1':
		system("cls");
		fifthmenu_ticket();
		break;
	case '2':
		system("cls");
		fifthmenu_class();
		break;
	case '3':
		system("cls");
		fifthmenu_lent();
		break;
	default:
		system("cls");
		mainpage();
		break;
	}
}
//매표 기록 화면
void fifthmenu_ticket() {
	string name;
	char choice;

	cout << "이전 페이지(z), 다시(a)";
	cout << "\n\t\t\t\t\t   ①입장료\t②스케이트화 대여료";
	cout << "\n\n\t\t\t\t\t소인/경로\t\t청소년\t\t  성인";
	cout << "\n\n\t\t\t  ①  \t\t ⓐ2000원\t\tⓑ3000원\tⓒ4000원";
	cout << "\n\n\t\t\t  ②  \t\t ⓓ2000원\t\tⓔ3000원\tⓕ4000원";
	cout << "\n\n\t\t\t ①+②\t\t ⓖ3000원\t\tⓗ5000원\tⓘ7000원";

	cout << "\n\n =======================================================================================================================\n";
	cout << "\n\t\t\t\t\t\t   이름 입력 >> ";
	cin >> name;

	if (name == "z") {
		system("cls");
		fifthmenu();
	}
	else {
		//이름에 해당하는 내용 출력
		//매표 기록
		cout << "\n =======================================================================================================================\n";
		cout << "\n\t\t이름\tⓐ\tⓑ\tⓒ\tⓓ\tⓔ\tⓕ\tⓖ\tⓗ\tⓘ\t총 금액\n\n";

		string line;
		int offset;

		//파일 출력
		ifstream secondtxt_i;
		secondtxt_i.open("secondmenu.txt");

		while (!secondtxt_i.eof())
		{
			getline(secondtxt_i, line);
			if ((offset = line.find(name, 0)) != string::npos) {
				cout << "\t\t" << line << "\n\n";
			}
		}
		secondtxt_i.close();
	}

	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
	cin >> choice;

	switch (choice) {
	case 'a':
		system("cls");
		fifthmenu_ticket();
		break;
	default:
		system("cls");
		fifthmenu();
	}
}
//강습 기록 화면
void fifthmenu_class() {
	string name;
	char choice;

	cout << "이전 페이지(z), 다시(a)";

	cout << "\n\n\n =======================================================================================================================\n";
	cout << "\n\t\t\t\t\t\t   이름 입력 >> ";
	cin >> name;

	if (name == "z") {
		system("cls");
		fifthmenu();
	}
	else {
		//이름에 해당하는 내용 출력
		//강습 기록
		cout << "\n =======================================================================================================================\n";
		cout << "\n\t\t\t\t\t이름\t요일\t시간\t종목\t금액\n\n";

		string line;
		int offset;

		//파일 출력
		ifstream thirdtxt_i;
		thirdtxt_i.open("thirdmenu.txt");

		while (!thirdtxt_i.eof())
		{
			getline(thirdtxt_i, line);
			if ((offset = line.find(name, 0)) != string::npos) {
				cout << "\t\t\t\t\t" << line << "\n\n";
			}
		}
		thirdtxt_i.close();
	}

	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
	cin >> choice;

	switch (choice) {
	case 'a':
		system("cls");
		fifthmenu_class();
		break;
	default:
		system("cls");
		fifthmenu();
	}
}
//대관 기록 화면
void fifthmenu_lent() {
	string name;
	char choice;

	cout << "이전 페이지(z), 다시(a)";

	cout << "\n\n\n =======================================================================================================================\n";
	cout << "\n\t\t\t\t\t\t   이름 입력 >> ";
	cin >> name;

	if (name == "z") {
		system("cls");
		fifthmenu();
	}
	else {
		//이름에 해당하는 내용 출력
		//대관 기록
		cout << "\n =======================================================================================================================\n";
		cout << "\n\t\t\t\t\t이름\t\t요일\t\t시간\t금액\n\n";

		string line;
		int offset;

		//파일 출력
		ifstream fourthtxt_i;
		fourthtxt_i.open("fourthmenu.txt");

		while (!fourthtxt_i.eof())
		{
			getline(fourthtxt_i, line);
			if ((offset = line.find(name, 0)) != string::npos) {
				cout << "\t\t\t\t\t" << line << "\n\n";
			}
		}
		fourthtxt_i.close();
	}

	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
	cin >> choice;

	switch (choice) {
	case 'a':
		system("cls");
		fifthmenu_lent();
		break;
	default:
		system("cls");
		fifthmenu();
	}
}