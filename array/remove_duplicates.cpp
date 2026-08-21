#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> seen;
        int index = 0;
        for(int c:nums){
            if(seen.find(c) == seen.end()){
                seen.insert(c);
            nums[index] = c;
            index++;
            }
        }
    return index;
  }

};
int main(){
    vector<int> arr = {3, 5, 6, 2, 1, 9, 55, 34, 1, 3, 4, 5, 1};
    int n = arr.size();
    class Solution s1;
    cout<<s1.removeDuplicates(arr);
    return 0;
}