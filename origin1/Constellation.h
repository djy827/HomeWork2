#pragma once
#include "pch.h"
#include "pch.cpp"
#include <iostream>
using namespace std;
class Constellation
{
public:
	int ran;
	void judge(int m1, int d1)
	{
		switch (m1)
		{
		case 1:
			if (d1 >= 20)
			{
				cout << "ˮƿ��";
				ran = 1;
			}
			else
			{
				ran = 2;
				cout << "ħ����";
			}
			break;
		case 2:
			if (d1 >= 19)
			{
				ran = 3;
				cout << "˫����";
			}
			else
			{
				ran = 1;
				cout << "ˮƿ��";
			}
			break;
		case 3:
			if (d1 >= 21)
			{
				ran = 5;
				cout << "������";
			}
			else
			{
				ran = 3;
				cout << "˫����";
			}
			break;
		case 4:
			if (d1 >= 20)
			{
				ran = 7;
				cout << "��ţ��";
			}
			else
			{
				ran = 5;
				cout << "������";
			}
			break;
		case 5:
			if (d1 >= 21)
			{
				ran = 9;
				cout << "˫����";
			}
			else
			{
				ran = 7;
				cout << "��ţ��";
			}
			break;
		case 6:
			if (d1 >= 22)
			{
				ran = 11;
				cout << "��з��";
			}
			else
			{
				ran = 9;
				cout << "˫����";
			}
			break;
		case 7:
			if (d1 >= 23)
			{
				ran = 13;
				cout << "ʨ����";
			}
			else
			{
				ran = 11;
				cout << "��з��";
			}
			break;
		case 8:
			if (d1 >= 23)
			{
				ran = 15;
				cout << "��Ů��";
			}
			else
			{
				ran = 13;
				cout << "ʨ����";
			}
			break;
		case 9:
			if (d1 >= 23)
			{
				ran = 17;
				cout << "��ƽ��";
			}
			else
			{
				ran = 15;
				cout << "��Ů��";
			}
			break;
		case 10:
			if (d1 >= 24)
			{
				ran = 19;
				cout << "��Ы��";
			}
			else
			{
				ran = 17;
				cout << "��ƽ��";
			}
			break;
		case 11:
			if (d1 >= 23)
			{
				ran = 18;
				cout << "������";
			}
			else
			{
				ran = 19;
				cout << "��Ы��";
			}
			break;
		case 12:
			if (d1 >= 20)
			{
				ran = 1;
				cout << "Ħ����";
			}
			else
			{
				ran = 18;
				cout << "������";
			}
			break;
		};
	};
};
