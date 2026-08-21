#include<iostream>
#include<vector>
using namespace std;

int INT_MIN;
int INT_MAX;
class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int> digitRanges(nums.size());
        int maxRange = INT_MIN;
        for(int i = 0; i<nums.size();i++){
            int lar = INT_MIN, sml = INT_MAX;
            int n = nums[i];
            while(n>0){
                int digit = n%10;
                lar = max(lar, digit);
                 sml = min(sml, digit);
                n= n/10;
            }
             int dif = lar - sml;
            digitRanges[i] = dif;
            maxRange = max(maxRange, dif);  
            
        }
         int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (digitRanges[i] == maxRange) {
                sum += nums[i];
            }
        }
        
        return sum;
    }
};
int main(){
    Solution s1;
    vector<int> num = {1534, 6432, 8674};
    cout<<s1.maxDigitRange(num)<<endl;

  return 0;
}