/* 函数原型:
string& operator+=(const char* str);        //重载+=操作符
string& operator+=(const char c);           //重载+=操作符
string& operator+=(const string& str);      //重载+=操作符
string& append(const char* s);              //把字符串s连接到当前字符串结尾
string& append(const char* s, int n);       //把字符串s的前n个字符连接到当前字符串结尾
string& append(const string& s);            //同operator+=(const string& str)
string& append(const string& s, int pos, int n); //字符串s中从pos开始的n个字符连接到字符串结尾
*/







#include<cstring>
#include<iostream>
#include<vector>
using namespace std;





void test01()
{

	//1.在字符串后面追加字符串文本
	string str1 = "我";
	str1 += "爱玩游戏";
	cout << "str1 = " << str1 << endl;


	//2.在字符串后面追加字符文本
	str1 += '!';
	cout << "str1 = " << str1 << endl;


	//3.字符串后面追加字符串变量
	string str2;
	str2 = " LOL DNF ";
	str1 += str2;
	cout << str1 << endl;


	//4.使用append快捷续写字符串
	string str3 = "I ";
	str3.append("Love Game");
	cout << "str3 = " << str3 << endl;


	//5.利用append续写字符串,但是只续写前几位
	str3.append("game abcde", 4);
	cout << "str3 = " << str3 << endl;


	//6.利用append续写字符串,字符串后面加上字符串
	str3.append(str2);
	cout << "str3 = " <<str3<< endl;


	//7.利用append续写字符串,规定起始截取位置和截取多少位
	str3.append(str2, 0, 3);
	cout << "str3 = " << str3 << endl;


}






int main()
{
	test01();




	system("pause");
}