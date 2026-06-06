#include<iostream>
#include<string>
using namespace std;

string addBinary(string a, string b){
    int var1 = stoi(a, nullptr, 2);
    int var2 = stoi(b, nullptr, 2);
    int res = var1+var2;
    string result = "";
    if(res == 0){
        result = to_string(res);
    }
    while(res > 0){
           result = to_string(res % 2) + result;
                res = res/2;
             }
   return result;
    
}

int main(){
    string a = "0";
    string b = "0";
    string binary = addBinary(a, b);
    cout<<binary<<endl;
}