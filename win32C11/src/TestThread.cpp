
#include "TestThread.h"
#include "pch.h"


int number = 1;
mutex g_lock;

int ThreadProc11()
{
	while (number < 100)
	{
		g_lock.lock();
		cout << "thread 1 :" << number << endl;
		++number;
		this_thread::sleep_for(std::chrono::milliseconds(10));
		g_lock.unlock();
	}

	return 0;
}

int ThreadProc12()
{
	while (number > 0)
	{
		g_lock.lock();
		cout << "thread 2 :" << number << endl;
		--number;
		this_thread::sleep_for(std::chrono::milliseconds(1000));
		g_lock.unlock();
		
	}

	return 0;
}
int runThread() {
	thread t1(ThreadProc1);
	thread t2(ThreadProc2);

	t1.join();
	t2.join();

	cout << "end thread main" << endl;
	return 0;
}

//lock_guard,������RAII���ƿ��Ա�֤��ȫ�ͷ�mutex
//��ĳ��lock_guard��������������ڣ�����������������һֱ��������״̬��
//��lock_guard���������ڽ���֮�����������������ᱻ����
int ThreadProc1()
{
	lock_guard<mutex> loker(g_lock);
	for (int i = 0; i < 100; i++)
	{
		++number;
		cout << "thread 1 :" << number << endl;

	}
	//this_thread::sleep_for(std::chrono::milliseconds(100));
	return 0;
}

int ThreadProc2()
{
	lock_guard<mutex> loker(g_lock);
	for (int i = 0; i < 100; i++)
	{
		--number;
		cout << "thread 2 :" << number << endl;
		//this_thread::sleep_for(std::chrono::milliseconds(10));
	}

	return 0;
}
