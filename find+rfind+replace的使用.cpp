    #include<iostream>
    #include<cstring>
    using namespace std;

    //字符串查找和替换


    //1.查找
    void test01()
    {

        //使用srrl.find()来对比查找字符串中
        //有没有相同的字符串,如果有返回当前位置
        //如果没有,也会返回一个值 -1
        //找到的起始地址是0,后面1,2,....

        //rfind是从左往右找,find是从右往左找
        //但是都是从左边记为0开始
        //也就是说rfind返回的也会是当前从左往右的坐标

        string strl = "aaabaa";

       int pos =  strl.find("ab");

        cout<<"pos = "<<pos<<endl;
    }




    //2.替换
    void test02()
    {
        string str1 = "abcdefg";
        //abcdefg --- 0123456

        str1.replace(1,3,"111");
        //从第几位开始,替换当前字符串中记为字符
        //随后全部替换成双引号里面的东西

        cout<<"str1 = "<< str1 <<endl;

    }




    int main()
    {
        test01();
        test02();







    }