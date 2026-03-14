//vector来存放自定义数据类型




#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;



class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;



	}

	string m_Name;
	int m_Age;




};


void test01()
{
	vector<Person>v;

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);


	//遍历容器中的数据
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)//it相当于指针
	{
		cout << "姓名：" << (*it).m_Name << "年龄：" << (*it).m_Age << endl;



	}


	system("pause");
}


//存放自定义类型  指针
void test02()
{
	vector<Person*>v;//声明vector容器中存放的是Person*类型的数据，给容器取名为v

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);


	//遍历容器中的数据
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)//it相当于指针
	{
		cout << "姓名：" << (*it)->m_Name << "年龄：" << (*it)->m_Age << endl;
		//调用指针要使用->


	}


	system("pause");



}






int main()
{

	test01();




}

