#include "pch.cpp"
#include "pch.h"
#include "Constellation.h"
#include "DateHandle.h"
#include <windows.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main()
{
	while (1) {
		string  Love[5] = { "���߰�����һ��ˣ�����Ϊ�����һ���ȾͲ����ˡ�",
						   "���׶���һ����������θУ��˴˵����϶࣬��Ӧ��������ƽ�͵�̬������һ�빵ͨࡣ�" ,
						   "����ḻ��һ�죬�����Ƿ���ʵ�ʽ�չ���Լ�����һ�µ�Ҳ�޷���",
						   "������С�ѣ�����ȥ���ֵĵط�Լ�ᣬ���磺��ֿ���Ӱ��",
						   "���ջ�Եһ�������������˿�Լ������ȥ����̤�����°ɣ�������ǧ�����ڼ��������˽Ӵ����л�������������ร�" };
		string Money[5] = { "����������ͨѶ������ѵȷ��棬�Ứ�����Ǯ�ơ�����״��׽����⣬�������ջ��ѳ����ȡ�",
						 "�����н�Ǯ��ʧ��һ�죬��Ҫ�������������覴�Ʒ��" ,
						 "�ڴ�ʽ�Ǯ��ת��ǰϦ�����Ѽ���Ѷ���������㹦�Σ�͵���²������ľ�����ͦΣ�յ�ࡡ� ",
						 "һֱ����������Ǯ�йص��������������µ�ͻ�Ƶ㣬�㽫���п���ϣ�����ϰ����������н�ĺû��ᣬ�ڸ��˼���ͥ����Ͽ�����ר�ҵĽ��飬�ú÷�һ�ʡ�",
						 "�òƲ����������ʺ϶��������������׬Ǯ���ý��չ�˼׬Ǯ�ƻ��� " };
		DateHandle N;
		Constellation M;
		int year1, month1, day1, year2, month2, day2;
		cout << "��������:" << endl;
		cout << "�꣺";
		cin >> year1;
		cout << "�£�";
		cin >> month1;
		cout << "�գ�";
		cin >> day1;
		cout << "���������:"<<endl;
		cout << "��:";
		cin >> year2;
		cout << "��:";
		cin >> month2;
		cout << "��:";
		cin >> day2;
		int a = N.DaysBetween2Day(year1, month1, day1, year2, month2, day2);
		int b = N.NextBirthday(year2, month1, day1, year2, month2, day2);
		if (a != 0)
		{
			cout << "���Ѿ����� " << a << " ��" << endl;
			cout << "������һ�����ջ��� " << b << " ��" << endl;
		}
		cout << "���������ǣ�";
		M.judge(month1, day1);
		int ranx = M.ran;
		srand(day2*month2*year2*ranx);
		int one, two, three;
		one = rand() % 5;
		two = rand() % 5;
		three = rand() % 5;
		cout << endl;
		cout << "�����յ����ƣ�" << endl;
		cout << "����ָ����" << one + 1 << "��" << endl;
		cout << "����ָ����" << two + 1 << "��" << endl;
		cout << "���˷���: " << Money[two] << endl;
		cout << "����ָ����" << three + 1 << "��" << endl;
		cout << "�������: " << Love[three] << endl;
		ofstream outfile;
		outfile.open("data.txt", ios::binary | ios::app | ios::in | ios::out);
		outfile << "���գ�" << year1 << " . " << month1 << "." << day1<<endl;
		outfile << "������" << endl;
		outfile << M.constell[M.ran-1];
		outfile << endl;
		outfile << " ��������:" << endl<<"����ָ����" << one + 1 << endl << "����ָ��" << two + 1 << endl << "���˷���" << Money[two] << endl;
		outfile << "����ָ����" << three+1 <<endl<< " �������: " << Love[three] << endl;
		string ans;
		system("pause");
		cout << "exit?(y/n)";
		cin >> ans;
		if(ans=="y")
		{
			break;
		}
	}
	return 0;
}
