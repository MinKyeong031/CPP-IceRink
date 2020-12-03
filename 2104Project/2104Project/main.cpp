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

int endday[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
	cursor_view(false);
	remove_scrollbar();
	system("mode con cols = 300 lines 50 | title Ice-Rink");
	start();
	return 0;
}

//Ŀ�� ������ ǥ�� X �Լ�
void cursor_view(char show) {
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

//��ũ�� X �Լ�
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

//���� �ε� ȭ��
void start()
{
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t     I C E  R I N K";
	cout << "\n\n\n\n\t\t\t\t\t\t       2104 ��ΰ�";
	Sleep(2000);
	mainpage();
}

//���� �޴� ���� ȭ��
void mainpage() {
	char ch;
	do
	{
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\t\t\t\tMAIN MENU";
		cout << "\n\n\n\n\t\t\t\t\t\t   1. �̿� �ð� / ����";
		cout << "\n\n\t\t\t\t\t\t\t 2. ��ǥ";
		cout << "\n\n\t\t\t\t\t\t       3. ��ü ����";
		cout << "\n\n\t\t\t\t\t\t\t 4. ���";
		cout << "\n\n\t\t\t\t\t\t\t 5. ���";
		cout << "\n\n\t\t\t\t\t\t\t 6. ����";
		cout << "\n\n\n\n\t\t\t\t\t\t   ������ �޴�(1~6) : ";
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
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  ���α׷��� �����մϴ�.\n\n\n\n\n\n";
			break;
		default:
			system("cls");
			mainpage();
			break;
		}
	} while (ch != '6');
}

//�̿�ð� �ȳ� ȭ��
void firstmenu() {
	char ch;
	cout << "���� ������(z), ����������(a)";
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
	else {
		system("cls");
		mainpage();
	}
}
//�̿�ð� �ȳ� ȭ��2
void firstmenu_time() {
	cout << "\n\n\n\t\t\t\t\t\t\t�̿� �ð�";
	cout << "\n\n\n\n\t\t\t\t ���� �޹��� : �ſ� 1, 3�� ������";
	cout << "\n\n\t\t\t\t �̿� ������ �ð� : 10:00~18:00";
	cout << "\n\n\n\t\t\t\t ���� �ð�ǥ";
	cout << "\n\n\n\t\t\t\t 07:50~08:10 \t\t\t 17:50~18:10";
	cout << "\n\n\n\t\t\t\t 09:50~10:10 \t\t\t 19:50~20:10";
	cout << "\n\n\n\t\t\t\t 11:50~12:10 \t\t\t 21:50~22:10";
	cout << "\n\n\n\t\t\t\t 13:50~14:10 \t\t\t 23:50~00:10";
	cout << "\n\n\n\t\t\t\t 15:50~16:10";
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
}
//�̿�ð� �ȳ� ȭ��3
void firstmenu_money() {
	cout << "���� ������(z)";
	cout << "\n\n\n\t\t\t\t\t\t\t�̿� ����";
	cout << "\n\n\n\t\t\t    ��� : 65�� �̻�/ ���� : 14�� �̸�";
	cout << "\n\n\t\t\t    û�ҳ� : �ʵ��л�, ���л�, ����л�";
	cout << "\n\n\n\t\t\t\t\t    �������\t�轺����Ʈȭ �뿩��";
	cout << "\n\n\n\t\t\t\t\t\t����/���\t\tû�ҳ�\t\t    ����";
	cout << "\n\n\n\t\t\t\t  ��  \t\t  2000��\t\t3000��\t\t   4000��";
	cout << "\n\n\n\t\t\t\t  ��  \t\t  2000��\t\t3000��\t\t   4000��";
	cout << "\n\n\n\t\t\t\t ��+��\t\t  3000��\t\t5000��\t\t   7000��";
	cout << "\n\n\n\t\t\t    ��ü(20�� �̻�)\t\t\t��ü ������ 10% �߰� ����";
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
	char ch;
	cin >> ch;
	if (ch == 'z') {
		system("cls");
		mainpage();
	}
	else {
		system("cls");
		mainpage();
	}
}




