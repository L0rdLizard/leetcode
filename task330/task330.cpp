#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> factor(int n)
    {
        vector<int> del;
        del.push_back(1);
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                del.push_back(i);
                del.push_back(n / i);
            }
        }
        return del;
    }

    int minPatches(vector<int> &nums, int n)
    {
        int res = 0;
        vector<int> del = factor(n);
        for (int i = 0; i < del.size(); i++)
        {
            if (find(nums.begin(), nums.end(), del[i]) == nums.end())
            {
                nums.push_back(del[i]);
                res++;
            }
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> del;
    del.push_back(1);
    del.push_back(2);
    del.push_back(31);
    del.push_back(33);
    vector<int> fact = Solution().factor(20);
    for (int i = 0; i < fact.size(); i++)
    {
        cout << fact[i] << " ";
    }
    cout << endl << Solution().minPatches(del, 20) << endl;
    return 0;
}
