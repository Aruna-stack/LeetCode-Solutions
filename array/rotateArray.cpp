#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        cout<<k<<endl;
        while(k>0){
            int temp = nums[0];
            nums[0] = nums[n-1];
            for(int i = n-1; i>0; i--){//time complexcity for this code is O(n^2),
                nums[i] = nums[i-1];   //because it rotate whole array for every itration, so it is not possible for worst case
                if(i == 1){
                    nums[i]= temp;
                }
            }
            
            k--;
        }
        for(int i = 0; i<n; i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }
        void rotateArray(vector<int>& arr, int k) {
        int n = arr.size();
         k = k%n;
         reverse(arr, 0, n-1);
         reverse(arr, 0, k-1);
         reverse(arr, k, n-1);
          for(int i = 0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        }
        void reverse(vector<int>& num, int start, int end){//time complexcity for this code is O(n^2),
            int n = num.size();
            while(start<end){
                swap(num[start], num[end]);
                start++;
                end--;
            }
       
    }
};
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    class Solution s1;
    s1.rotate(arr, 54944);
    s1.rotateArray(arr, 54944);
    return 0;
}