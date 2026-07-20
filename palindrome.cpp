#include<iostream>
using namespace std;

int main() {
  // string s="papa";  //this is not a palindrome
  string s="noon";  //this is palindrome
  int n=s.length();
  int left=0;
  int right=n-1;
 
  bool ispalindrome =true;

  while(left<right){
    if(s[left]!=s[right]){
      ispalindrome=false;
      break;
    }
    left++;
    right--;
  }
    if(ispalindrome)
    cout<<"this is palindrome"<<endl;
   else
    cout<<"this is not palindrome";
    }
