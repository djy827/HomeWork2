#include "pch.h"
#include <fstream>
#include <string>
using namespace std;
//outf���ڽ�������浽ͬ�ļ��е�data.txt�ڣ��������
class outf
{
public :
	void keep1(int year1, int month1, int day1,string M ) 
	{
		ofstream outfile;
		outfile.open("data.txt", ios::binary | ios::app | ios::in | ios::out);
		outfile << "���գ�" << year1 << " . " << month1 << "." << day1 << endl;
		outfile << "������" << endl;
		outfile << M;
	}
	void keep2(string Love,string Money,int three, int one, int two)
	{
		ofstream outfile;
		outfile.open("data.txt", ios::binary | ios::app | ios::in | ios::out);
		outfile << endl;
		outfile << " ��������:" << endl << "����ָ����" << one + 1 << endl << "����ָ��" << two + 1 << endl << "���˷���" << Money[two] << endl;
		outfile << "����ָ����" << three + 1 << endl << " �������: " << Love[three] << endl;
	}
};
