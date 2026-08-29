#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // SOL 1 => O(N^2)
        // for (int i = 0; i < nums.size(); i++) {
        //     int search = target - nums[i];
        //     for (int j = i + 1; j < nums.size(); j++) {
        //         if (search == nums[j]) {
        //             return {i, j};
        //         }
        //     }
        // }
        

        // SOL 2 => O(N)

        unordered_map<int,int> numMap;

        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end())
            {
                return{numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }
        

        return {};
    }
};


int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};
    vector<int> result = solution.twoSum(nums, 5);
    
    // Print result
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}