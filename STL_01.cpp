 //STL标准模版库（提高的代码的复用性）
//分为：容器，算法，迭代器
//容器和算法通过迭代器无缝连接
//STL六大组件：容器，算法，迭代器，仿函数，适配器（配接器），空间配置器
// 
//1.容器:各种数据结构，如vector、list、deque、set、map等,用来存放数据。
//2.算法:各种常用的算法，如sort、find、copy、for_each等
//3.迭代器:扮演了容器与算法之间的胶合剂。
//4.仿函数:行为类似函数，可作为算法的某种策略。
//5.适配器:一种用来修饰容器或者仿函数或迭代器接口的东西。
//6.空间配置器:负责空间的配置与管理。


//1.容器：用来存放数据的东西
//分为序列式容器和关联式容器
//序列式容器：像数组一样有顺序的排列
//关联式容器：物理上没有严格的顺序结构


//2.算法：质变算法和非质变算法
//质变算法：更改内容元素的算法，与原来不一样，例如倒序
//非质变算法：在运算过程中建不会更改元素，例如查找极值

//3.迭代器：算法要通过迭代器才能够访问容器中的数
//每种容器都有自己的专属的迭代器
//迭代器的行为非常类似于指针
//迭代器包含：
// 输入：对数据只读访问
// 输出：对数据只写访问
// 前向：读写操作并且能向前推迭代器
// 双向：读写操作并且能够向前，后操作
// 随机访问 ：读写操作，能够访问任意数据









#include<vector>
#include<iostream>
#include<cstring>
#include<algorithm>//标准算法头文件
using namespace std;



void myPrint(int val)
{

	cout << val << endl;

}







//verctor容器来存放内置的数据类型

void test01()
{


	////创建了一个vector容器，数组
	//vector<int> v;

	////向容器中插入数据
	//v.push_back(10);
	//v.push_back(20);
	//v.push_back(30);
	//v.push_back(40);

	////通过迭代器访问容器中的数据
	//vector<int>::iterator itBegin= v.begin();//其实迭代器，只想容器中的第一个元素
	//// vector<int>::iterator //数据类型形式，类似于专用的指针，来遍历数据，可以直接写
	//// itBegin // 自己定义的数据类型
	////v.begin(); // 起始迭代器，指向容器的第一个元素


	//vector<int>::iterator itEnd = v.end();
	////结束迭代器，指向容器中最后一个元素的下一个位置

	////第一种遍历方式
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;











	//vector<int> v;//声明容器变量v
	//v.push_back(10);//存放数据
	//v.push_back(20);
	//v.push_back(30);
	//v.push_back(40);

	////在for循环中创建迭代器，并且取名为it
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{

	//	cout << *it << endl;
	//}








	vector<int> v;//声明容器变量v
	v.push_back(10);//存放数据
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//使用STL提供的遍历算法
	for_each(v.begin(), v.end(), myPrint);





}




int main()
{

	test01();


}


//