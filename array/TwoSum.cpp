#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum1(vector<int>& nums, int target) {//brute force approach, T.C is O(N^2), S.C is O(1)
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

        vector<int> twoSum3(vector<int>& nums, int target) {// optimal approach and T.Cis O(n log n), S.C is O(n)
        int n = nums.size();
        vector<pair<int, int>> arr;
        for(int j = 0; j<n; j++){
            arr.push_back({nums[j], j});
        }
        sort(arr.begin(), arr.end());
        int left = 0, right = n-1;
      
        while(left<right){
            int sum = arr[left].first+ arr[right].first;
            if(sum == target){
                return {arr[left].second, arr[right].second};
            }
            else if(sum<target) left++;
            else right--;
        }
        return {};
    }
};
int main(){
    Solution s1;
    vector<int> nums = {2, 7,11,15}; 
    int target = 9;
    s1.twoSum1(nums, target);
    s1.twoSum3(nums, target);

    return 0;
}