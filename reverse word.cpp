#include<iostream>
using namespace std;

int main(){
string s="i love coding";
int start=0;

for(int i=0;i<=s.length();i++){
   if(i==s.length()||s[i]==' '){
    int left=start;
    int right=i-1;

while(left<right){
char temp=s[left];
s[left]=s[right];
s[right]=temp;

left++;
right--;
}
start=i+1;
}
}
cout<<s;
return 0;
}
