
#include "TestTime.h"
#include "pch.h"

void testTime() {
	// 基于当前系统的当前日期/时间
	time_t now = time(0);

	// 把 now 转换为字符串形式
	char* dt = ctime(&now);

	cout << "本地日期和时间：" << dt << endl;

	// 把 now 转换为 tm 结构
	tm *gmtm = localtime(&now);
	dt = asctime(gmtm);
	cout << "UTC 日期和时间：" << dt << endl;

	tm *ltm = localtime(&now);

	// 输出 tm 结构的各个组成部分
	cout << "年: " << 1900 + ltm->tm_year << endl;
	cout << "月: " << 1 + ltm->tm_mon << endl;
	cout << "日: " << ltm->tm_mday << endl;
	cout << "时间: " << ltm->tm_hour << ":";
	cout << ltm->tm_min << ":";
	cout << ltm->tm_sec << endl;

	time_t timep;
	time (&timep);
	char tmp[64];
	strftime(tmp, sizeof(tmp), "%Y-%m-%d %H:%M:%S",localtime(&timep) );
	cout << "UTC 日期和时间：" << tmp << endl;		
}