//��ǥ ȭ��
void secondmenu() {
	string user_name;
	char choice;
	int ticket_a = 0, ticket_b = 0, ticket_c = 0, ticket_d = 0, ticket_e = 0, ticket_f = 0, ticket_g = 0, ticket_h = 0, ticket_i = 0, member = 0, sum = 0;
	cout << "\n\n\n\t\t\t\t\t\t\t   ��ǥ";
	cout << "\n\n\n\t\t\t\t\t   �������\t�轺����Ʈȭ �뿩��";
	cout << "\n\n\n\t\t\t\t\t����/���\t\tû�ҳ�\t\t  ����";
	cout << "\n\n\n\t\t\t  ��  \t\t ��2000��\t\t��3000��\t��4000��";
	cout << "\n\n\n\t\t\t  ��  \t\t ��2000��\t\t��3000��\t��4000��";
	cout << "\n\n\n\t\t\t ��+��\t\t ��3000��\t\t��5000��\t��7000��";
	cout << "\n\n\n\t\t\t\t\t\t �̸� >> ";
	cin >> user_name;
	cout << "\n\n\n\t\t\t\t\t\t �� / �� / �� >> ";
	cin >> ticket_a >> ticket_b >> ticket_c;
	cout << "\n\t\t\t\t\t\t �� / �� / �� >> ";
	cin >> ticket_d >> ticket_e >> ticket_f;
	cout << "\n\t\t\t\t\t\t �� / �� / �� >> ";
	cin >> ticket_g >> ticket_h >> ticket_i;
	if (user_name == "0" && ticket_a == 0 && ticket_b == 0 && ticket_c == 0 && ticket_d == 0 && ticket_e == 0 && ticket_f == 0 && ticket_g == 0 && ticket_h == 0 && ticket_i == 0) {
		system("cls");
		mainpage();
	}
	else {
		member = ticket_a + ticket_b + ticket_c + ticket_d + ticket_e + ticket_f + ticket_g + ticket_h + ticket_i;
		sum = ticket_a * 2000 + ticket_b * 3000 + ticket_c * 4000 + ticket_d * 2000 + ticket_e * 3000 + ticket_f * 4000 + ticket_g * 3000 + ticket_h * 5000 + ticket_i * 7000;
		if (member >= 20) {
			sum *= 0.9;
		}
		ofstream fout{ "secondmenu.txt" };
		fout << user_name << setw(10) << ticket_a << setw(10) << ticket_b << setw(10) << ticket_c << setw(10) << ticket_d << setw(10) << ticket_e 
			<< setw(10) << ticket_f << setw(10) << ticket_g << setw(10) << ticket_h << setw(10) <<  ticket_i << setw(10) << sum << endl;
		fout.close();
		Sleep(1000);
	}
}




//��ü ���� ȭ��
void thirdmenu() {
	cout << "�ϳ��� 0�� �Է��� �� ȭ�� ���";
	int class_day = 0, class_time = 0, sum = 0;
	string class_major = "", user_name;
	cout << "\n\n\n\t\t\t\t\t\t\t\t��ü ����";
	cout << "\n\n\n\t\t\t\t\t\t���, ��\t ��ȭ, ��\t    ����";
	cout << "\n\n\n\t\t\t\t\t       10��  14��\t 10��  14��\t  10��  14��";
	cout << "\n\n\n\t\t\t\t�ǰ�\t\t70000��\t\t  70000��\t   40000��";
	cout << "\n\n\n\t\t\t\t���ǵ�\t\t70000��\t\t  70000��\t   40000��";

	cout << "\n\n\n\n\n\t\t\t\t\t\t �̸� >> ";
	cin >> user_name;
	cout << "\n\n\n\t\t\t\t\t\t ���� / �ð� / ���� >> ";
	cin >> class_day >> class_time >> class_major;
	if (user_name == "0" || class_day == 0 || class_time == 0 || class_major == "0") {
		system("cls");
		mainpage();
	}
	else {
		string class_d;
		if (class_day == 1) {
			class_d = "��, ��";
		}
		else if (class_day == 2) {
			class_d = "ȭ, ��";
		}
		else {
			class_d = "��";
		}
		if (class_day == 3) {
			sum = 40000;
		}
		else {
			sum = 70000;
		}
		ofstream fout{ "thirdmenu.txt" };
		fout << user_name << setw(10) << class_d << setw(10) << class_time << setw(10) << class_major << setw(10) << sum << endl;
		fout.close();
		Sleep(1000);
	}
	mainpage();
}




