#include "pch.h"
#include <fstream>
#include <string>
using namespace std;
//outf用于将结果保存到同文件夹的data.txt内，并不清除
class outf
{
public :
	void keep1(int year1, int month1, int day1,string M ) 
	{
		ofstream outfile;
		outfile.open("data.txt", ios::binary | ios::app | ios::in | ios::out);
		outfile << "生日：" << year1 << " . " << month1 << "." << day1 << endl;
		outfile << "星座：" << endl;
		outfile << M;
	}
	void keep2(string Love,string Money,int three, int one, int two)
	{
		ofstream outfile;
		outfile.open("data.txt", ios::binary | ios::app | ios::in | ios::out);
		outfile << endl;
		outfile << " 今日运势:" << endl << "幸运指数：" << one + 1 << endl << "财运指数" << two + 1 << endl << "财运分析" << Money[two] << endl;
		outfile << "爱情指数：" << three + 1 << endl << " 爱情分析: " << Love[three] << endl;
	}
};
