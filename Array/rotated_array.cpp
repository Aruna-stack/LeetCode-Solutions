#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]>nums[(i+1)%nums.size()]){
                count++;
            }
            
        }
        return count <=1;
    }
};
int main(){
    vector<int> arr = {3, 5, 6, 2, 1, 9, 55, 34, 1, 3, 4, 5, 1};
    int n = arr.size();
    class Solution s1;
    cout<<s1.check(arr);
    return 0;
}
