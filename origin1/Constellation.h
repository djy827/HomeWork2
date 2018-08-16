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
				cout << "Ë®Æ¿×ù";
				ran = 1;
			}
			else
			{
				ran = 2;
				cout << "Ä§ôÉ×ù";
			}
			break;
		case 2:
			if (d1 >= 19)
			{
				ran = 3;
				cout << "Ë«Óã×ù";
			}
			else
			{
				ran = 1;
				cout << "Ë®Æ¿×ù";
			}
			break;
		case 3:
			if (d1 >= 21)
			{
				ran = 5;
				cout << "°×Ñò×ù";
			}
			else
			{
				ran = 3;
				cout << "Ë«Óã×ù";
			}
			break;
		case 4:
			if (d1 >= 20)
			{
				ran = 7;
				cout << "½ðÅ£×ù";
			}
			else
			{
				ran = 5;
				cout << "°×Ñò×ù";
			}
			break;
		case 5:
			if (d1 >= 21)
			{
				ran = 9;
				cout << "Ë«×Ó×ù";
			}
			else
			{
				ran = 7;
				cout << "½ðÅ£×ù";
			}
			break;
		case 6:
			if (d1 >= 22)
			{
				ran = 11;
				cout << "¾ÞÐ·×ù";
			}
			else
			{
				ran = 9;
				cout << "Ë«×Ó×ù";
			}
			break;
		case 7:
			if (d1 >= 23)
			{
				ran = 13;
				cout << "Ê¨×Ó×ù";
			}
			else
			{
				ran = 11;
				cout << "¾ÞÐ·×ù";
			}
			break;
		case 8:
			if (d1 >= 23)
			{
				ran = 15;
				cout << "´¦Å®×ù";
			}
			else
			{
				ran = 13;
				cout << "Ê¨×Ó×ù";
			}
			break;
		case 9:
			if (d1 >= 23)
			{
				ran = 17;
				cout << "ÌìÆ½×ù";
			}
			else
			{
				ran = 15;
				cout << "´¦Å®×ù";
			}
			break;
		case 10:
			if (d1 >= 24)
			{
				ran = 19;
				cout << "ÌìÐ«×ù";
			}
			else
			{
				ran = 17;
				cout << "ÌìÆ½×ù";
			}
			break;
		case 11:
			if (d1 >= 23)
			{
				ran = 18;
				cout << "ÉäÊÖ×ù";
			}
			else
			{
				ran = 19;
				cout << "ÌìÐ«×ù";
			}
			break;
		case 12:
			if (d1 >= 20)
			{
				ran = 1;
				cout << "Ä¦ôÉ×ù";
			}
			else
			{
				ran = 18;
				cout << "ÉäÊÖ×ù";
			}
			break;
		};
	};
};
