#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
//FateTeller 用于随机本日的星座运势，且每个星座运势相同
class FateTeller
{
public :
	int one, two, three;
	string Love[5] = { "乱七八糟的桃花运，少碰为妙，惹来一身腥就不好了。",
						   "容易对另一半产生不信任感，彼此的误会较多，你应多用理性平和的态度与另一半沟通唷！" ,
						   "感情丰富的一天，无论是否有实质进展，自己幻想一下倒也无妨！",
						   "恋爱运小佳，不妨去热闹的地方约会，例如：逛街看电影。",
						   "今日机缘一级棒！恋爱中人快约心上人去郊外踏青赏月吧！单身者千万别呆在家理，多与人接触就有机会与情人邂逅喔！" };
	string Money[7] = { "人情往来、通讯、生活费等方面，会花掉大笔钱财。经济状况捉襟见肘，付出与收获难成正比。",
					 "容易有金钱损失的一天，不要乱买东西，免得买到瑕疵品。" ,
					 "在大笔金钱运转的前夕，多搜集资讯，勤劳做点功课，偷懒下草率做的决定是挺危险的唷。 ",
					 "一直困扰你的与金钱有关的问题现在有了新的突破点，你将从中看到希望。上班族有提出加薪的好机会，在个人及家庭理财上可听听专家的建议，好好发一笔。",
					 "得财不费力，很适合动脑想想哪里可以赚钱，趁今日构思赚钱计划表！ " };
	void teller(int ran,int day,int month,int year)
	{
		srand(day*month*year*ran);
		one = rand() % 5;
		two = rand() % 5;
		three = rand() % 5;
		cout << endl;
		cout << "您今日的运势：" << endl;
		cout << "幸运指数：" << one + 1 << "星" << endl;
		cout << "财运指数：" << two + 1 << "星" << endl;
		cout << "财运分析: " << Money[two] << endl;
		cout << "爱情指数：" << three + 1 << "星" << endl;
		cout << "爱情分析: " << Love[three] << endl;
	}
};


