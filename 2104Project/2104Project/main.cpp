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
	//Ŀ�� ������ X
	cursor_view(false);
	//��ũ�ѹ� ���ֱ�
	remove_scrollbar();
	//�ܼ� â ũ��, Ÿ��Ʋ
	system("mode con cols = 300 lines 50 | title Ice-Rink");
	//���� �ε� �Լ�
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
	
	//1�� �� ���� �޴� ���� ȭ��
	Sleep(1000);

	system("cls");
	mainpage();
}

//���� �޴� ���� ȭ��
void mainpage() {
	char ch;
	do
	{
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
		}
	} while (ch != '6');
}

//�̿�ð� �ȳ� ȭ��
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
//�̿�ð� �ȳ� ȭ��2
void firstmenu_time() {
	cout << "���� ������(z), ����������(a)";
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
	char ch;

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


//��ǥ ȭ��
void secondmenu() {
	cout << "�ϳ��� 0�� �Է��� �� ȭ�� ���";
	
	User2 user;

	cout << "\n\n\n\t\t\t\t\t\t\t   ��ǥ";
	cout << "\n\n\n\t\t\t\t\t   �������\t�轺����Ʈȭ �뿩��";
	cout << "\n\n\n\t\t\t\t\t����/���\t\tû�ҳ�\t\t  ����";
	cout << "\n\n\n\t\t\t  ��  \t\t ��2000��\t\t��3000��\t��4000��";
	cout << "\n\n\n\t\t\t  ��  \t\t ��2000��\t\t��3000��\t��4000��";
	cout << "\n\n\n\t\t\t ��+��\t\t ��3000��\t\t��5000��\t��7000��";

	cout << "\n\n\n\t\t\t\t\t\t �̸� >> ";
	cin >> user.user_name;

	cout << "\n\t\t\t\t\t\t �� / �� / �� >> ";
	cin >> user.ticket_a >> user.ticket_b >> user.ticket_c;
	cout << "\n\t\t\t\t\t\t �� / �� / �� >> ";
	cin >> user.ticket_d >> user.ticket_e >> user.ticket_f;
	cout << "\n\t\t\t\t\t\t �� / �� / �� >> ";
	cin >> user.ticket_g >> user.ticket_h >> user.ticket_i;

	if (user.ticket_a == 0 && user.ticket_b == 0 && user.ticket_c == 0 && user.ticket_d == 0 && user.ticket_e == 0 && user.ticket_f == 0 && user.ticket_g == 0 && user.ticket_h == 0 && user.ticket_i == 0) {
		cout << "\n\t\t\t\t\t\t\t��ǥ ����";
	}
	else {
		//�ο� �� ����
		user.member = user.ticket_a + user.ticket_b + user.ticket_c + user.ticket_d + user.ticket_e + user.ticket_f + user.ticket_g + user.ticket_h + user.ticket_i;
		//�� �ݾ� ����
		user.sum = user.ticket_a * 2000 + user.ticket_b * 3000 + user.ticket_c * 4000 + user.ticket_d * 2000 + user.ticket_e * 3000 + user.ticket_f * 4000 + user.ticket_g * 3000 + user.ticket_h * 5000 + user.ticket_i * 7000;

		//20�� �̻� ���� 10%
		if (user.member >= 20) {
			user.sum *= 0.9;
		}

		//���� �Է�
		ofstream secondtxt{ "secondmenu.txt", ios::app };
		secondtxt << user.user_name << "\t" << user.ticket_a << "\t" << user.ticket_b << "\t" << user.ticket_c << "\t" << user.ticket_d << "\t" << user.ticket_e
			<< "\t" << user.ticket_f << "\t" << user.ticket_g << "\t" << user.ticket_h << "\t" << user.ticket_i << "\t" << user.sum << endl;
		secondtxt.close();

		cout << "\n\t\t\t\t\t\t\t��ǥ ����";
	}
	Sleep(1000);

	system("cls");
	mainpage();
}


//��ü ���� ȭ��
void thirdmenu() {
	cout << "�ϳ��� 0�� �Է��� �� ȭ�� ���";

	User3 user;

	cout << "\n\n\n\t\t\t\t\t\t\t\t��ü ����";
	cout << "\n\n\n\t\t\t\t\t\t���, ��\t ��ȭ, ��\t    ����";
	cout << "\n\n\n\t\t\t\t\t       10��  14��\t 10��  14��\t  10��  14��";
	cout << "\n\n\n\t\t\t\t�ǰ�\t\t70000��\t\t  70000��\t   40000��";
	cout << "\n\n\n\t\t\t\t���ǵ�\t\t70000��\t\t  70000��\t   40000��";

	cout << "\n\n\n\n\n\t\t\t\t\t\t �̸� >> ";
	cin >> user.user_name;

	cout << "\n\n\n\t\t\t\t\t\t ���� / �ð� / ���� >> ";
	cin >> user.class_day >> user.class_time >> user.class_major;

	if (user.class_day == 0 || user.class_time == 0 || user.class_major == "0") {
		cout << "\n\n\n\t\t\t\t\t\t\t��û ����";
	}
	else {
		//���� ����
		if (user.class_day == 1) {
			user.class_d = "��, ��";
		}
		else if (user.class_day == 2) {
			user.class_d = "ȭ, ��";
		}
		else {
			user.class_d = "��";
		}

		//������
		if (user.class_day == 3) {
			user.sum = 40000;
		}
		else {
			user.sum = 70000;
		}

		//���� �Է�
		ofstream thirdtxt{ "thirdmenu.txt", ios::app };
		thirdtxt << user.user_name << "\t" << user.class_d << "\t" << user.class_time << "\t" << user.class_major << "\t" << user.sum << endl;
		thirdtxt.close();

		cout << "\n\n\n\t\t\t\t\t\t\t��û ����";
	}
	Sleep(1000);

	system("cls");
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
	cout << "��� 0�� �Է��� �� ȭ�� ���";

	User4 user;

	//�޷� ���
	print_cal();
	
	cout << "\n\n\t\t\t\t\t\t    �ð�\t\t  ����";
	cout << "\n\n\t\t\t\t\t\t06:00~08:00\t\t150000��";
	cout << "\n\n\t\t\t\t\t\t08:00~10:00\t\t200000��";
	cout << "\n\n\t\t\t\t\t\t18:00~20:00\t\t250000��";
	cout << "\n\n\t\t\t\t\t\t20:00~22:00\t\t200000��";
	cout << "\n\n\t\t\t\t\t\t22:00~00:00\t\t150000��";

	cout << "\n\n\n\t\t\t\t\t\t �̸� / ��¥ / �ð� >> ";
	cin >> user.user_name >> user.lent_day >> user.lent_time;

	if (user.lent_day == 0 && user.lent_time == 0) {
		cout << "\n\t\t\t\t\t\t\t��� ����";
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

		//�����
		if (user.lent_time == 6 || user.lent_time == 22) {
			user.price = 150000;
		}
		else if (user.lent_time == 8 || user.lent_time == 20) {
			user.price = 200000;
		}
		else {
			user.price = 250000;
		}

		//����� �̹� �Ϸ�� ������ ��
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

		//������ ��¥�� �̹� �����ٸ�
		if (curr_tm->tm_mday >= lent_day) {
			flag = false;
		}

		if (flag) {
			//���� �Է�
			ofstream fourthtxt_o{ "fourthmenu.txt", ios::app };
			fourthtxt_o << user.user_name << "\t\t" << date << "\t" << user.lent_time << "\t" << user.price << endl;
			fourthtxt_o.close();

			cout << "\n\n\n\t\t\t\t\t\t\t  ��� ����";
		}
		else {
			cout << "\n\n\n\t\t\t\t\t\t\t  ��� �Ұ�";
		}
		fourthtxt_i.close();
	}
	Sleep(1000);

	system("cls");
	mainpage();
}




//��� ȭ��
void fifthmenu() {
	char ch;

	cout << "���� ������(z)";
	cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t       1. ��ǥ ���";
	cout << "\n\n\t\t\t\t\t\t       2. ���� ���";
	cout << "\n\n\t\t\t\t\t\t       3. ��� ���";

	cout << "\n\n\n\n\t\t\t\t\t\t   ������ �޴�(1~3) : ";
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
//��ǥ ��� ȭ��
void fifthmenu_ticket() {
	string name;
	char choice;

	cout << "���� ������(z), �ٽ�(a)";
	cout << "\n\t\t\t\t\t   �������\t�轺����Ʈȭ �뿩��";
	cout << "\n\n\t\t\t\t\t����/���\t\tû�ҳ�\t\t  ����";
	cout << "\n\n\t\t\t  ��  \t\t ��2000��\t\t��3000��\t��4000��";
	cout << "\n\n\t\t\t  ��  \t\t ��2000��\t\t��3000��\t��4000��";
	cout << "\n\n\t\t\t ��+��\t\t ��3000��\t\t��5000��\t��7000��";

	cout << "\n\n =======================================================================================================================\n";
	cout << "\n\t\t\t\t\t\t   �̸� �Է� >> ";
	cin >> name;

	if (name == "z") {
		system("cls");
		fifthmenu();
	}
	else {
		//�̸��� �ش��ϴ� ���� ���
		//��ǥ ���
		cout << "\n =======================================================================================================================\n";
		cout << "\n\t\t�̸�\t��\t��\t��\t��\t��\t��\t��\t��\t��\t�� �ݾ�\n\n";

		string line;
		int offset;

		//���� ���
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
//���� ��� ȭ��
void fifthmenu_class() {
	string name;
	char choice;

	cout << "���� ������(z), �ٽ�(a)";

	cout << "\n\n\n =======================================================================================================================\n";
	cout << "\n\t\t\t\t\t\t   �̸� �Է� >> ";
	cin >> name;

	if (name == "z") {
		system("cls");
		fifthmenu();
	}
	else {
		//�̸��� �ش��ϴ� ���� ���
		//���� ���
		cout << "\n =======================================================================================================================\n";
		cout << "\n\t\t\t\t\t�̸�\t����\t�ð�\t����\t�ݾ�\n\n";

		string line;
		int offset;

		//���� ���
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
//��� ��� ȭ��
void fifthmenu_lent() {
	string name;
	char choice;

	cout << "���� ������(z), �ٽ�(a)";

	cout << "\n\n\n =======================================================================================================================\n";
	cout << "\n\t\t\t\t\t\t   �̸� �Է� >> ";
	cin >> name;

	if (name == "z") {
		system("cls");
		fifthmenu();
	}
	else {
		//�̸��� �ش��ϴ� ���� ���
		//��� ���
		cout << "\n =======================================================================================================================\n";
		cout << "\n\t\t\t\t\t�̸�\t\t����\t\t�ð�\t�ݾ�\n\n";

		string line;
		int offset;

		//���� ���
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