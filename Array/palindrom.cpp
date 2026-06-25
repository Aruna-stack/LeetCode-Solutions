#include<iostream>
#include <climits>
using namespace std;

class Solution{
    public:
    bool isPalindrome(int x) {
                long long n = x;
        long long rev = 0;
        //if(n > INT_MAX || n < INT_MIN) return 0;
        if( n<0){
            n=n*-1;
            while(n>0){
            rev = (rev*10)+ n%10;
            n = n/10;
        }

        if(rev > INT_MAX || rev < INT_MIN) return 0;
        if(-1*rev == n){
            return 1;
        }
        else{
            return 0;
        }
        
    }
    else{
        while(x>0){
            rev = (rev*10)+ x%10;
            x = x/10;
        }
        if(rev > INT_MAX || rev < INT_MIN) return 0;
        if(rev == n){
             return 1;
        }
        else{
            return 0;
        }
    }
        
}

};

int main(){
    Solution p1;
    cout<<p1.isPalindrome(45654);
}