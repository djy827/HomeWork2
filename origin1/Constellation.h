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
				cout << "Ë®Æ¿×ù£¬";
			else
				cout << "Ä§ôÉ×ù£¬";
			break;
		case 2:
			if (d1 >= 19)
				cout << "Ë«Óã×ù£¬";
			else
				cout << "Ë®Æ¿×ù£¬";
			break;
		case 3:
			if (d1 >= 21)
				cout << "°×Ñò×ù£¬";
			else
				cout << "Ë«Óã×ù£¬";
			break;
		case 4:
			if (d1 >= 20)
				cout << "½ðÅ£×ù£¬";
			else
				cout << "°×Ñò×ù£¬";
			break;
		case 5:
			if (d1 >= 21)
				cout << "Ë«×Ó×ù£¬";
			else
				cout << "½ðÅ£×ù£¬";
			break;
		case 6:
			if (d1 >= 22)
				cout << "¾ÞÐ·×ù£¬";
			else
				cout << "Ë«×Ó×ù£¬";
			break;
		case 7:
			if (d1 >= 23)
				cout << "Ê¨×Ó×ù£¬";
			else
				cout << "¾ÞÐ·×ù£¬";
			break;
		case 8:
			if (d1 >= 23)
				cout << "´¦Å®×ù£¬";
			else
				cout << "Ê¨×Ó×ù£¬";
			break;
		case 9:
			if (d1 >= 23)
				cout << "ÌìÆ½×ù£¬";
			else
				cout << "´¦Å®×ù£¬";
			break;
		case 10:
			if (d1 >= 24)
				cout << "ÌìÐ«×ù£¬";
			else
				cout << "ÌìÆ½×ù£¬";
			break;
		case 11:
			if (d1 >= 23)
				cout << "ÉäÊÖ×ù£¬";
			else
				cout << "ÌìÐ«×ù£¬";
			break;
		case 12:
			if (d1 >= 20)
				cout << "Ä¦ôÉ×ù£¬";
			else
				cout << "ÉäÊÖ×ù£¬";
			break;
		};
	};
};
