//字符存取常见有两种方式
//一种是使用中括号[]
//另一种是使用at函数

//小芝士:在C++中使用at函数来存取字符数组能够防止数组的读写越界
//at函数在遇见越界的时候会报错,在排bug的方面非常好用
//但是[]没有这种功能,所以在C++中都可以用at,但是C不行,C中没有at函数



#include<iostream>
#include<cstring>
using namespace std;

void test01()
{
	string str1 = "hello";

	cout << str1 << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "下面是读取字符串中的字符的两种方法" << endl;



	//1.通过[]来读单个字符
	for (int i = 0; i < str1.size(); i++)
	{
		cout << str1[i] <<"  ";
	}
	cout << endl;


	//2.通过at的方式读字符串
	for (int i = 0; i < str1.size(); i++)
	{
		cout << str1.at(i) << "  ";


	}
	cout << endl;


	//写入字符串的两种方法
	str1[0] = 'x';
	cout << str1<<endl;
	str1.at(0) = 'h';
	cout << str1 << endl;

	
}




int main()
{

	test01();
	

}
