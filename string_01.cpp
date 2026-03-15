//String 初学

/*string 的本质是类
类中包含很多功能
例如最常用的把string当做字符串的是因为string中包含char*
能够执行字符串的功能
此外string还包含很多其他的功能
例如：
查找---find
拷贝---copy
删除---delete
替换---replace
插入---insert
string管理char*所分配的内存，无心担心越界，又类内部自己负责
*/


#include<iostream>
#include<cstring>
#include<vector>
using namespace std;


/*string的构造函数
string();                        //创建一个空的字符串  例如：string str;
string(const char* s);			//使用字符串s初始化功能，括号内放入初始化内容
string(const string& str);		//使用一个string对象初始化弄一个string对象//拷贝构造
string(int n, char c);			//使用n个字符初始化

*/

void test01()
{

	string s1;//无参构造默认字符串//默认构造


	//有参初始化字符串
	const char* str = "hello world";
	string s2(str);
	cout << "s2 = " << s2 << endl;
	//字符串s2被初始化成str，这里可以把s2就看做string s2 = hello world



	//拷贝构造字符串
	string s3(s2);
	cout << "s3 = " << s3 << endl;
	//上面讲s2看作了字符串"hello world"
	//这里同样类似于用s2字符串初始化s3


	//n个相同字符初始化字符串
	//括号中的第一位是要重复几次，第二位是需要重复的内容
	string s4(10, 'a');
	cout << "s4 = " << s4 << endl;



}






int main()
{
	test01();










}