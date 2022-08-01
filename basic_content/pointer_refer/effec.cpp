#include<iostream>
using namespace std;
void test1(int* p)
{
    *p = 3;    //此处应该首先判断p是否为空，为了测试的需要，此处我们没加。
    return;
}

void test2(int& p)
{
    p = 3;    //此处应该首先判断p是否为空，为了测试的需要，此处我们没加。
    return;
}

int main() {
    int a=10;
//    int *p=&a;
    int* p=&a;
    cout<<*p<<endl; //10
    cout<<"*p"<<endl;
    cout<<p<<endl;  //0x16da975f8
    cout<<"p"<<endl;
    cout<<&p<<endl; //0x16da975f0
    cout<<"&p"<<endl;

    cout<<*&p<<endl; //0x16da975f8
    cout<<"*&p"<<endl;
//    cout<<&0x16ce975f8<<endl; //error: cannot take the address of an rvalue of type 'long'

    cout<< " "<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    test1(p);
    test2(a);
    cout<<a<<endl;

    int b =11;
//    int* p2 =b; //Cannot initialize a variable of type 'int *' with an lvalue of type 'int'


    return 0;
}
