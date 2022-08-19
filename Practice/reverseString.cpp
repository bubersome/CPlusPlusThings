#include "vector"
#include "iostream"
#include "string"

using namespace std;

void reverseString(vector<string> &s) {
    for (int i = 0, j = s.size() - 1; i < s.size()/2; i++, j--) {
        swap(s[i],s[j]);
    }
}

const vector<string> b = {"abcd"}; // const

int main(){
//    string abcd;
//    string r = abcd;

//    reverseString(vector<char>& (a));
//    vector<string> a ={"abcd","b","c","d"}; //Yes
    vector<string> a ={"abcd"};
//    vector<string> b;
    reverseString(a) ;
//    b = reverseString(a) ;
//    cout << a << endl;
//    cout << "dd";
    return 0;
}