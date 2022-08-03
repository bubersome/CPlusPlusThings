//#include <altivec.h>
#include <vector>
#include <unordered_set>
#include <iostream>

using namespace std;

class Solution {
public:
    static vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result_set; // 存放结果，之所以用set是为了给结果集去重
        int hash[1005] = {0}; // 默认数值为0
        for (int num : nums1) { // nums1中出现的字母在hash数组中做记录
            hash[num] = 1;
        }
        for (int num : nums2) { // nums2中出现话，result记录
            if (hash[num] == 1) {
                result_set.insert(num);
            }
        }
        return vector<int>(result_set.begin(), result_set.end());
    }
};



int main() {
    vector<int> s = {1,2,3,4,5};
    vector<int> t = {6,2,3,4,5};

    const vector<int> & ans = Solution::intersection(s, t);
//    cout >> ans<2> >> endl;
//    printf(ans) ;
};