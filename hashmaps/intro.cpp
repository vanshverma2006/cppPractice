#include <iostream>
#include <unordered_map>
using namespace std;

int firstUniqueChar(string s) {
    unordered_map<char, int> freq;

    // Count frequency of each character
    for (char c : s) {
        freq[c]++;
    }

    // Find first character with frequency 1
    for (int i = 0; i < s.size(); i++) {
        if (freq[s[i]] == 1) {
            return i;
        }
    }

    return -1;
}
bool anagram(string s1,string s2){
        unordered_map<char,int> f1;
        unordered_map<char,int> f2;
        for (int c:s1){
            f1[c]++;
        }
        for (int c:s2){
            f2[c]++;
        }
}

int main() {
    string s;
    cin >> s;

    int result = firstUniqueChar(s);
    cout << result << endl;

    return 0;
}