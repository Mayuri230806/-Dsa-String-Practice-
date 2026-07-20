#include<iostream>
using namespace std;

int main(){
  string s="hello";
  int n = s.length(); 
  int left=0;
  int right=n-1;
 
  while(left<right){
    swap(s[left],s[right]);   //2 ptr approach to reverse a string 
    left++;
    right--;
  }
 
  for(int i=0;i<n;i++){
    cout<<"reverse string: "<< s <<endl;
  }
   return 0;

}