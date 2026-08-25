#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // SOLUTION 1: Using a set to track seen numbers
        // for(int i = 0; i < nums.size(); i++){
        //     for(int j = i+1; j<nums.size();j++){
        //         if(nums[i] == nums[j]){
        //             return true;
        //         }
        //     }
        // }
        // return false;

        // SOLUTION 2: Using a set to track seen numbers
        unordered_set<int> seen;
        for(int num : nums){
            if(seen.count(num)){
                return true;
            } else {
                seen.insert(num);
            }
        }
        return false;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4};
    if (solution.containsDuplicate(nums)) {
        cout << "Contains duplicate" << endl;
    } else {
        cout << "No duplicates" << endl;
    }
    return 0;
}