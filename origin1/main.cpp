#include "pch.cpp"
#include "pch.h"
#include "Constellation.h"
#include "DateHandle.h"
#include <windows.h>
#include <iostream>

using namespace std;


int main()
{
	DateHandle N;
	Constellation M;
	int year1, month1, day1, year2, month2, day2;
	cout << "��������:" << endl;
	cout << "��";
	cin >> year1;
	cout << "��";
	cin >> month1;
	cout << "��";
	cin >> day1;
	cout << "���������:";
	cout << "��";
	cin >> year2;
	cout << "��";
	cin >> month2;
	cout << "��";
	cin >> day2;
	int a = N.DaysBetween2Day(year1, month1, day1, year2, month2, day2);
	int b = N.NextBirthday(year2, month1, day1, year2, month2, day2);
	if (a != 0)
	{
		cout << "���Ѿ����� " << a << " ��" << endl;
		cout << "������һ�����ջ��� " << b << " ��" << endl;
	}
	cout << "���������ǣ�";
	M.judge(month1, day1);
	double ranx = M.ran;
	srand(day2*month2*year2*ranx);
	cout << endl;
	cout << "�����յ����ƣ�" << endl;
	cout << "����ָ����" << rand() % 5 + 1<<"��"<<endl;
	cout << "����ָ����" << rand() % 5 + 1 << "��" << endl;
	cout << "����ָ����" <<rand() % 5 + 1 << "��" << endl;
		system("pause");
	return 0;
}
