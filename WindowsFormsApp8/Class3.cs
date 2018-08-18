using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WindowsFormsApp8
{
    class YunShi
    { 
        public YunShi()
        { }
        int one, two, three;
        public int XY(int day)
        {
            Random rd1 = new Random(day);
          one = rd1.Next(1, 5);
            return one;

        }
        public int TH(int day)
        {
            Random rd2 = new Random(day+1);
            two= rd2.Next(1, 5);
            return two;

        }
        public int CF(int day)
        {
            Random rd3 = new Random(day + 1);
            three = rd3.Next(1, 5);
            return three;

        }
         public string LZS()
        {
            string[] Love = new string[] { "乱七八糟的桃花运，少碰为妙，惹来一身腥就不好了。",
                           "容易对另一半产生不信任感，彼此的误会较多，你应多用理性平和的态度与另一半沟通唷！" ,
                           "感情丰富的一天，无论是否有实质进展，自己幻想一下倒也无妨！",
                           "恋爱运小佳，不妨去热闹的地方约会，例如：逛街看电影。",
                           "今日机缘一级棒！恋爱中人快约心上人去郊外踏青赏月吧！单身者千万别呆在家理，多与人接触就有机会与情人邂逅喔！" };
            return Love[two];
        }
        public string MZS()
        {
            string[] Money = new string[]{ "人情往来、通讯、生活费等方面，会花掉大笔钱财。经济状况捉襟见肘，付出与收获难成正比。",
                         "容易有金钱损失的一天，不要乱买东西，免得买到瑕疵品。" ,
                         "在大笔金钱运转的前夕，多搜集资讯，勤劳做点功课，偷懒下草率做的决定是挺危险的唷。 ",
                         "一直困扰你的与金钱有关的问题现在有了新的突破点，你将从中看到希望。",
                         "得财不费力，很适合动脑想想哪里可以赚钱，趁今日构思赚钱计划表！ " };
            return Money[three];
        }


    }
}
