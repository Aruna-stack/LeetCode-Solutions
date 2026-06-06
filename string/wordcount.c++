#include<iostream>
#include<string>
using namespace std;

int lengthOfLastWord(string s){
    int i = s.size()-1;
    while(i>=0 && s[i]==' '){
        i--;
    }
    int len=0;
    while(i>=0 && s[i]!=' '){
        len++;
        i--;
    }
    return len;
}
    

int main(){
    string s = "    luffy is still joyboy     ";
    int len = lengthOfLastWord(s);
    cout<<"The length is: "<<len<<endl;
   return 0;
}