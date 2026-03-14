//容器的嵌套



#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

void test01()
{
	vector<vector<int>>v;
	//创建一个大容器，大容器包含的类型是小容器，大容器的名称是v


	//创建小容器
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;


	//向小容器中添加数据
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);//向v1中放入数据，push_back(存放的数据);
		v2.push_back(i + 2);//v2
		v3.push_back(i + 3);//。。。
		v4.push_back(i + 4);//。。。
	}


	//将小容器插入到大的容器中
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);



	//通过大容器，把所有数据遍历一遍
	//这里将小容器理解成大容器的对象，不需要解地址，而小容器需要解地址读取数据
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		//先遍历大容器，大容器的名称是v


		//(*it)---容器vector<int>
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			//再遍历小容器，小容器的名称是vit


			cout << *vit << "   ";

		}

		cout << endl;
	}


}







int main()
{
	test01();







}