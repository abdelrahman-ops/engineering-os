# [242. Valid Anagram](https://leetcode.com/problems/valid-anagram/description/)

Given two strings s and t, return true if t is an anagram of s, and false otherwise.
#### Example 1:
- Input: s = "anagram", t = "nagaram"
- Output: true
#### Example 2:
- Input: s = "rat", t = "car"
- Output: false
---
Constraints:
1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
---


Approach:
1. check if the length of both `s` and `t` is equal as if not then they can't be `anagram`
2. the problem asks for only lowercase so we have 26 chars to compare between

index:  0 1 2 3 4 ... 25
letter: a b c d e ... z
count:  ? ? ? ? ? ... ?

### How can i turn a character such as `a` into an array index ?
--> using ASCII values
as 
`'a'` - `'a'` = ?
`'b'` - `'a'` = ?
`'c'` - `'a'` = ?
this can give me the index
3. we create a frequency arry with the index to be as pre-described and store the count of the letters we then compare between `s` and `t` if s has `'a'` (count is 1) and t also has it then(count = -1) total of 0 and each frequecny must be 0 at the end and if not then they are not anagram

1. Check lengths
2. Create frequency array
3. Iterate through the strings
4. Update frequencies
5. Determine what condition means "not an anagram"
6. Return true/false
____________________

Time Complexity: O(N)
____________________

Why:
we have 3 loops 
- loop through s → O(N)
- loop through t → O(N)
- loop through 26 → O(26)
so O(N) + O(N) + O(26) = O(N) + O(N) + O(1) = O(N)

____________________

Space Complexity: O(1)
____________________

Why: 
`int freq[26];`

The array does not grow with N. It's always 26 integers O(26) = O(1)
____________________

Could I solve it differently? no, this is the most optimal solution for this problem as we are using a frequency array to store the count of the letters and then compare between them.
____________________