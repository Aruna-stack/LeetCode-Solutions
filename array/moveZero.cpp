#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
//time complexcity for this code is O(n^2)
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for(int j = n-1; j>=0; j--){
            for(int i =0; i<n; i++){
            if(nums[i] == 0 && nums[i]<nums[i+1] || nums[i]==0 && nums[i+1]<0){
                swap(nums[i], nums[i+1]);
            }
            
        }

        }
           
        for(int i = 0; i<n; i++){
            cout<<nums[i]<<" ";
        }
        
    }
       //time complexcity for this code is O(n)
        void moveZeroesAlt(vector<int>& nums) {
        int n = nums.size();
        int zeroCount = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] != 0){
                nums[zeroCount] = nums[i];
                zeroCount++;
            }
        }
        for(int j = zeroCount; j<n; j++){
            nums[j] = 0;
        }
          
    }
};

int main(){
    vector<int> arr = {1, 2, 0, -3, 0, -4, 5, 0, 6};
    class Solution s1;
    s1.moveZeroes(arr);
  
    return 0;
}