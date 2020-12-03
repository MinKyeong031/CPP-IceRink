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

//Ŀ�� ������ ǥ�� X �Լ�
void CursorView(char show) {
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
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
		cout << "\n\n\t\t\t\t\t\t\t 5. ����";
		cout << "\n\n\n\n\t\t\t\t\t\t   ������ �޴�(1~5) : ";
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
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  ���α׷��� �����մϴ�.\n\n\n\n\n\n";
			break;
		}
	} while (ch != '5');
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

	char ch;
	cin >> ch;
	if (ch == 'z') {
		system("cls");
		mainpage();
	}
}




//��ǥ ȭ��
void secondmenu() {
	char ch;
	cout << "���� ������(z)";
	secondmenu_ticket();
	cin >> ch;
	if (ch == 'z') {
		system("cls");
		mainpage();
	}
}
//��ǥ ȭ��2
void secondmenu_ticket() {
	int ticket_a = 0, ticket_b = 0, ticket_c = 0, ticket_d = 0, ticket_e = 0, ticket_f = 0, ticket_g = 0, ticket_h = 0, ticket_i = 0;
	cout << "\n\n\n\t\t\t\t\t\t\t   ��ǥ";
	cout << "\n\n\n\t\t\t\t\t   �������\t�轺����Ʈȭ �뿩��";
	cout << "\n\n\n\t\t\t\t\t����/���\t\tû�ҳ�\t\t  ����";
	cout << "\n\n\n\t\t\t  ��  \t\t ��2000��\t\t��3000��\t��4000��";
	cout << "\n\n\n\t\t\t  ��  \t\t ��2000��\t\t��3000��\t��4000��";
	cout << "\n\n\n\t\t\t ��+��\t\t ��3000��\t\t��5000��\t��7000��";

	cout << "\n\n\n\n\n\n\t\t\t\t\t��/��/��/��/��/��/��/��/�� (����� ����)\n\n\t\t\t\t\t\t";
	cin >> ticket_a >> ticket_b >> ticket_c >> ticket_d >> ticket_e >> ticket_f >> ticket_g >> ticket_h >> ticket_i;
	mainpage();
}




//��ü ���� ȭ��
void thirdmenu() {
	char ch;
	cout << "���� ������(z)";
	thirdmenu_class();
	cin >> ch;
	if (ch == 'z') {
		system("cls");
		mainpage();
	}
}
//��ü ���� ȭ��2
void thirdmenu_class() {
	int class_day = 0, class_time = 0;
	string class_major = "";
	cout << "\n\n\n\t\t\t\t\t\t\t��ü ����";
	cout << "\n\n\n\t\t\t\t\t���, ��\t ��ȭ, ��\t    ����";
	cout << "\n\n\n\t\t\t\t       10��  14��\t 10��  14��\t  10��  14��";
	cout << "\n\n\n\t\t\t�ǰ�\t\t70000��\t\t  70000��\t   40000��";
	cout << "\n\n\n\t\t\t���ǵ�\t\t70000��\t\t  70000��\t   40000��";

	cout << "\n\n\n\n\n\n\t\t\t\t\t    ����/�ð�/���� (����� ����)\n\n\t\t\t\t\t\t";
	cin >> class_day >> class_time >> class_major;
	mainpage();
}




//��� �ȳ� ȭ��
void fourthmenu() {
	char ch;
	cout << "���� ������(z)";
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
//��� �ȳ� ȭ��2
void fourthmenu_choice() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t   ���̽���ũ�� ���";
	cout << "\n\n\n\n\t\t\t\t\t\t   1. ��� �ð� / ����";
	cout << "\n\n\t\t\t\t\t\t       2. ��� ��û";
}
//��� �ȳ� ȭ��3
void fourthmenu_choice1() {
	cout << "���� ������(z)";
	cout << "\n\n\n\n\n\t\t\t\t\t\t   ��� ��û / ����";
	cout << "\n\n\n\n\t\t\t\t    �ð�\t\t  ����\t\t    �ָ�";
	cout << "\n\n\n\t\t\t\t06:00~08:00\t\t150000��\t  200000��";
	cout << "\n\n\n\t\t\t\t08:00~10:00\t\t200000��\t  250000��";
	cout << "\n\n\n\t\t\t\t18:00~20:00\t\t250000��\t  300000��";
	cout << "\n\n\n\t\t\t\t20:00~22:00\t\t200000��\t  250000��";
	cout << "\n\n\n\t\t\t\t22:00~00:00\t\t150000��\t  200000��";

	char ch;
	cin >> ch;
	if (ch == 'z') {
		system("cls");
		mainpage();
	}
}
//��� �ȳ� ȭ��4
void fourthmenu_choice2() {
	print_cal();

	int lent_day = 0;
	int lent_time = 0;


	cout << "\n\n\n\n\n\n\t\t\t\t\t\t��¥ / �ð� (����� ����)\n\n\t\t\t\t\t\t";
	cin >> lent_day >> lent_time;
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

	cout << "\n\n\n\t\t\t\t\t\t\t" << curr_tm->tm_year + 1900 << "�� " << curr_tm->tm_mon + 1 << "��" << endl;
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