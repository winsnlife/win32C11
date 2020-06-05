// pch.cpp: 与预编译标头对应的源文件

#include "pch.h"

// 当使用预编译的头时，需要使用此源文件，编译才能成功。


void testAuto() {

	auto a = 5;
	cout << "  a :" << a << endl;
	auto pi = new auto(10);

	cout << "  pi :" << *pi << endl;
}

//创建一个会返回临时 map 对象的函数
map<string, int> disMap() {
	map<string, int>tempMap{ {"C语言教程",110},{"STL教程",120} };
	return tempMap;
}
void testMap() {

	// 调用构造函数 1，也就是默认构造函数
	pair <string, double> pair1;
	// 调用第 2 种构造函数
	pair <string, string> pair2("STL教程", "http://c.biancheng.net/stl/");
	// 调用拷贝构造函数
	pair <string, string> pair3(pair2);
	//调用移动构造函数
	pair <string, string> pair4(make_pair("C++教程", "http://c.biancheng.net/cplus/"));
	// 调用第 5 种构造函数
	pair <string, string> pair5(string("Python教程"), string("http://c.biancheng.net/python/"));

	cout << "pair1: " << pair1.first << " " << pair1.second << endl;
	cout << "pair2: " << pair2.first << " " << pair2.second << endl;
	cout << "pair3: " << pair3.first << " " << pair3.second << endl;
	cout << "pair4: " << pair4.first << " " << pair4.second << endl;
	cout << "pair5: " << pair5.first << " " << pair5.second << endl;

	pair2.first = "Java教程";
	pair2.second = "http://c.biancheng.net/java/";
	cout << "new pair2: " << pair2.first << " " << pair2.second << endl;


	//调用 map 类模板的移动构造函数创建 newMap 容器
	map<string, int>newMap(disMap());

	map<string, int> strMap{ make_pair("C语言教程",10),make_pair("STL教程",20) };
	for (auto i = strMap.begin(); i != strMap.end(); ++i) {
		cout << i->first << " " << i->second << endl;
	}

	//less规则，小到大排序
	map<string, int, greater<string> >myMap1{ {"C语言教程",10},{"STL教程",20} };
	for (auto iter = myMap1.begin(); iter != myMap1.end(); ++iter) {
		cout << iter->first << " " << iter->second << endl;
	}
	std::map<string, string> mymap{ {"STL教程","http://c.biancheng.net/java/"} };
	//获取已存储键值对中，指定键对应的值
	cout << mymap["STL教程"] << endl;
	//向 map 容器添加新键值对
	mymap["Python教程"] = "http://c.biancheng.net/python/";
	//修改 map 容器已存储键值对中，指定键对应的值
	mymap["STL教程"] = "http://c.biancheng.net/stl/";
	for (auto iter = mymap.begin(); iter != mymap.end(); ++iter) {
		cout << iter->first << " " << iter->second << endl;
	}

	//创建并初始化 multimap 容器
	multimap<char, int>mymultimap{ {'a',10},{'b',20},{'b',15}, {'c',30} };
	//输出 mymultimap 容器存储键值对的数量
	cout << mymultimap.size() << endl;
	//输出 mymultimap 容器中存储键为 'b' 的键值对的数量
	cout << mymultimap.count('b') << endl;
	for (auto iter = mymultimap.begin(); iter != mymultimap.end(); ++iter) {
		cout << iter->first << " " << iter->second << endl;
	}
}
void testSet() {
	//创建空set容器
	std::set<std::string> myset;
	//空set容器不存储任何元素
	cout << "1、myset size = " << myset.size() << endl;
	//向myset容器中插入新元素
	myset.insert("http://c.biancheng.net/java/");
	myset.insert("http://c.biancheng.net/stl/");
	myset.insert("http://c.biancheng.net/python/");
	cout << "2、myset size = " << myset.size() << endl;
	//利用双向迭代器，遍历myset
	for (auto iter = myset.begin(); iter != myset.end(); ++iter) {
		cout << *iter << endl;
	}
}
//哈希容器
void testUnordered() {

	//-------------------map--------------------
	// 创建并初始化一个 unordered_map 容器，其存储的 <string, string> 类型的键值对
	std::unordered_map<std::string, std::string> my_uMap{
			{"C语言教程","http://c.biancheng.net/c/"},
			{"Python教程","http://c.biancheng.net/python/"},
			{"Java教程","http://c.biancheng.net/java/"} };
	//查找指定键对应的值，效率比关联式容器高
	string str = my_uMap.at("C语言教程");
	cout << "str = " << str << endl;
	//使用迭代器遍历哈希容器，效率不如关联式容器
	for (auto iter = my_uMap.begin(); iter != my_uMap.end(); ++iter)
	{
		//pair 类型键值对分为 2 部分
		cout << iter->first << " " << iter->second << endl;
	}
	cout << endl;

	cout << "-----unordered_map-----end" << endl;

	//创建一个空的unordered_set容器
	std::unordered_set<std::string> uset;
	//给 uset 容器添加数据
	uset.emplace("http://c.biancheng.net/java/");
	uset.emplace("http://c.biancheng.net/c/");
	uset.emplace("http://c.biancheng.net/python/");
	//查看当前 uset 容器存储元素的个数
	cout << "uset size = " << uset.size() << endl;
	//遍历输出 uset 容器存储的所有元素
	for (auto iter = uset.begin(); iter != uset.end(); ++iter) {
		cout << *iter << endl;
	}

	cout <<"-----unordered_set-----end"<< endl;
}
void testStack() {
	// 构建 stack 容器适配器
	list<int> values{ 1, 2, 3 };
	stack<int, list<int>> my_stack(values);
	//查看 my_stack 存储元素的个数
	cout << "size of my_stack: " << my_stack.size() << endl;
	//将 my_stack 中存储的元素依次弹栈，直到其为空
	while (!my_stack.empty())
	{
		cout << my_stack.top() << endl;
		//将栈顶元素弹栈
		my_stack.pop();
	}
	cout << "-----stack-----end" << endl;
}
void testQueue() {
	std::queue<int, std::list<int>> vvv;

	std::deque<int> v{ 1,2,3 };
	std::queue<int> my_queue(v);

	//查看 my_queue 存储元素的个数
	cout << "size of my_queue: " << my_queue.size() << endl;
	//访问 my_queue 中的元素
	while (!my_queue.empty())
	{
		cout << my_queue.front() << endl;
		//访问过的元素出队列
		my_queue.pop();
	}


	//创建一个空的priority_queue容器适配器
	std::priority_queue<int>values;
	//使用 push() 成员函数向适配器中添加元素
	values.push(3);//{3}
	values.push(1);//{3,1}
	values.push(4);//{4,1,3}
	values.push(2);//{4,2,3,1}
	//遍历整个容器适配器
	while (!values.empty())
	{
		//输出第一个元素并移除。
		std::cout << values.top()<< " ";
		values.pop();//移除队头元素的同时，将剩余元素中优先级最大的移至队头
	}
	cout << "-----priority_queue-----end" << endl;

}
void testVector() {

	std::array<double, 10> v1{ 0.5,1.0,1.5,0,2.0 };
	for (auto val = v1.begin(); val < v1.end(); val++) {
		cout << " "<< *val << " ";
	}

	array<int, 5>v2{ 1,2,3,4,5 };
	int h = 1;
	auto first = v2.cbegin();
	auto last = v2.cend();

	//由于 *first 为 const 类型，不能用来修改元素
	//*first = 10;

	//遍历容器并输出容器中所有元素
	while (first != last)
	{
		//可以使用 const 类型迭代器访问元素
		cout << *first << " ";
		++first;
	}

	vector<int> v{ 1,2,3,4,5,6,7,8,9,10 }; //v被初始化成有10个元素
	cout << "第一种遍历方法：" << endl;
	//size返回元素个数
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " "; //像普通数组一样使用vector容器
	//创建一个正向迭代器，当然，vector也支持其他 3 种定义迭代器的方式

	cout << endl << "第二种遍历方法：" << endl;
	vector<int>::iterator i;
	//用 != 比较两个迭代器
	for (i = v.begin(); i != v.end(); ++i)
		cout << *i << " ";

	cout << endl << "第三种遍历方法：" << endl;
	for (i = v.begin(); i < v.end(); ++i) //用 < 比较两个迭代器
		cout << *i << " ";

	cout << endl << "第四种遍历方法：" << endl;
	i = v.begin();
	while (i < v.end()) { //间隔一个输出
		cout << *i << " ";
		i += 2; // 随机访问迭代器支持 "+= 整数"  的操作
	}

	//初始化一个空vector容量
		vector<char>value;
	//向value容器中的尾部依次添加 S、T、L 字符
	value.push_back('S');
	value.push_back('T');
	value.push_back('L');
	//调用 size() 成员函数容器中的元素个数
	cout << "元素个数为:"<< value.size();
	//使用迭代器遍历容器
	for (auto i = value.begin(); i < value.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	//向容器开头插入字符
	value.insert(value.begin(), 'C');
	cout << "首个元素为：" << value.at(0) << endl;
}
void testDeque() {
	//初始化一个空vector容量
	deque<int>d;
	//向value容器中的尾部依次添加 S、T、L 字符
	d.push_back(1); //{1}
	d.push_back(2); //{1,2}
	d.push_back(3); //{1,2,3}
	d.push_front(0); //{0,1,2,3}
	//调用 size() 成员函数输出该容器存储的字符个数。
	cout << "元素个数为:" << d.size();

	//使用迭代器遍历容器
	for (auto i = d.begin(); i < d.end(); i++) {
		cout << "deque:" << *i << " ";
	}
	cout << endl;

	deque<int>d1{ 1,2,3,4,5 };
	//从容器首元素，遍历至最后一个元素
	for (auto i = d1.begin(); i < d1.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
}
void testList() {
	cout <<"-------------list-----------" << " " << endl;
	//优先使用单链表
	std::forward_list<int> f_values{ 1,2,3 };
	f_values.emplace_front(4);//{4,1,2,3}
	f_values.emplace_after(f_values.before_begin(), 5); //{5,4,1,2,3}
	f_values.reverse();//{3,2,1,4,5}
	for (auto it = f_values.begin(); it != f_values.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;

	//创建一个 v list容器
	list<int> v{1,2,3,4,5,6};
	//创建一个常量正向迭代器，同样，list也支持其他三种定义迭代器的方式。
	list<int>::const_iterator i;

	for (i = v.begin(); i != v.end(); ++i)
		cout << *i;

	//创建空的 list 容器
	std::list<double> values;
	//向容器中添加元素
	values.push_back(3.1);
	values.push_back(2.2);
	values.push_back(2.9);
	cout << "values size：" << values.size() << endl;
	//对容器中的元素进行排序
	values.sort();
	//使用迭代器输出list容器中的元素
	for (std::list<double>::iterator it = values.begin(); it != values.end(); ++it) {
		std::cout << *it << " " << endl;
	}

	//创建并初始化一个 list 容器
	std::list<int> mylist{ 1,2,3,4,5 };
	std::list<int>::iterator it = mylist.end();
	//获取一个距离 it 迭代器 2 个元素的迭代器，由于 2 为正数，newit 位于 it 左侧
	auto newit = prev(it, 2);
	cout << "prev(it, 2) = " << *newit << endl;

	//n为负数，newit 位于 it 右侧
	it = mylist.begin();
	newit = prev(it, -2);
	cout << "prev(it, -2) = " << *newit << endl;

	newit = prev(it, -1);
	cout << "prev(it, -1) = " << *newit << endl;

	cout << "-------------list------end-----" << " " << endl;
}

void testIterator() {
	std::list<int> values{ 1,2,3,4,5 };
	//找到遍历的起点和终点，这里无需纠结定义反向迭代器的语法，后续会详细讲解
	std::reverse_iterator<std::list<int>::iterator> begin = values.rbegin();
	std::reverse_iterator<std::list<int>::iterator> end = values.rend();
	while (begin != end) {
		cout << *begin << " ";
		//注意，这里是 ++，因为反向迭代器内部互换了 ++ 和 -- 的含义
		++begin;
	}

	//创建一个 vector 容器
	std::vector<int> foo;
	//创建一个可向 foo 容器尾部添加新元素的迭代器
	std::back_insert_iterator< std::vector<int> > back_it(foo);
	//将 5 插入到 foo 的末尾
	back_it = 5;
	//将 4 插入到当前 foo 的末尾
	back_it = 4;
	//将 3 插入到当前 foo 的末尾
	back_it = 3;
	//将 6 插入到当前 foo 的末尾
	back_it = 6;
	//输出 foo 容器中的元素
	for (std::vector<int>::iterator it = foo.begin(); it != foo.end(); ++it)
		std::cout << *it << ' ';

	cout << "-------------testIterator------end-----" << " " << endl;
}