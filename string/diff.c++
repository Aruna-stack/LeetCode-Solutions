#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = 0;//if result 'a'^'a'=0
        for(auto c : t){
            result ^= c;//result = 0^'a'^'b'^'c'^'e'^'d'^'f'
        }
        for(auto c: s){
            result ^= c;//result = (0^'a'^'b'^'c'^'e'^'d'^'f')^'a'^'b'^'c'^'d'^'e'
        }
        return result;
     }
};
int main(){
    string s = "abcde";
    string t = "abcedf";
    Solution s1;
    cout<<"The difference is: "<<s1.findTheDifference(s, t);
}