#include "pch.cpp"
#include"pch.h"
#include <windows.h>
#include <iostream>
using namespace std;
bool IsLeap(int year)
{
	return (year % 4 == 0 || year % 400 == 0) && (year % 100 != 0);
}
//DayInYear�ܸ��ݸ��������ڣ�������ڸ���ĵڼ��죬��������
int DayInYear(int year, int month, int day)
{
	//int _day = 0;
	int DAY[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (IsLeap(year))
		DAY[1] = 29;
	for (int i = 0; i < month - 1; ++i)
	{
		day += DAY[i];
	}
	return day;
}

int DaysBetween2Day(int year1, int  month1, int  day1, int year2, int month2, int day2)
{

	if (year1 == year2 && month1 == month2)
	{
		return day1 > day2 ? day1 - day2 : day2 - day1;

		//�������ͬ
	}
	else if (year1 == year2)
	{
		int d1, d2;
		d1 = DayInYear(year1, month1, day1);
		d2 = DayInYear(year2, month2, day2);
		return d1 > d2 ? d1 - d2 : d2 - d1;

		//���¶�����ͬ
	}
	else {
		//ȷ��year1��ݱ�year2��
		if (year1 > year2)
		{
			//swap��������ֵ�Ľ���
			swap(year1, year2);
			swap(month1, month2);
			swap(day1, day2);
		}
		int d1, d2, d3;
		if (IsLeap(year1))
			d1 = 366 - DayInYear(year1, month1, day1); //ȡ����������ڸ��껹���¶�����
		else
			d1 = 365 - DayInYear(year1, month1, day1);
		d2 = DayInYear(year2, month2, day2); //ȡ���ڵ����еĵڼ���
		//cout << "d1:" << d1 << ", d2:" << d2;

		d3 = 0;
		for (int year = year1 + 1; year < year2; year++)
		{
			if (IsLeap(year))
				d3 += 366;
			else
				d3 += 365;
		}
		return d1 + d2 + d3;
	}
}

int main()
{
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
	int a = DaysBetween2Day(year1, month1, day1, year2, month2, day2);
	cout << "���Ѿ����� " << a << " ��";
	system("pause");
	return 0;
}

