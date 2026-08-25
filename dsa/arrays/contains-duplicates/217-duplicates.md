# [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate/description/)

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:

* Input: nums = [1,2,3,1]
* Output: true
* Explanation:
* The element 1 occurs at the indices 0 and 3.

Example 2:

* Input: nums = [1,2,3,4]
* Output: false
* Explanation:
* All elements are distinct.

Example 3:

* Input: nums = [1,1,1,3,3,4,3,2,4,2]

#### Output: true

---

### Approach:

- loop through the array to get each element nums[i]
- then with this each element loop again to compare it with the rest of the elements `nums[j]`
- check if `nums[i] == nums[j]` and `i != j` then return true else false
- why `i!= j`: because we want to check if the same element appears at different indices, not the same index

---

### Time Complexity:

`O(n^2)`

---

### Why:

because we have a nested loop, where n is the number of elements in the array. The outer loop runs `n` times, and for each iteration of the outer loop, the inner loop also runs up to `n` times in the worst case.

---

### Space Complexity:

`O(1)`

---

### Why:

How much additional memory does the algorithm need as `n` grows?
because we have the variable nums and the loop variables i and j, which take up constant space regardless of the size of the input array

---

### Could I solve it differently?

Iterate through the array while maintaining a set of values already seen. Before inserting each value, check whether it already exists in the set. With average O(1) hash lookup, processing all `n` elements takes **O(n)** average time. In the worst case, the set can contain `n` elements, so additional space is ​**O(n)**​.

---

