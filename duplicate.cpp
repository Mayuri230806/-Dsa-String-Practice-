#include <iostream>
using namespace std;

int main() {
    string s="aabc";
    int freq[256]={0};
    
    for(int i=0;i<s.length();i++){
        
        freq[s[i]]++;
    }
    cout<<"the duplicate char are ->";
     for(int i = 0; i < s.length(); i++)
    {
        if(freq[s[i]]>1){
            cout<<s[i]<<" ";
            freq[s[i]] = 0; 
    }
}
    return 0;
}
