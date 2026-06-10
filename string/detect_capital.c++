#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for(auto c: word){
            if(isupper(c)){
                count++;
            }
        }
        if(count == word.length()) return true;
        if(count == 0) return true;
        if(count == 1 && isupper(word[0])) return true;

        return false;
  }
};
int main(){
    string word{"Hello"};
    Solution w1;
    cout<<w1.detectCapitalUse(word);
}