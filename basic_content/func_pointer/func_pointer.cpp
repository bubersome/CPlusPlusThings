/**
 * @file func_pointer.cpp
 * @brief 函数指针的使用！
 * @author 光城
 * @version v1
 * @date 2019-07-20
 */

#include<iostream>
using namespace std;

/**
 * @brief 定义了一个变量pFun，这个变量是个指针，指向返回值为空和参数为int的函数的指针！
 */
void (*pointertoFun)(int);

/**
 * @brief 代表一种新类型，不是变量！所以与上述的pFun不一样！
 */
typedef void (*func)(void);  

void myfunc(void)
{
    cout<<"asda"<<endl;
}

void glFunrefra(int tubeiter){ cout << tubeiter << endl;}

int main(){
    func pfun = myfunc;/*赋值*/  
    pfun();/*调用*/  
    pointertoFun = glFunrefra; // 什么意思？
    (*pointertoFun)(2);
    (*pointertoFun)(4);
}
