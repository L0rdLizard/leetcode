#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    double averageWaitingTime(vector<vector<int>> &customers)
    {
        double result = 0;
        int currentTime = customers[0][0];
        double size = customers.size();
        for (int i = 0; i < size; i++)
        {
            cout << customers[i][1] << " " << currentTime << " " << customers[i][0] << endl;
            if (currentTime < customers[i][0])
            {
                result += customers[i][1] / size;
                cout << "res: " << customers[i][1] / size << endl;
            } else {
                result += (customers[i][1] + currentTime - customers[i][0]) / size;
                cout << "res: " << (customers[i][1] + currentTime - customers[i][0]) / size  << endl;
            }
            // result += abs( (customers[i][1] + currentTime - customers[i][0]) / size );
            // cout << "res: " << (customers[i][1] + currentTime - customers[i][0]) / size  << endl;
            currentTime += customers[i][1];
        }
        return result;
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
