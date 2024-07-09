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
            result += abs( (customers[i][1] + currentTime - customers[i][0]) / size );
            cout << "res: " << abs( (customers[i][1] + currentTime - customers[i][0]) / size ) << endl;
            currentTime += customers[i][1];
        }
        return result;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<vector<int>> customers = {{5,2},{5,4},{10,3},{20,1}};
    double result = s.averageWaitingTime(customers);
    cout << result << endl;
    return 0;
}
