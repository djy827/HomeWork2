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
	M.judge(month1, day1);
	cout << "���������:";
	cout << "��";
	cin >> year2;
	cout << "��";
	cin >> month2;
	cout << "��";
	cin >> day2;
	int a = N.DaysBetween2Day(year1, month1, day1, year2, month2, day2);
	int b = N.DaysBetween2Day(year2, month1, day1, year2, month2, day2);
	cout << "���Ѿ����� " << a << " ��";
	cout << "������һ�����ջ��� " << b << " ��";
	system("pause");
	return 0;
}
