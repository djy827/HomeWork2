#pragma once
#include "pch.h"
#include "pch.cpp"
#include <iostream>
using namespace std;
class Constellation
{
public:
	int ran;
	string constell[12] = { "°×Ñò×ù","½ðÅ£×ù","Ë«×Ó×ù","¾ÞÐ·×ù","Ê¨×Ó×ù","´¦Å®×ù","Ìì³Ó×ù","ÌìÐ«×ù","ÉäÊÖ×ù","Ä¦ôÉ×ù","Ë®Æ¿×ù","Ë«Óã×ù" };
	void judge(int m1, int d1)
	{
		switch (m1)
		{
		case 1:
			if (d1 >= 20)
			{
				cout << "Ë®Æ¿×ù";
				ran = 11;
			}
			else
			{
				ran = 10;
				cout << "Ä§ôÉ×ù";
			}
			break;
		case 2:
			if (d1 >= 19)
			{
				ran = 12;
				cout << "Ë«Óã×ù";
			}
			else
			{
				ran = 11;
				cout << "Ë®Æ¿×ù";
			}
			break;
		case 3:
			if (d1 >= 21)
			{
				ran = 1;
				cout << "°×Ñò×ù";
			}
			else
			{
				ran = 12;
				cout << "Ë«Óã×ù";
			}
			break;
		case 4:
			if (d1 >= 20)
			{
				ran = 2;
				cout << "½ðÅ£×ù";
			}
			else
			{
				ran =1;
				cout << "°×Ñò×ù";
			}
			break;
		case 5:
			if (d1 >= 21)
			{
				ran = 3;
				cout << "Ë«×Ó×ù";
			}
			else
			{
				ran = 2;
				cout << "½ðÅ£×ù";
			}
			break;
		case 6:
			if (d1 >= 22)
			{
				ran = 4;
				cout << "¾ÞÐ·×ù";
			}
			else
			{
				ran = 3;
				cout << "Ë«×Ó×ù";
			}
			break;
		case 7:
			if (d1 >= 23)
			{
				ran = 5;
				cout << "Ê¨×Ó×ù";
			}
			else
			{
				ran = 4;
				cout << "¾ÞÐ·×ù";
			}
			break;
		case 8:
			if (d1 >= 23)
			{
				ran = 6;
				cout << "´¦Å®×ù";
			}
			else
			{
				ran = 5;
				cout << "Ê¨×Ó×ù";
			}
			break;
		case 9:
			if (d1 >= 23)
			{
				ran = 7;
				cout << "ÌìÆ½×ù";
			}
			else
			{
				ran = 6;
				cout << "´¦Å®×ù";
			}
			break;
		case 10:
			if (d1 >= 24)
			{
				ran = 8;
				cout << "ÌìÐ«×ù";
			}
			else
			{
				ran = 7;
				cout << "ÌìÆ½×ù";
			}
			break;
		case 11:
			if (d1 >= 23)
			{
				ran = 9;
				cout << "ÉäÊÖ×ù";
			}
			else
			{
				ran = 8;
				cout << "ÌìÐ«×ù";
			}
			break;
		case 12:
			if (d1 >= 20)
			{
				ran = 10;
				cout << "Ä¦ôÉ×ù";
			}
			else
			{
				ran = 9;
				cout << "ÉäÊÖ×ù";
			}
			break;
		};
	};
};
