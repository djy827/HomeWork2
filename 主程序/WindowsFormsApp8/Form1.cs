using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp8
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        { int year = Convert.ToInt16(textBox1.Text);
            int month = Convert.ToInt16(textBox2.Text);
            int day=Convert.ToInt16(textBox3.Text);
            int[] DAY = new int[] { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

            /*星座*/

            string [,]constells=new string[12,2] 
    {
		          { "摩羯座","水瓶座" },//一月
	              { "水瓶座","双鱼座" },//二月
	               { "双鱼座","白羊座" },//三月
	              { "白羊座","金牛座" },//四月
	              { "金牛座","双子座" },//五月
	                 { "双子座","巨蟹座" },//六月
	               { "巨蟹座","狮子座" },//七月
	                { "狮子座","处女座" },//八月
	                 { "处女座","天秤座" },//九月
	                { "天秤座","天蝎座" },//十月
	                { "天蝎座","射手座" },//十一月
	             { "射手座","摩羯座" },//十一月
	};
	//每个月有两个星座，数组中的值对应每个月中两个星座的分割日期
	int[] constell_dates=new int[]{ 20,19,21,20,21,22,23,23,23,24,23,22 };


            /*第一维输出月份，第二维由生日的日期/每个月对应的分割日期（constell_dates）,
            为0就表示一个月中的前一个星座，否则为后一个星座，
            比如生日为5月6号，则对应输出 constells[4][0] 对应金牛座*/
            textBox4.Text = constells[month - 1,
                day / constell_dates[month]];
            int year2 = 2018, month2 = 8, day2 = 16;

            if (year == year2 && month == month2)
            {

                textBox5.Text = Convert.ToString(System.Math.Abs(day - day2));
                //如果年相同
            }
            else if (year== year2)
            {
                if (month> month2)
                    year = year + 1;
                int d1, d2;
               
                //int []DAY=new int[]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
                bool IsLeap=( year % 4 == 0 || year % 400 == 0)&&(year % 100 != 0);
                if (IsLeap)

                    DAY[1] = 29;
                for (int i = 0; i < month - 1; ++i)
                {
                    day += DAY[i];
                }
                d1 = day;

                IsLeap = (year2 % 4 == 0 || year2 % 400 == 0) && (year2 % 100 != 0);
                if (IsLeap)

                    DAY[1] = 29;
                for (int i = 0; i < month2 - 1; ++i)
                {
                    day2+= DAY[i];
                }
                d2 = day2;
                textBox5.Text = Convert.ToString(System.Math.Abs(d1-d2));

                //年月都不相同
            }
            else
            {
                //确保year1年份比year2早
                if (year> year2)
                {
                    textBox5.Text = "您还未出生";
                    
                }
                int d1, d2, d3;
                bool IsLeap1 = (year % 4 == 0 || year % 400 == 0) && (year % 100 != 0);
                //int[] DAY = new int[] { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
                if (IsLeap1)
                {
                  
                        DAY[1] = 29;
                    for (int i = 0; i < month - 1; ++i)
                    {
                        day += DAY[i];
                    }
                    d1 = 366 - day;
                }
                else
                    d1 = 365 - day;
                //int[] DAY = new int[] { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
                bool IsLeap2 = (year2 % 4 == 0 || year2 % 400 == 0) && (year2 % 100 != 0);
                if (IsLeap2)
                    DAY[1] = 29;
                for (int i = 0; i < month2 - 1; ++i)
                {
                    day2 += DAY[i];
                }
                d2 = day2;

                d3 = 0;
                for (int year3 = year + 1; year3 < year2; year3++)
                {
                    bool IsLeap3= (year3 % 4 == 0 || year3 % 400 == 0) && (year3 % 100 != 0);
                    if (IsLeap3)
                        d3 += 366;
                    else
                        d3 += 365;
                }
                textBox5.Text = Convert.ToString(d1 + d2 + d3);
            }








            if (month == month2 && day > day2)
            {
                int d1, d2;
                bool IsLeap = (year % 4 == 0 || year % 400 == 0) && (year % 100 != 0);
                if (IsLeap)
                    DAY[1] = 29;
                for (int i = 0; i < month - 1; ++i)
                {
                    day += DAY[i];
                }
                d1 = day;
                bool IsLeap2 = (year2 % 4 == 0 || year2 % 400 == 0) && (year2 % 100 != 0);
                if (IsLeap2)
                    DAY[1] = 29;
                for (int i = 0; i < month2 - 1; ++i)
                {
                    day2 += DAY[i];
                }
                d2 = day2;
                textBox6.Text = Convert.ToString(d1 - d2);
            }
            else if (month == month2 && day == day2)
            {

                int d1, d2;
                bool IsLeap2 = (year2 % 4 == 0 || year2 % 400 == 0) && (year2 % 100 != 0);
                if (IsLeap2)
                {
                    DAY[1] = 29;
                    for (int i = 0; i < month2 - 1; ++i)
                    {
                        day2 += DAY[i];
                    }
                    d2 = 366 - day2;
                }


                else
                {
                    if (IsLeap2)
                    
                        DAY[1] = 29;
                        for (int i = 0; i < month2 - 1; ++i)
                        {
                            day2 += DAY[i];
                        }
                        d2 = 365 - day2;
                    
                    bool IsLeap = (year % 4 == 0 || year % 400 == 0) && (year % 100 != 0);
                    if (IsLeap)
                         DAY[1] = 29;
                        for (int i = 0; i < month - 1; ++i)
                        {
                            day += DAY[i];
                        }
                        d1 = day;
                        textBox6.Text = Convert.ToString(d1 + d2);
                    
                }
            }

            else if (month == month2 && day < day2)
            {
                int d1, d2;
                bool IsLeap2 = (year2 % 4 == 0 || year2 % 400 == 0) && (year2 % 100 != 0);
                if (IsLeap2)
                {
                    DAY[1] = 29;
                    for (int i = 0; i < month2 - 1; ++i)
                    {
                        day2 += DAY[i];
                    }
                    d2 = 366 - day2;
                }

                else
                {
                    if (IsLeap2)
                        DAY[1] = 29;
                    for (int i = 0; i < month2 - 1; ++i)
                    {
                        day2 += DAY[i];
                    }
                    d2 = 365 - day2;
                }
                bool IsLeap = (year % 4 == 0 || year % 400 == 0) && (year % 100 != 0);
                if (IsLeap)
                    DAY[1] = 29;
                for (int i = 0; i < month - 1; ++i)
                {
                    day += DAY[i];
                }
                d1 = day;
                textBox6.Text = Convert.ToString(d1 + d2);
            }
            else if (month > month2)
            {
                int d1, d2;
                bool IsLeap = (year % 4 == 0 || year % 400 == 0) && (year % 100 != 0);
                if (IsLeap)
                    DAY[1] = 29;
                for (int i = 0; i < month - 1; ++i)
                {
                    day += DAY[i];
                }
                d1 = day;
                bool IsLeap2 = (year2 % 4 == 0 || year2 % 400 == 0) && (year2 % 100 != 0);
                if (IsLeap2)

                    DAY[1] = 29;
                for (int i = 0; i < month2 - 1; ++i)
                {
                    day2 += DAY[i];
                }
                d2 = day2;

                textBox6.Text = Convert.ToString(d1 - d2);
            }
            else if (month < month2)
            {
                int d1, d2;
                bool IsLeap2 = (year2 % 4 == 0 || year2 % 400 == 0) && (year2 % 100 != 0);
                if (IsLeap2)
                {
                    DAY[1] = 29;
                    for (int i = 0; i < month2 - 1; ++i)
                    {
                        day2 += DAY[i];
                    }
                    d2 = 366 - day2;
                }
                else
                {
                    if (IsLeap2)
                        DAY[1] = 29;
                    for (int i = 0; i < month2 - 1; ++i)
                    {
                        day2 += DAY[i];
                    }
                    d2 = 365 - day2;
                }
                bool IsLeap = (year % 4 == 0 || year % 400 == 0) && (year % 100 != 0);
                if (IsLeap)
                    DAY[1] = 29;
                for (int i = 0; i < month - 1; ++i)
                {
                    day += DAY[i];
                }
                d1 = day;
                textBox6.Text = Convert.ToString(d1 + d2);
            }

            Random rd1 = new Random(day);
            Random rd2 = new Random(day+1);
            Random rd3 = new Random(day+2);
            int one, two, three;
            one = rd1.Next(1, 5);
            two = rd2.Next(1, 5);
            three = rd3.Next(1, 5);
            textBox7.Text = Convert.ToString(one);
            textBox8.Text = Convert.ToString(two);
            textBox9.Text = Convert.ToString(three);
            string[] Love=new string[] { "乱七八糟的桃花运，少碰为妙，惹来一身腥就不好了。",
                           "容易对另一半产生不信任感，彼此的误会较多，你应多用理性平和的态度与另一半沟通唷！" ,
                           "感情丰富的一天，无论是否有实质进展，自己幻想一下倒也无妨！",
                           "恋爱运小佳，不妨去热闹的地方约会，例如：逛街看电影。",
                           "今日机缘一级棒！恋爱中人快约心上人去郊外踏青赏月吧！单身者千万别呆在家理，多与人接触就有机会与情人邂逅喔！" };
            textBox10.Text = Love[two];
            string []Money=new string[]{ "人情往来、通讯、生活费等方面，会花掉大笔钱财。经济状况捉襟见肘，付出与收获难成正比。",
                         "容易有金钱损失的一天，不要乱买东西，免得买到瑕疵品。" ,
                         "在大笔金钱运转的前夕，多搜集资讯，勤劳做点功课，偷懒下草率做的决定是挺危险的唷。 ",
                         "一直困扰你的与金钱有关的问题现在有了新的突破点，你将从中看到希望。上班族有提出加薪的好机会，在个人及家庭理财上可听听专家的建议，好好发一笔。",
                         "得财不费力，很适合动脑想想哪里可以赚钱，趁今日构思赚钱计划表！ " };
            textBox11.Text = Money[three];

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
    }
}

