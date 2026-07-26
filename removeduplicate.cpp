#include<iostream>
using namespace std;

int main(){
string s="aaabbbbccc";
bool visited[256]={false};
string ans = "";

    for(int i = 0; i < s.length(); i++)
    {
        if(visited[s[i]] == false)
        {
            ans += s[i];
            visited[s[i]] = true;
        }
    }

    cout << "After removing duplicates: " << ans;

    return 0;
}
