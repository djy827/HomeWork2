#include "pch.cpp"
#include "pch.h"
#include "DateHandle.cpp"
#include "Constellation.cpp"
#include <windows.h>
#include <iostream>
#include <string>
#include <fstream>
#include "FateTeller.cpp"
#include "Outfile.cpp"
using namespace std;


int main()
{

	while (1) {
		FateTeller T;
		DateHandle N;
		Constellation M;
		outf O;
		int year1, month1, day1, year2, month2, day2;
		cout << "您的生日:" << endl;
		cout << "年：";
		cin >> year1;
		cout << "月：";
		cin >> month1;
		cout << "日：";
		cin >> day1;
		cout << "今天的日期:" << endl;
		cout << "年:";
		cin >> year2;
		cout << "月:";
		cin >> month2;
		cout << "日:";
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
		T.teller(M.ran, year2, month2, day1);

		//将c++输出写入txt文件
		O.keep1(year1, month1, day1, M.constell[M.ran - 1]);
		O.keep2(T.Love[T.three], T.Money[T.one], T.three, T.one, T.two);

		string ans;
		system("pause");
		cout << "exit?(y/n)";
		cin >> ans;
		if (ans == "y")
		{
			break;
		}
	}
	return 0;
}
