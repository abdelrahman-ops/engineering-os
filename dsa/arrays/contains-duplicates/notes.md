BRUTE FORCE

Code:
bool containsDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            for (int j = i+1; i < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
Time:
O(N^2)

Space:
O(1)

Why:
for space as How much additional memory do I need as N increases? we only need the same variable i or j which are constant sized variables
for time complexity it is N^2 because we have 2 loops nested and each taking n time

OPTIMIZED

Code:
bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for(int num : nums){
            if (seen.count(num))
            {
                return true;
            }
            else{
                seen.insert(num);
            }
            
        }
        return false;
    }
Time:
O(N)

Space:
O(N)

Why:
for time: it is one for loop going through all n once so taking n time
for space: we insert the numbers in the array with n so the set is getting bigger and worst case it takes all the numbers in the array

TRADEOFF

Why is the second solution better? because we reduced the time taking to execute by square going from N^2 to N is major optimization 
What did we sacrifice to make it faster? we had to make the space taking N which cose us more space in memory to handel the algoritm

