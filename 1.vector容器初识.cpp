//vector容器和数组极其相似,被称为单端数组
//不同之处在于vector可以动态的拓展,不想普通数字一样无法拓展
//并不是续接新的空间,而是宣召更大的空间,然后拷贝过去,释放原有空间
//vector的迭代器是支持随机访问的迭代器,是最强的那一类
//迭代器本质可以看做成四个指针


/*
函数原型:
1.vector<存储数据类型> 容器名称;	//采用模板实现类实现,默认构造函数
2.vector(v.begin(),v.end());		//将v.begin()和v.end()之间的元素拷贝给本身
3.vector(n,elem);                   //构造函数将n个elem拷贝给本身
4.vector(const vector &vec);        //拷贝构造函数,拷贝另一个vector给自己
容器名称 + . + push_back(数据);		//压入数据


*/
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

void printVector(vector<int>&v)
{
	//访问vector<int>作用域下的迭代器,并给它起名为it
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		//迭代器可以看成一个指针,因此需要解地址
		cout << *it << "  ";

	}

}



//vector容器构造
void test01()
{
	//1.默认构造
	vector<int> v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);


	//2.通过区间的方式进行构造
	vector<int>v2(v1.begin(), v1.end());
	printVector(v2);
	//这里直接使用了v1的迭代器,就相当于复制了v1容器


	//3.n个elem方式构造拷贝函数
	//都叫做n个elem了,那就是10个100啦
	vector<int>v3(10, 100);
	printVector(v3);


	//拷贝构造
	//利用v3初始化v4容器
	vector<int>v4(v3);
	printVector(v4);

}

int main()
{
	test01();




}