#pragma once
#include "pch.h"
#include "pch.cpp"
#include <iostream>
using namespace std;
class Constellation
{
public:
	void judge(int m1, int d1)
	{
		switch (m1)
		{
		case 1:
			if (d1 >= 20)
				cout << "ˮƿ����";
			else
				cout << "ħ������";
			break;
		case 2:
			if (d1 >= 19)
				cout << "˫������";
			else
				cout << "ˮƿ����";
			break;
		case 3:
			if (d1 >= 21)
				cout << "��������";
			else
				cout << "˫������";
			break;
		case 4:
			if (d1 >= 20)
				cout << "��ţ����";
			else
				cout << "��������";
			break;
		case 5:
			if (d1 >= 21)
				cout << "˫������";
			else
				cout << "��ţ����";
			break;
		case 6:
			if (d1 >= 22)
				cout << "��з����";
			else
				cout << "˫������";
			break;
		case 7:
			if (d1 >= 23)
				cout << "ʨ������";
			else
				cout << "��з����";
			break;
		case 8:
			if (d1 >= 23)
				cout << "��Ů����";
			else
				cout << "ʨ������";
			break;
		case 9:
			if (d1 >= 23)
				cout << "��ƽ����";
			else
				cout << "��Ů����";
			break;
		case 10:
			if (d1 >= 24)
				cout << "��Ы����";
			else
				cout << "��ƽ����";
			break;
		case 11:
			if (d1 >= 23)
				cout << "��������";
			else
				cout << "��Ы����";
			break;
		case 12:
			if (d1 >= 20)
				cout << "Ħ������";
			else
				cout << "��������";
			break;
		};
	};
};
