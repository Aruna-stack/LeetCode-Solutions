#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count=0, max = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == 1){
                count++; 
                if(count>max){
                    max = count;
                }
            }
            else{
                count = 0;
            }
            
        }
         return max;
    }
};
int main(){
    vector<int> nums = {1,1,0,1,1,1};
    Solution s1;
    cout<<s1.findMaxConsecutiveOnes(nums)<<endl;
    return 0;
}