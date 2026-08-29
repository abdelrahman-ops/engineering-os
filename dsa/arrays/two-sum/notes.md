# [Two Sum](https://leetcode.com/problems/two-sum/)

You are given an array of integers `nums` and an integer `target`, return ​\*indices of the two numbers such that they add up to `target`\*​.

You may assume that each input would have ​***exactly* one solution**​, and you may not use the *same* element twice.

You can return the answer in any order.

**Example 1:**

```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```

**Example 2:**

```
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

**Example 3:**

```
Input: nums = [3,3], target = 6
Output: [0,1]
```

**Constraints:**

- `2 <= nums.length <= 10<sup>4</sup>`
- `-10<sup>9</sup> <= nums[i] <= 10<sup>9</sup>`
- `-10<sup>9</sup> <= target <= 10<sup>9</sup>`
- **Only one valid answer exists.**

**Follow-up: ​**Can you come up with an algorithm that is less than `O(n<sup>2</sup>)` time complexity?

---

I had 3 approaches to solve this problem:

1. **Brute Force → O(N^2) time and O(1) space**

   - To loop over the array then check the check the complement of each element from the target → `search = target - nums[i]` here subtract the current number from the target.

   - Then search with the `'search'` variable in the array by a `for loop`

   - If found then return the `i , j` as the index of the elements sum the `target`

2. **Checking ALL Pairs**

   - <span style="color: rgb(15, 17, 21);">Take an element and add it to its next and check if it equals the target and if not okay then take that i+1 and add it to i+2 and so on all in same loop ( not done)</span>

3. **Hash Map O(N) time and O(N) space**

   - Same idea of 1 but with using the `unordered_map<int, int> map;`
   - But instead of another for loop use:

     ```cpp
     numMap.find(complement) != numMap.end()
     ```

     ### 1. `numMap.find(complement)`

     This searches for `complement` as a key in the unordered_map.
     - If found: Returns an iterator pointing to that key-value pair

     - If not found: Returns `numMap.end()` (an iterator pointing to the end)

     ### 2. `!= numMap.end()`

     This checks if the find operation was successful:
     - `true` = complement was found in the map

     - `false` = complement was NOT found

     ### 3. `return {numMap[complement], i};`

     If complement exists:
     - `numMap[complement]` gives us the value (the index where that number was stored)

     - `i` is the current index

     - Return both as a vector

     ### 4. `numMap[nums[i]] = i;`

     Store the current number and its index for future lookups:
     - Key: `nums[i]` (the number itself)

     - Value: `i` (its index)

The brute-force solution repeatedly searches the array for the

complement of the current element.

The repeated search is the bottleneck.

Instead of searching the array every time, use an unordered_map

to remember previously seen values and their indices.

This converts the inner O(N) search into an average O(1) hash

lookup.

Therefore:

Brute Force:

O(N²) time + O(1) space

Hash Map:

O(N) average time + O(N) space

Tradeoff:

We use additional memory to reduce repeated work.