// pch.h: 这是预编译标头文件。
// 下方列出的文件仅编译一次，提高了将来生成的生成性能。
// 这还将影响 IntelliSense 性能，包括代码完成和许多代码浏览功能。
// 但是，如果此处列出的文件中的任何一个在生成之间有更新，它们全部都将被重新编译。
// 请勿在此处添加要频繁更新的文件，这将使得性能优势无效。

#ifndef PCH_H
#define PCH_H
//----------------标准库----------------------
/*
stdio.h 即 standard input & output（标准输入输出）。在源代码中如用到标准输入输出函数时，就要包含这个头文件。

stdio.h所包含的函数：

文件访问：fopen、freopen、fflush、fclose
二进制输入/输出：fread、fwrite
非格式化输入/输出：fgetc/getc、fputc/putc、ungetc、fgets、fputs
格式化输入/输出：scanf/fscanf/sscanf、printf/fprintf/sprintf、perror
文件定位：ftell、fseek、fgetpos、fsetpos、rewind
错误处理：feof、ferror
文件操作：remove、rename、tmpfile
*/
#include <stdio.h>
/*
stdlib.h 即 standard library 标准库头文件。stdlib.h里面定义了五种类型、一些宏和常用的系统函数。

类型：size_t、wchar_t、div_t、ldiv_t和lldiv_t；
宏例：EXIT_FAILURE、EXIT_SUCCESS、RAND_MAX和MB_CUR_MAX等；
常用的函数：malloc()、calloc()、realloc()、free()、system()、atoi()、atol()、rand()、srand()、exit()等。

int atoi(const char *nptr)：表示 ascii to integer，把字符串转换成整型数；
long atol(const char *nptr)：把字符串转换成长整型数；
rand()：产生随机数的一个随机函数；
void srand(unsigned int seed)：srand和rand()配合使用产生伪随机数序列。
*/
#include <stdlib.h>
/*
stddef.h 定义了一些标准宏和类型，包括:

size_t（sizeof运算符的结果类型，无符号整型）；
ptrdiff_t （两个指针相减运算的结果类型，有符号整型）；
wchar_t （宽字符类型，整型）；
指针常量 NULL（空指针值）；
offsetof(type, member-designator) ：获得字段在结构体中的偏移量。
无论包含哪个标准头文件，都会  自动   将<stddef.h>包含进来。
*/
//#include <stddef.h>

/*文件提供了一个名为 assert 的宏，它可用于验证程序做出的假设，并在假设为假时输出诊断消息。

assert 宏的定义如下：

#define assert(ignore) ((void)0)
assert.h 中定义的唯一的函数：

void assert(int expression)：这实际上是一个宏，不是一个函数，可用于在 C 程序中添加诊断。*/
#include <assert.h>
/*ctype.h 定义了一批C语言字符分类函数（C character classification functions），用于测试字符是否属于特定的字符类别，
如字母字符、控制字符等。

int isalpha(char ch)：检查ch是否是字母；
int iscntrl(int ch)：检查ch是否控制字符（其ASCII码在0和0x1F之间，数值为 0-31）；
int isdigit(char ch)：检查ch是否是数字（0-9）；
int islower(int ch)：检查ch是否小写字母（a-z）；
int isupper(int ch)：检查ch是否是大写字母（A-Z）；
int tolower(int ch)：将ch字符转换为小写字母；
int toupper(int ch)：将ch字符转换成大写字母；
int isspace(int ch)：检查ch是否是空格符、跳格符或换行符；
int isascii(int ch)：测试参数是否是ASCII码0-127；*/
#include <ctype.h>
/*关于字符数组的函数定义的头文件，常用函数有strlen、strcmp、strcpy等。

char *strcpy(char *destin, char *source)：拷贝一个字符串到另一个；
char *strncpy(char *dest, char *src, size_t n)：将字符串src中最多n个字符复制到字符数组dest中，
它并不像strcpy一样遇到NULL才停止复制，而是等凑够n个字符才开始复制；
char *strcat(char *destin, char *source)：字符串拼接函数；
char *strrev(char *str)：字符串倒转；
char *strchr(char *str, char c)：在一个串中查找给定字符的第一个匹配之处；
size_tstrlen(const char *s)：求字符串的长度，从字符串的首地址开始到遇到第一个'\0'停止计数；
int strcmp(char *str1, char *str2)：字符串比较，看ASCII 码，str1>str2，返回值 > 0；两串相等，返回0；*/
#include <string.h>
/*limits.h 文件里的宏限制了各种变量类型（比如 char、int 和 long）的值。*/
#include <limits.h>

	 //浮点数处理
