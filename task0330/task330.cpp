#include <vector>
#include <iostream>
class Solution {
public:
    int minPatches(std::vector<int>& nums, int n) {
        short result = 0;
        long long sum = 0;
        nums.push_back(n);
        if(nums[0] != 1){
            nums.insert(nums.begin(), 1);
            result++;
        }
        
        for (short i = 0; i < nums.size() - 1; i++) {
            sum+=nums[i];
            if (sum > n) return result;
            if ( (nums[i + 1] - sum) > 1 ){
                result++;
                nums.insert(nums.begin() + i + 1, sum + 1);
            }
            
        }
        return result;
    }
};

class Solution {
public:
    int minPatches(std::vector<int>& nums, int n) {
        int result = 0;
        long long sum = 0;
        int i = 0;

        while (sum < n) {
            if (i < nums.size() && nums[i] <= sum + 1) {
                sum += nums[i];
                i++;
            } else {
                sum += sum + 1;
                result++;
            }
        }

        return result;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::vector<int> nums = {1,7,21,31,34,37,40,43,49,87,90,92,93,98,99};
    int n = 12;
    int result = s.minPatches(nums, n);
    std::cout << result << std::endl;
    return 0;
}
