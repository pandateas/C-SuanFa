#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

void PrintVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}cout << endl;


}



//vector容器容量和大小操作
void test01()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);//向容器中尾插数据
	}

	v2 = v1;
	PrintVector(v1);

	if (v1.empty())
	{
		cout << "v1为空" << endl;
		
	}
	else
	{
		cout << "v1的容量为:" << v1.capacity() << endl;		//容量是总共可以存放多少东西
		cout << "v1的大小为:" << v1.size() << endl;			//大小是已经存入的数据
	}

	//重新指定容器大小
	//如果重新指定的比原来长,那么多出来的会默认为0
	//如果不想要填充0,而是填充别的数,那么可以放入第二参数
	v1.resize(15);
	PrintVector(v1);
	cout << "v1的容量为:" << v1.capacity() << endl;		//容量是总共可以存放多少东西
	cout << "v1的大小为:" << v1.size() << endl;			//大小是已经存入的数据

	//指定放入的数示例
	v2.resize(15,5);
	PrintVector(v2);
	cout << "v1的容量为:" << v2.capacity() << endl;		//容量是总共可以存放多少东西
	cout << "v1的大小为:" << v2.size() << endl;			//大小是已经存入的数据


	//如果重新指定的容器大小比原本的短,那么多余部分会被删除掉
	vector<int>v3;
	v3 = v1;
	PrintVector(v3);
	v3.resize(5);//比原来的十个数短
	PrintVector(v3);
}



int main()
{
	test01();


}