#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {//brute force approach
        int n = nums.size();
        for(int i = 0; i<n; i++){
            int x = target - nums[i];
            for(int j = i+1; j<n; j++){
                if(nums[j] == x)
                return {i,j};
            }
        } 
        return {};
    }
};