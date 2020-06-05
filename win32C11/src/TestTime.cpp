
#include "TestTime.h"
#include "pch.h"

void testTime() {
	// ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
	time_t now = time(0);

	// �� now ת��Ϊ�ַ�����ʽ
	char* dt = ctime(&now);

	cout << "�������ں�ʱ�䣺" << dt << endl;

	// �� now ת��Ϊ tm �ṹ
	tm *gmtm = localtime(&now);
	dt = asctime(gmtm);
	cout << "UTC ���ں�ʱ�䣺" << dt << endl;

	tm *ltm = localtime(&now);

	// ��� tm �ṹ�ĸ�����ɲ���
	cout << "��: " << 1900 + ltm->tm_year << endl;
	cout << "��: " << 1 + ltm->tm_mon << endl;
	cout << "��: " << ltm->tm_mday << endl;
	cout << "ʱ��: " << ltm->tm_hour << ":";
	cout << ltm->tm_min << ":";
	cout << ltm->tm_sec << endl;

	time_t timep;
	time (&timep);
	char tmp[64];
	strftime(tmp, sizeof(tmp), "%Y-%m-%d %H:%M:%S",localtime(&timep) );
	cout << "UTC ���ں�ʱ�䣺" << tmp << endl;		
}