#include <float.h>
//#include <fstream.h>　　　 //文件输入／输出
//#include <iomanip.h>　　　 //参数化输入／输出
//#include <iostream.h>　　　//数据流输入／输出

/*特定地域的设置，比如日期格式和货币符号。*/
#include <locale.h>
	 //定义数学函数
#include <math.h>

//#include <strstrea.h>　　　//基于数组的输入／输出

/*time.h 头文件定义了四个变量类型、两个宏和各种操作日期和时间的函数。

定义的变量类型：

size_t：无符号整数类型，是 sizeof 计算的结果；
clock_t ：存储处理器时间的类型；
time_t：存储日历时间类型；
struct tm：用来保存时间和日期的结构。

clock_t clock(void)：返回程序执行起（一般为程序的开头），处理器时钟所使用的时间。
time_t time(time_t *timer)：计算当前日历时间，并把它编码成 time_t 格式。
char *ctime(const time_t *timer)：返回一个表示当地时间的字符串，当地时间是基于参数 timer。
double difftime(time_t time1, time_t time2)：返回 time1 和 time2 之间相差的秒数 (time1-time2)。
time_t mktime(struct tm *timeptr)：把 timeptr 所指向的结构转换为一个依据本地时区的 time_t 值。
struct tm *localtime(const time_t *timer)：timer 的值被分解为 tm 结构，并用本地时区表示。*/
#include <time.h>

/*<errno.h> 文件里定义了 errno，是一个int型的值。 errno 可以看作一个变量，其初始值为 0，
任何标准库函数执行中出错都可能将它设置为非 0 值，但任何标准库函数的执行都不会出现将它设置为 0 的动作。

在<errno.h>里还定义了两个宏 EDOM 和 ERANGE，它们都是非 0 整数值。如果数学函数执行中遇到参数错误
（参数超出了函数的允许范围），就会将 errno 设置为 EDOM。如果数学函数计算中出现值域错误（结果溢出），
就会将 errno 设置为 ERANGE。

此外，标准库还允许具体系统定义一些以 E 开头的宏，用于表示具体 C 系统的标准库可能给 errno 设置的值。*/
#include <errno.h>

/*jmp_buf：用于存储宏 setjmp() 和函数 longjmp() 相关信息的数组类型。
int setjmp(jmp_buf environment)：这个宏把当前环境保存在变量 environment 中，
以便函数 longjmp() 后续使用。如果这个宏直接从宏调用中返回，则它会返回零，但是如果它从 longjmp() 
函数调用中返回，则它会返回一个非零值。
void longjmp(jmp_buf environment, int value)：该函数恢复最近一次调用 setjmp() 宏时保存的环境，
jmp_buf 参数的设置是由之前调用 setjmp() 生成的。*/
#include <setjmp.h>

/*定义了一个变量类型 sig_atomic_t、两个函数调用和一些宏来处理程序执行期间报告的不同信号。

sig_atomic_t：int 类型，在信号处理程序中作为变量使用。它是一个对象的整数类型，
该对象可以作为一个原子实体访问，即使存在异步信号时，该对象可以作为一个原子实体访问。
下面是头文件 signal.h 中定义的宏：

SIG_DFL：默认的信号处理程序；
SIG_ERR：表示一个信号错误；
SIG_IGN：忽视信号。
signal.h 中定义的函数：
定义的函数：

void (*signal(int sig, void (*func)(int)))(int)：该函数设置一个函数来处理信号，即信号处理程序。
int raise(int sig)：该函数会促使生成信号 sig。sig 参数与 SIG 宏兼容。*/
#include <signal.h>
//宽字符处理及输入／输出
#include <wchar.h>
	//宽字符分类
