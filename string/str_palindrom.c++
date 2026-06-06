#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string s){
    string result = "";
    int j=0;
    while(j<s.size()){
        if(s[j] >= 'a' && s[j]<='z' || s[j] >= 'A' && s[j]<='Z'){
            if(s[j] >= 'A' && s[j]<='Z'){
                s[j]=tolower(s[j]);
            }
            result+=s[j];
        }
        j++;
    }
    s = result;
    string rev = "";
    int i = s.size()-1;
    while(i>=0){
        rev += s[i];
        i--;
    }
    if(s != rev){
        return 0;
    }
    else{
        return 1;
    }

}

int main(){
    string s = "A man, a plan, a canal: Panama";
    int res = isPalindrome(s);
    cout<<res<<endl;
    
}