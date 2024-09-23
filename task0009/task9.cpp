#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
using namespace std;

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if (x < 0) {
//             return false;
//         }
//         if (x / 10 == 0) {
//             return true;
//         }
//         int count = static_cast<int>(std::log10(x));

//         while (count >= 0) {
//             cout << "count: " << count << endl;
//             int first = x / std::pow(10, count);
//             int last = x % 10;
//             cout << "first: " << first << endl;
//             cout << "last: " << last << endl;

//             if (first != last) {
//                 return false;
//             }

//             if (count == 0) {
//                 break;
//             }
//             x = (x / 10) % static_cast<int>(std::pow(10, count - 1));
//             cout << "x: " << x << endl << endl;
//             count -= 2;
//         }

//         return true;
//     }
// };

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long long reversed = 0;
        long long temp = x;

        while (temp != 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }

        return (reversed == x);
    }
};

void test(int x) {
    cout << (x / 10) % 100 << endl;
    cout << x % 10 << endl;
    cout << x / 10 << endl;
}

int main(int argc, char const *argv[])
{   
    test(10);
    Solution s;
    cout << s.isPalindrome(0) << endl;
    return 0;
}
