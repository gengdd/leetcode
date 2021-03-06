#include <iostream>
#include <vector>

using namespace std;

//class Solution {
//public:
//    int rob(vector<int>& nums) {
//        int x = 0;
//        nums.push_back(0);
//        nums.push_back(0);
//        for (int i = 0; i < nums.size(); i = i + 2) {
//            if (nums[i] + nums[i + 2] < nums[i + 1]) {
//                x = x + nums[i + 1];
//                i = i + 1;
//            } else
//                x = x + nums[i];
//        }
//        return x;
//    }
//};

class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size()<=1)
            return nums.empty()?0:nums[0];
        vector<int> dp={nums[0],max(nums[0],nums[1])};
        for (int i=2;i<nums.size();++i){
            dp.push_back(max(nums[i]+dp[i-2],dp[i-1]));
        }
        return dp.back();
    }
};



