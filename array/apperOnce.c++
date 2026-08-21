#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    int apperOnceNum(vector<int>& arr){
        int n = arr.size();
        int Xor = 0;
        for(int i = 0; i<n; i++){//T.C is O(N), S.C is O(1)
            Xor ^= arr[i];
        }
        return Xor;

    }
};

int main(){
    vector<int> num = {2,1,2,1,3,3,4};
    Solution s1;
    cout<<s1.apperOnceNum(num)<<endl;
    return 0;
}