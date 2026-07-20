 #include<iostream>
 using namespace std;

 int main(){
 string s="aabbbcc";
 string ans="";
 int count=1;

 for(int i=0;i<s.length();i++){
     if(i<s.length()&&s[i]==s[i+1]){
         count++;
    }
     else{
        ans+=s[i];
         if(count > 1)
         ans += to_string(count); 
         count = 1;
         } }
         cout << ans; 
         return 0;
 }
