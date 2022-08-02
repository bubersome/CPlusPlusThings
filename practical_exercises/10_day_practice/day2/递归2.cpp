#include<iostream>
using namespace std;
int f(int n, int k);
int main(int argc, char const *argv[])
{
    cout<<"please input n and k"<<endl;
    int n=5,k=4;
//    cin>>n;
//    cin>>k;
    cout<<n-6<<endl;
    cout<<f(n,k)<<endl;
    system("pause");
    return 0;
}

int f(int n, int k)
{
    if ((n==k)||(k==0))
    {
        return 1;
    }
    else
    {
        return f(n-1,k-1); //+f(n-1,k);
    }
}