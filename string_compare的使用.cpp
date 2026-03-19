#include<iostream>
#include<cstring>
using namespace std;

//比较方式: (字符串1) + "." + compare(字符串2)
//比较完成后会返回一个值,需要用一个变量接收,当然也可以不用变量
//拿着这玩意直接去和0比较大小



int main() {
    string a = "apple";
    string b = "banana";
    string c = "apple";

    // 1. a < b → 返回负数
    cout << a.compare(b) << endl;  // 输出 -1（或其他负数）

    // 2. a == c → 返回 0
    cout << a.compare(c) << endl;  // 输出 0

    // 3. b > a → 返回正数
    cout << b.compare(a) << endl;  // 输出 1（或其他正数）

    string str1 = "hello world";
    string str2 = "world";

    // 从str1第6位开始，取5个字符，和str2比较
    int res = str1.compare(6, 5, str2);
    cout << res << endl;  // 输出0 → 相等


    //进阶方法str1.compare(pos1,len1,str2,pos2,len2)
    //该方法能够极其灵活的比较字符串之间的区别
    int ret = str1.compare(2, 2, str2, 2, 2);
    cout << ret << endl;







}