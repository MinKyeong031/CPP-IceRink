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
	cout << "\n\n\n\n\t\t\t\t\t\t       2104 ��ΰ�";
	Sleep(100);
	mainpage();
}

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
			break;
		case '3':
			break;
		case '4':
			break;
		case '5':
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t     I C E  R I N K";
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  ���α׷��� �����մϴ�.\n\n\n\n\n\n";
			break;
		default:cout << "\a";
		}
		cin.ignore();
		cin.get();
	} while (ch != '5');
}

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
	cin.ignore();
	cin.get();
}

void firstmenu_time() {
	cout << "\n\n\n\t\t\t\t\t\t\t�̿� �ð�";
	cout << "\n\n\n\n\t\t\t ���� �޹��� : �ſ� 1, 3�� ������";
	cout << "\n\n\t\t\t �̿� ������ �ð� : 10:00~18:00";
	cout << "\n\n\t\t\t ���� �ð�ǥ";
	cout << "\n\n\n\t\t\t 07:50~08:10 \t\t\t 17:50~18:10";
	cout << "\n\n\n\t\t\t 09:50~10:10 \t\t\t 19:50~20:10";
	cout << "\n\n\n\t\t\t 11:50~12:10 \t\t\t 21:50~22:10";
	cout << "\n\n\n\t\t\t 13:50~14:10 \t\t\t 23:50~00:10";
	cout << "\n\n\n\t\t\t 15:50~16:10";
}

void firstmenu_money() {
	cout << "���� ������(z)";
	cout << "\n\n\n\t\t\t\t\t\t\t�̿� ����";
	cout << "\n\n\n\n\t\t\t ��� : 65�� �̻�/ ���� : 14�� �̸�";
	cout << "\n\n\t\t\t û�ҳ� : �ʵ��л�, ���л�, ����л�";
	cout << "\n\n\n\t\t\t\t\t\t\t����/���";

	if (getch() == 'z') {
		system("cls");
		mainpage();
	}
	cin.ignore();
	cin.get();
}