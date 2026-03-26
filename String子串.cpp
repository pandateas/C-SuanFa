#include <iostream>
#include <cstring>
using namespace std;



void test01()
{
	//函数原型:string substr(int pos = 0,int n = npos)const;
	//返回由pos开始的n个字符组成的字符串

	string str1, str2;
	str1 = "Hello World!";
	cout << "str1 = " << str1 << endl;
	str2 = str1.substr(0, 5);
	cout << "str2 = " << str2 << endl;
}



//结合find定位来输出指定的字符串子串
void test02()
{
	string Email = "omg58462@outlook.com";

	//从邮件中获取用户名

	int pos = Email.find("@");//使用find返回该字符所在的位置

	string userName = Email.substr(0,pos);

	cout << "uerName = " << userName << endl;
}




int main()
{
	test01();
	test02();



}