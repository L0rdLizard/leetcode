#include <vector>
#include <iostream>
class Solution {
public:
    int minPatches(std::vector<int>& nums, int n) {
        int result = 0;
        long long sum = 0;
        nums.push_back(n);
        if(nums[0] != 1){
            nums.insert(nums.begin(), 1);
            result++;
        }
        
        for (int i = 0; i < nums.size() - 1; i++) {
            sum+=nums[i];
            
            if ( (nums[i + 1] - sum) > 1 ){
                result++;
                nums.insert(nums.begin() + i + 1, sum + 1);
            }
            if (nums[i + 1] > n) return result;
        }
        return result;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::vector<int> nums = {1, 5, 10};
    int n = 20;
    int result = s.minPatches(nums, n);
    std::cout << result << std::endl;
    return 0;
}
