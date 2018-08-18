using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WindowsFormsApp8
{
    class Cons
    { public Cons()
        { }

        int year, month, day;
        public string GetCons(int y,int m,int d)
        { year = y;month = m;day = d;
            int[] DAY = new int[] { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };



            string[,] constells = new string[12, 2]
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
            int[] constell_dates = new int[] { 20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22 };
            return constells[month - 1,
                day / constell_dates[month]];
    }

    }
}
