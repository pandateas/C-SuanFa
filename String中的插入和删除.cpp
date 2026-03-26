#include <iostream>
#include <cstring>
using namespace std;




void test01()
{
	string str = "hello";

	//插入方式1
	//要插入的字符串名 + . + insert +(插入位置 ,"要插入的字符串")
	str.insert(1, "111");
	cout << "str = " << str << endl;

	//删除方式1
	//要删除的字符串名 + . + erase +(删除起始位置,往后删除几个字符) 
	str.erase(1, 3);
	cout << "str = " << str << endl;


}





int main()
{
	test01();



}