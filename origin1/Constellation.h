#pragma once
#include "pch.h"
#include "pch.cpp"
#include <iostream>
using namespace std;
class Constellation
{
public:
	int ran;
	string constell[12] = { "������","��ţ��","˫����","��з��","ʨ����","��Ů��","�����","��Ы��","������","Ħ����","ˮƿ��","˫����" };
	void judge(int m1, int d1)
	{
		switch (m1)
		{
		case 1:
			if (d1 >= 20)
			{
				cout << "ˮƿ��";
				ran = 11;
			}
			else
			{
				ran = 10;
				cout << "ħ����";
			}
			break;
		case 2:
			if (d1 >= 19)
			{
				ran = 12;
				cout << "˫����";
			}
			else
			{
				ran = 11;
				cout << "ˮƿ��";
			}
			break;
		case 3:
			if (d1 >= 21)
			{
				ran = 1;
				cout << "������";
			}
			else
			{
				ran = 12;
				cout << "˫����";
			}
			break;
		case 4:
			if (d1 >= 20)
			{
				ran = 2;
				cout << "��ţ��";
			}
			else
			{
				ran =1;
				cout << "������";
			}
			break;
		case 5:
			if (d1 >= 21)
			{
				ran = 3;
				cout << "˫����";
			}
			else
			{
				ran = 2;
				cout << "��ţ��";
			}
			break;
		case 6:
			if (d1 >= 22)
			{
				ran = 4;
				cout << "��з��";
			}
			else
			{
				ran = 3;
				cout << "˫����";
			}
			break;
		case 7:
			if (d1 >= 23)
			{
				ran = 5;
				cout << "ʨ����";
			}
			else
			{
				ran = 4;
				cout << "��з��";
			}
			break;
		case 8:
			if (d1 >= 23)
			{
				ran = 6;
				cout << "��Ů��";
			}
			else
			{
				ran = 5;
				cout << "ʨ����";
			}
			break;
		case 9:
			if (d1 >= 23)
			{
				ran = 7;
				cout << "��ƽ��";
			}
			else
			{
				ran = 6;
				cout << "��Ů��";
			}
			break;
		case 10:
			if (d1 >= 24)
			{
				ran = 8;
				cout << "��Ы��";
			}
			else
			{
				ran = 7;
				cout << "��ƽ��";
			}
			break;
		case 11:
			if (d1 >= 23)
			{
				ran = 9;
				cout << "������";
			}
			else
			{
				ran = 8;
				cout << "��Ы��";
			}
			break;
		case 12:
			if (d1 >= 20)
			{
				ran = 10;
				cout << "Ħ����";
			}
			else
			{
				ran = 9;
				cout << "������";
			}
			break;
		};
	};
};
