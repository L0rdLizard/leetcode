#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    double averageWaitingTime(vector<vector<int>> &customers)
    {
        double totalWaitTime = 0;
        int currentTime = 0;
        
        for (int i = 0; i < customers.size(); i++)
        {
            if (currentTime < customers[i][0])
            {
                currentTime = customers[i][0];
            }
            currentTime += customers[i][1];
            totalWaitTime += currentTime - customers[i][0];
        }
        
        return totalWaitTime / customers.size();
    }
};


int main(int argc, char const *argv[])
{
    Solution s;
    vector<vector<int>> customers = {{2,3},{6,3},{7,5},{11,3},{15,2},{18,1}};
    double result = s.averageWaitingTime(customers);
    cout << result << endl;
    return 0;
}