//�޷� ��� ȭ��
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

	cout << "\n\t\t\t\t\t\t\t" << year << "�� " << month << "��\n" << endl;
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




//��� �ȳ� ȭ��
void fourthmenu() {
	int offset;
	int line, price = 0;
	string search;
	cout << "��� 0�� �Է��� �� ȭ�� ���";
	print_cal();
	cout << "\n\t\t\t\t\t\t    �ð�\t\t  ����";
	cout << "\n\n\t\t\t\t\t\t06:00~08:00\t\t150000��";
	cout << "\n\n\t\t\t\t\t\t08:00~10:00\t\t200000��";
	cout << "\n\n\t\t\t\t\t\t18:00~20:00\t\t250000��";
	cout << "\n\n\t\t\t\t\t\t20:00~22:00\t\t200000��";
	cout << "\n\n\t\t\t\t\t\t22:00~00:00\t\t150000��";
	int lent_day = 0, lent_time = 0, sum = 0;
	string user_name;

	cout << "\n\n\n\t\t\t\t\t\t �̸� / ��¥ / �ð� >> ";
	cin >> user_name >> lent_day >> lent_time;
	if (user_name == "0"&& lent_day == 0 && lent_time == 0) {
		system("cls");
		mainpage();
	}
	else {
		//TODO �̹� ��� �Ϸ�����̸� ��� �Ұ����ϰ� ������ ��.
		time_t curr_time;
		struct tm* curr_tm;
		curr_time = time(NULL);
		curr_tm = localtime(&curr_time);

		string date = to_string(curr_tm->tm_year + 1900) + "." + to_string(curr_tm->tm_mon + 1) + "." + to_string(lent_day);

		if (lent_time == 6 || lent_time == 22) {
			price = 150000;
		}
		else if (lent_time == 8 || lent_time == 20) {
			price = 200000;
		}
		else {
			price = 250000;
		}

		ofstream fout{ "fourthmenu.txt" };
		fout << user_name << setw(10) << date << setw(10) << lent_time << setw(10) << price << endl;
		fout.close();

		//search = date + "          " + to_string(lent_time);
		Sleep(1000);
	}
	mainpage();
}




//��� ȭ��
void fifthmenu() {
	string name;
	char choice;
	cout << "���� ������(z), �ٽ�(a)";
	cout << "\n\n\n\n\n\t\t\t\t\t\t   �̸� �Է� >> ";
	cin >> name;
	if (name == "z") {
		system("cls");
		mainpage();
	}
	else {
		//�̸��� �ش��ϴ� ���� ���
		//��ǥ ���
		cout << "\n\n\t\t\t\t\t  =================== ��ǥ ��� ===================";
		//���� ���
		cout << "\n\n\t\t\t\t\t  =================== ���� ��� ===================";
		//��� ���
		cout << "\n\n\t\t\t\t\t  =================== ��� ��� ===================";
	}
	cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
	cin >> choice;
	if (choice == 'z') {
		system("cls");
		mainpage();
	}
	else if (choice == 'a') {
		system("cls");
		fifthmenu();
	}
	else {
		system("cls");
		mainpage();
	}
}