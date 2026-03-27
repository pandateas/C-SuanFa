/*
总结:
尾插---push_back()
尾删---pop_back()
插入---insert(插入起始位置,插入个数,插入数据)或(插入位置,插入数据)
删除---erase(删除起始位置,删除终止位置)或(删除位置)
清空---clear()清空容器中的所有东西
*/






#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

void PrintVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it<<"  ";
	}
	cout << endl;
}







void test01()
{
	vector<int>v1;

	//尾插用push_back();
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int>v2;
	v2 = v1;

	//遍历
	PrintVector(v1);

	//尾删
	v1.pop_back();
	PrintVector(v1);

	//插入 第一个参数是迭代器
	v1.insert(v1.begin(), 100);
	PrintVector(v1);


	//插入 (起始迭代器,插入几个,插入的数据)
	v1.insert(v1.begin(), 2, 1000);
	PrintVector(v1);

	//删除 只删除第一个
	v1.erase(v1.begin());
	PrintVector(v1);

	//删除 从哪里起始删除到哪里
	v1.erase(v1.begin(), v1.end());
	PrintVector(v1);
	
	//单独的清空函数clear
	PrintVector(v2);
	v2.clear();
	PrintVector(v2);
	



}



int main()
{
	test01();





}