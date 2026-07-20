#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  string s="silent";
  string t="listen";

  if(s.length()!=t.length()){
    cout<<"this is not valid anagram";
    return 0;
  }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());


  if (s == t)
        cout << "Valid Anagram";
    else
        cout << "Not Anagram";

    return 0;
}