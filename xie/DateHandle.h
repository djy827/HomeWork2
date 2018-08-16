#pragma once
#include "pch.h"
#include "pch.cpp"
#include <iostream>
using namespace std;
class DateHandle
{
public:
	bool IsLeap(int year)
	{
		return (year % 4 == 0 || year % 400 == 0) && (year % 100 != 0);
	}
	//DayInYear能根据给定的日期，求出它在该年的第几天，代码如下
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

			//如果年相同
		}
		else if (year1 == year2)
		{
			if (month1 > month2)
				year1 = year1 + 1;
			int d1, d2;
			d1 = DayInYear(year1, month1, day1);
			d2 = DayInYear(year2, month2, day2);
			return d1 > d2 ? d1 - d2 : d2 - d1;

			//年月都不相同
		}
		else {
			//确保year1年份比year2早
			if (year1 > year2)
			{
				//swap进行两个值的交换
				swap(year1, year2);
				swap(month1, month2);
				swap(day1, day2);
			}
			int d1, d2, d3;
			if (IsLeap(year1))
				d1 = 366 - DayInYear(year1, month1, day1); //取得这个日期在该年还于下多少天
			else
				d1 = 365 - DayInYear(year1, month1, day1);
			d2 = DayInYear(year2, month2, day2); //取得在当年中的第几天
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
};

