#include <iostream>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t){
        if (s.size() != t.size())
        {
            return false;
        }
        
        int freq[26] = {0}; 

        for (char c : s)
        {
            freq[c - 'a']++;
        }
        for (char c : t)
        {
            freq[c - 'a']--;
        }
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};


int main(int argc, const char** argv) {
    Solution sol;
    cout << sol.isAnagram("anagram", "nagaram") << endl; // Output: 1 (true)
    cout << sol.isAnagram("rat", "car") << endl; // Output: 0 (false)
    return 0;
}