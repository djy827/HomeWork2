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
	cout << "您的生日:" << endl;
	cout << "年";
	cin >> year1;
	cout << "月";
	cin >> month1;
	cout << "日";
	cin >> day1;
	cout << "今天的日期:";
	cout << "年";
	cin >> year2;
	cout << "月";
	cin >> month2;
	cout << "日";
	cin >> day2;
	int a = N.DaysBetween2Day(year1, month1, day1, year2, month2, day2);
	int b = N.NextBirthday(year2, month1, day1, year2, month2, day2);
	if (a != 0)
	{
		cout << "您已经出生 " << a << " 天" << endl;
		cout << "距离下一个生日还有 " << b << " 天" << endl;
	}
	cout << "您的星座是：";
	M.judge(month1, day1);
	double ranx = M.ran;
	srand(day2*month2*year2*ranx);
	cout << endl;
	cout << "您今日的运势：" << endl;
	cout << "幸运指数：" << rand() % 5 + 1<<"星"<<endl;
	cout << "财运指数：" << rand() % 5 + 1 << "星" << endl;
	cout << "爱情指数：" <<rand() % 5 + 1 << "星" << endl;
		system("pause");
	return 0;
}
