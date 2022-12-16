#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str);

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin >> s;
    }
    return 0;
}

string reverseWord(string str){
    
  //Your code here
  int num = s.length();
  for(int i = 0;i<(num-1)/2;i++){
      swap(i,num);
  }
}