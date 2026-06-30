#include<iostream>
#include <unordered_map> 
using namespace std;
int main(){
    int n = 11,i;
    int nums[n]={5,5,23,5,7,7,8,2,44,23};
    std::unordered_map<int, int>mpp;
        for(int i=0; i<n;i++){
            mpp[nums[i]]+=1;
        }
        int maxCount = 0, resultKey = -1;
        for(auto it : mpp){
    if(it.second > maxCount){
        maxCount = it.second;     // value (count) track பண்ணு
        resultKey = it.first;     // அதுக்கு corresponding KEY-ஐ store பண்ணு
    }
    
}
cout << "Most frequent element: " << resultKey << " (appeared " << maxCount << " times)" << endl;
}
        
 
 