#include <wctype.h>
	//STL 通用算法
#include <algorithm>
	 //STL 位集容器
#include <bitset>
#include <cctype>
#include <cerrno>
#include <clocale>
#include <cmath>
	 //复数类
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
	  //STL 双端队列容器
#include <deque>
	//异常处理类
#include <exception>

#include <thread>
#include <chrono>
#include <mutex>

#include <curl/curl.h>

#include <fstream>
//STL 定义运算函数（代替运算符
#include <functional>
	  //STL 线性列表容器
#include <list>
#include <forward_list>
#include <unordered_map>
#include <unordered_set>
	   //STL 映射容器
#include <map>
#include <iomanip>
	   //基本输入／输出支持
#include <ios>
	 //输入／输出系统使用的前置声明
#include <iosfwd>
#include <iostream>
	 //基本输入流
#include <istream>
	 //基本输出流
#include <ostream>
	  //STL 队列容器
#include <queue>
	   //STL 集合容器
#include <set>
	 //基于字符串的流
#include <sstream>
	  //STL 堆栈容器　
#include <stack>
	//标准异常类
#include <stdexcept>
	//底层输入／输出支持
#include <streambuf>
	 //字符串类
#include <string>
	 //STL 通用模板类
#include <utility>
	 //STL 动态数组容器
#include <vector>
#include <array>
#include <cwchar>
#include <cwctype>

//复数处理
#include <complex.h>
//浮点环境
#include <fenv.h>
//整数格式转换
#include <inttypes.h>
   //布尔环境
#include <stdbool.h>
   //整型环境
#include <stdint.h>
   //通用类型数学宏
//#include <tgmath.h>

#endif //PCH_H

using namespace std;
void testAuto();
map<string, int> disMap();
//-------------------标准容器------------------------

//关联式容器，分别为 map、set、multimap、multiset,底层选用了 「红黑树」这种数据结构来组织和存储各个键值对
//特点：升序，快速查找、读取或者删除所存储的元素，同时该类型容器插入元素的效率也比序列式容器高
void testMap();
void testSet();

//序列式容器（包括 array、vector、list、deque 和 forward_list）,
//特点：不排序，存储的都是 C++ 基本数据类型（诸如 int、double、float、string 等）
	//或使用结构体自定义类型的元素。
//--------底层实现是数组，随机存取效率高，中间插入效率差------
//尾部增加或删除元素的效率最高
void testVector();
//尾部插入和删除元素高效，在头部插入或删除元素也同样高效(双向操作的vector)
void testDeque();

//----这是双链表，forward_list是单链表----插入效率好
void testList();



//哈希容器种类,unordered_map、unordered_multimap、unordered_set 以及 unordered_multiset
//特点： 不排序，key取value性能高。遍历效率不高
void testUnordered();

//-------------------容器适配器---------------
//容器适配器，分别是 stack、queue、priority_queue,基础容器：vector、deque 和 list

//容器适配器	基础容器筛选条件					默认使用的基础容器
//stack 	基础容器需包含以下成员函数：
				//empty()
				//size()
				//back()
				//push_back()
				//pop_back()
											//				deque
//queue	基础容器需包含以下成员函数：
				//empty()
				//size()
				//front()
				//back()
				//push_back()
				//pop_front()
														//	deque
//priority_queue	基础容器需包含以下成员函数：
				//empty()
				//size()
				//front()
				//push_back()
				//pop_back()
								//							vector
void testStack();
void testQueue();

//迭代器适配器种类
void testIterator();