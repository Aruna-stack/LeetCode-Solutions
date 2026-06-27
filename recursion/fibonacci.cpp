#include<iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        int cur = 0;
        if(n == 0)return 0;
        else if(n == 1)return 1;
        else{
            int first = 0;
            int secd = 1;
            for(int i = 2; i<=n; i++){
                cur = first+secd;
                first = secd;
                secd = cur;
            }
            return cur;
        }
    }
};
int main(){
    Solution s1;
    cout<<s1.fib(5);
}