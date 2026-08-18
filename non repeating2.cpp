#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    string s;

    cout << "Enter a string: ";
    cin >> s;

    unordered_map<char, int> freq;

    // Count frequency
    for(int i = 0; i < s.length(); i++) {
        freq[s[i]]++;
    }

    // Find first non-repeating character
    for(int i = 0; i < s.length(); i++) {

        if(freq[s[i]] == 1) {
            cout << "First non-repeating character: " << s[i];
            return 0;
        }
    }

    cout << "No non-repeating character";

    return 0;
}
