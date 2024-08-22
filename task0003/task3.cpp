#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int maxLength = 0;
        int charIndex[128] = {0};

        for (int i = 0; i < s.length(); i++) {
            start = max(charIndex[s[i]], start);
            maxLength = max(maxLength, i - start + 1);
            charIndex[s[i]] = i + 1;
        }

        return maxLength;
    }
};

int main(int argc, char const *argv[])
{
    string s = "banana";
    Solution solution;
    cout << solution.lengthOfLongestSubstring(s) << endl;
    return 0;
}
