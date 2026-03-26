//assign的作用是清空容器中原有的所有元素,并用一组新的元素进行替换
//在这个过程中会自适应需要调整的容量大小,可以方便的从不同来源获取数据


#include<iostream>
#include<vector>
using namespace std;

void PrintVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end() ; it++)
	{
		cout << *it << "  ";

	}
	cout << endl;


}



//vector赋值
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);

	}
	PrintVector(v1);

	//1.等号赋值法
	vector <int>v2;
	v2 = v1;
	PrintVector(v2);


	//2.assign赋值法
	//向assign传入两个迭代器,能够对调用assign的容器进行赋值操作
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());
	PrintVector(v3);


	//3.assign,n个elem方式赋值
	vector<int>v4;
	v4.assign(10, 100);
	PrintVector(v3);




}



int main()
{
	test01();



}