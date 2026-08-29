# 🧠 DSA Curriculum & Execution Engine

> **Canonical DSA Execution Queue for the 90-Day Engineer OS Program.**
> 
> 🎯 **Do not randomly select problems.**
> Solve problems in the prescribed sequence unless Engineer OS explicitly assigns a remediation or reinforcement problem.

---

## 📋 DSA Execution Rules

1. **Strict Sequence**: Solve problems in curriculum order.
2. **No Skipping**: Do not skip a **CORE** problem because it looks easy.
3. **No Distractions**: Do not jump ahead to random problems just because they seem interesting.
4. **Mandatory Documentation**: Every solved problem must have:
   * Problem Statement & Constraints
   * Brute-Force Approach & Bottleneck
   * Optimized Approach & Invariant Reasoning
   * Rigorous Time & Space Complexity Proofs ($O$)
   * Clean, Idiomatic C++ Implementation
   * Key Pattern Takeaways
5. **Knowledge Gaps**: If a problem exposes a knowledge gap, record it immediately in the problem's `notes.md`.
6. **Adaptive Reinforcement**: Engineer OS may assign targeted reinforcement problems before unlocking the next topic.
7. **Challenge Calibration**: Hard / Challenge problems are optional and will not block topic progression.

---

## 📊 Curriculum Progress

| # | Topic | Core | Completed | Status |
| :-: | :--- | :---: | :---: | :---: |
| 01 | **Arrays & Hashing** | 9 | 3 | 🟡 In Progress |
| 02 | **Two Pointers** | 5 | 0 | 🔒 Locked |
| 03 | **Sliding Window** | 6 | 0 | 🔒 Locked |
| 04 | **Stack / Monotonic Stack** | 6 | 0 | 🔒 Locked |
| 05 | **Binary Search** | 7 | 0 | 🔒 Locked |
| 06 | **Linked Lists** | 8 | 0 | 🔒 Locked |
| 07 | **Trees / BST** | 10 | 0 | 🔒 Locked |
| 08 | **Tries** | 3 | 0 | 🔒 Locked |
| 09 | **Heap / Priority Queue** | 6 | 0 | 🔒 Locked |
| 10 | **Backtracking** | 8 | 0 | 🔒 Locked |
| 11 | **Graphs** | 11 | 0 | 🔒 Locked |
| 12 | **1-D Dynamic Programming** | 9 | 0 | 🔒 Locked |
| 13 | **Greedy** | 5 | 0 | 🔒 Locked |
| 14 | **Intervals** | 5 | 0 | 🔒 Locked |
| 15 | **Advanced Graphs** | 5 | 0 | 🔒 Locked |
| 16 | **2-D Dynamic Programming** | 7 | 0 | 🔒 Locked |
| 17 | **Bit Manipulation** | 5 | 0 | 🔒 Locked |
| 18 | **Math & Geometry** | 5 | 0 | 🔒 Locked |

---

## 🧭 Active Problem Queue

1. [x] **[LeetCode #1 — Two Sum](https://leetcode.com/problems/two-sum/)** — `Easy` | [Solution](arrays/two-sum/two.cpp) • [Notes](arrays/two-sum/notes.md)
2. [x] **[LeetCode #217 — Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)** — `Easy` | [Solution](arrays/contains-duplicates/duplicates.cpp) • [Notes](arrays/contains-duplicates/217-duplicates.md)
3. [x] **[LeetCode #242 — Valid Anagram](https://leetcode.com/problems/valid-anagram/)** — `Easy` | [Solution](arrays/anagram/anagram.cpp) • [Notes](arrays/anagram/anagram.md)
4. [ ] **[LeetCode #49 — Group Anagrams](https://leetcode.com/problems/group-anagrams/)** — `Medium` ⬅️ **NEXT TARGET**
5. [ ] **[LeetCode #347 — Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)** — `Medium`
6. [ ] **[LeetCode #238 — Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)** — `Medium`
7. [ ] **[LeetCode #128 — Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)** — `Medium`
8. [ ] **[LeetCode #36 — Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)** — `Medium`
9. [ ] **[NeetCode #271 — Encode and Decode Strings](https://neetcode.io/problems/string-encode-and-decode)** — `Medium`
10. [ ] **[LeetCode #121 — Best Time to Buy & Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)** — `Easy`

---

## 🧱 Data Structure Implementations

Custom object-oriented implementations of fundamental data structures built from scratch in C++:

| Data Structure | Key Operations | Implementation | Documentation | Status |
| :--- | :--- | :---: | :---: | :---: |
| **Dynamic Array (Array ADT)** | `Fill`, `Display`, `Search`, `Append`, `Insert`, `Delete`, `Enlarge`, `Merge`, `Max`, `Min`, `Sum`, `Reverse` | [Array.cpp](arrays/array/Array.cpp) | [README.md](arrays/array/README.md) • [notes.md](arrays/array/notes.md) | ✅ Complete |

---

## 🗺️ Complete 90-Day Problem Sequence

### 01. Arrays & Hashing
| # | Problem | Difficulty | Pattern | Type | Status |
| :-: | :--- | :-: | :--- | :-: | :-: |
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | `Easy` | Hash Map / Complement Lookup | 🔵 CORE | ✅ Solved |
| 217 | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | `Easy` | Hash Set | 🔵 CORE | ✅ Solved |
| 242 | [Valid Anagram](https://leetcode.com/problems/valid-anagram/) | `Easy` | Frequency Counting / Hash Map | 🔵 CORE | ✅ Solved |
| 49 | [Group Anagrams](https://leetcode.com/problems/group-anagrams/) | `Medium` | Sorted String / Frequency Tuple Key | 🔵 CORE | ⏳ Up Next |
| 347 | [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) | `Medium` | Frequency Map + Bucket Sort / Min-Heap | 🔵 CORE | 🔒 Queued |
| 238 | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | `Medium` | Prefix & Suffix Products | 🔵 CORE | 🔒 Queued |
| 128 | [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/) | `Medium` | Hash Set Sequence Start Search | 🔵 CORE | 🔒 Queued |
| 36 | [Valid Sudoku](https://leetcode.com/problems/valid-sudoku/) | `Medium` | Grid / Row / Column Hash Sets | 🔵 CORE | 🔒 Queued |
| 271 | [Encode and Decode Strings](https://neetcode.io/problems/string-encode-and-decode) | `Medium` | Length Prefix Delimiter Encoding | 🔵 CORE | 🔒 Queued |

---

### 02. Two Pointers
| # | Problem | Difficulty | Pattern | Type | Status |
| :-: | :--- | :-: | :--- | :-: | :-: |
| 125 | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) | `Easy` | Converging Pointers | 🔵 CORE | 🔒 Locked |
| 167 | [Two Sum II — Sorted Array](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) | `Medium` | Sorted Array Elimination | 🔵 CORE | 🔒 Locked |
| 15 | [3Sum](https://leetcode.com/problems/3sum/) | `Medium` | Sorting + Two Pointers Loop | 🔵 CORE | 🔒 Locked |
| 11 | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/) | `Medium` | Greedy Shrinking Window | 🔵 CORE | 🔒 Locked |
| 42 | [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/) | `Hard` | Two Pointers Max Boundary Tracking | 🔵 CORE | 🔒 Locked |

---

### 03. Sliding Window
| # | Problem | Difficulty | Pattern | Type | Status |
| :-: | :--- | :-: | :--- | :-: | :-: |
| 121 | [Best Time to Buy & Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | `Easy` | Running Minimum / Single Pass | 🔵 CORE | 🔒 Locked |
| 3 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | `Medium` | Dynamic Window + Hash Set | 🔵 CORE | 🔒 Locked |
| 424 | [Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/) | `Medium` | Dynamic Window + Max Frequency | 🔵 CORE | 🔒 Locked |
| 567 | [Permutation in String](https://leetcode.com/problems/permutation-in-string/) | `Medium` | Fixed Size Frequency Window | 🔵 CORE | 🔒 Locked |
| 76 | [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/) | `Hard` | Shrinking Window + Count Matching | 🔵 CORE | 🔒 Locked |
| 239 | [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/) | `Hard` | Monotonic Deque Window | ⚫ CHALLENGE | 🔒 Locked |

---

### 04. Stack / Monotonic Stack
| # | Problem | Difficulty | Pattern | Type | Status |
| :-: | :--- | :-: | :--- | :-: | :-: |
| 20 | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | `Easy` | LIFO Bracket Matching | 🔵 CORE | 🔒 Locked |
| 155 | [Min Stack](https://leetcode.com/problems/min-stack/) | `Medium` | Auxiliary Min Tracking | 🔵 CORE | 🔒 Locked |
| 150 | [Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/) | `Medium` | Postfix Operand Evaluation | 🔵 CORE | 🔒 Locked |
| 739 | [Daily Temperatures](https://leetcode.com/problems/daily-temperatures/) | `Medium` | Monotonic Decreasing Stack | 🔵 CORE | 🔒 Locked |
| 853 | [Car Fleet](https://leetcode.com/problems/car-fleet/) | `Medium` | Position Sorting + Time Stack | 🔵 CORE | 🔒 Locked |
| 84 | [Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/) | `Hard` | Monotonic Stack Boundary Extension | ⚫ CHALLENGE | 🔒 Locked |

---

### 05. Binary Search
| # | Problem | Difficulty | Pattern | Type | Status |
| :-: | :--- | :-: | :--- | :-: | :-: |
| 704 | [Binary Search](https://leetcode.com/problems/binary-search/) | `Easy` | Standard $O(\log n)$ Range Division | 🔵 CORE | 🔒 Locked |
| 74 | [Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/) | `Medium` | 2D Flattened Index Mapping | 🔵 CORE | 🔒 Locked |
| 875 | [Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/) | `Medium` | Binary Search on Answer Space | 🔵 CORE | 🔒 Locked |
| 153 | [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) | `Medium` | Mid vs Right Boundary Comparison | 🔵 CORE | 🔒 Locked |
| 33 | [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) | `Medium` | Sorted Half Identification | 🔵 CORE | 🔒 Locked |
| 981 | [Time Based Key-Value Store](https://leetcode.com/problems/time-based-key-value-store/) | `Medium` | Hash Map + Timestamp Binary Search | 🔵 CORE | 🔒 Locked |
| 4 | [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) | `Hard` | Partition Binary Search | ⚫ CHALLENGE | 🔒 Locked |

---

### 06. Linked Lists
*(Prerequisite: Implement custom Singly Linked List with `Insert`, `Delete`, `Search`, `Reverse`)*

| # | Problem | Difficulty | Pattern | Type | Status |
| :-: | :--- | :-: | :--- | :-: | :-: |
| 206 | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | `Easy` | Three-Pointer In-Place Reversal | 🔵 CORE | 🔒 Locked |
| 21 | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | `Easy` | Dummy Head Pointer Traversal | 🔵 CORE | 🔒 Locked |
| 141 | [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/) | `Easy` | Floyd's Fast & Slow Pointers | 🔵 CORE | 🔒 Locked |
| 143 | [Reorder List](https://leetcode.com/problems/reorder-list/) | `Medium` | Find Middle + Reverse + Merge | 🔵 CORE | 🔒 Locked |
| 19 | [Remove Nth Node From End](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) | `Medium` | Gap Pointers Traversal | 🔵 CORE | 🔒 Locked |
| 2 | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | `Medium` | Node-by-Node Carry Addition | 🔵 CORE | 🔒 Locked |
| 138 | [Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/) | `Medium` | Interweaving Nodes / Hash Map | 🔵 CORE | 🔒 Locked |
| 146 | [LRU Cache](https://leetcode.com/problems/lru-cache/) | `Medium` | Hash Map + Doubly Linked List | 🔵 CORE | 🔒 Locked |

---

### 07. Trees / BST
*(Prerequisite: Implement custom Binary Tree with DFS/BFS recursive & iterative traversals)*

| # | Problem | Difficulty | Pattern | Type | Status |
| :-: | :--- | :-: | :--- | :-: | :-: |
| 226 | [Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/) | `Easy` | Postorder / Subtree Swap | 🔵 CORE | 🔒 Locked |
| 104 | [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | `Easy` | Depth First Search / Level Order | 🔵 CORE | 🔒 Locked |
| 100 | [Same Tree](https://leetcode.com/problems/same-tree/) | `Easy` | Simultaneous Tree Traversal | 🔵 CORE | 🔒 Locked |
| 572 | [Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/) | `Easy` | Subtree Identity Matching | 🔵 CORE | 🔒 Locked |
| 102 | [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/) | `Medium` | Breadth First Search (Queue) | 🔵 CORE | 🔒 Locked |
| 98 | [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/) | `Medium` | Min/Max Valid Range Propagation | 🔵 CORE | 🔒 Locked |
| 230 | [Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/) | `Medium` | Inorder Traversal Property | 🔵 CORE | 🔒 Locked |
| 235 | [Lowest Common Ancestor of a BST](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/) | `Medium` | BST Split Decision | 🔵 CORE | 🔒 Locked |
| 105 | [Construct Binary Tree from Preorder & Inorder](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) | `Medium` | Divide and Conquer / Index Map | 🔵 CORE | 🔒 Locked |
| 124 | [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/) | `Hard` | Postorder Path Max Contribution | ⚫ CHALLENGE | 🔒 Locked |

---

### 08. Tries
| # | Problem | Difficulty | Pattern | Type | Status |
| :-: | :--- | :-: | :--- | :-: | :-: |
| 208 | [Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/) | `Medium` | TrieNode Tree Structure | 🔵 CORE | 🔒 Locked |
| 211 | [Design Add & Search Words Data Structure](https://leetcode.com/problems/design-add-and-search-words-data-structure/) | `Medium` | Trie + Wildcard DFS Backtracking | 🔵 CORE | 🔒 Locked |
| 212 | [Word Search II](https://leetcode.com/problems/word-search-ii/) | `Hard` | 2D Grid DFS + Trie Pruning | ⚫ CHALLENGE | 🔒 Locked |

---

### 09. Heap / Priority Queue
| # | Problem | Difficulty | Pattern | Type | Status |
| :-: | :--- | :-: | :--- | :-: | :-: |
| 215 | [Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/) | `Medium` | Min-Heap / QuickSelect | 🔵 CORE | 🔒 Locked |
| 1046 | [Last Stone Weight](https://leetcode.com/problems/last-stone-weight/) | `Easy` | Max-Heap Simulation | 🔵 CORE | 🔒 Locked |
| 973 | [K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/) | `Medium` | Max-Heap of Size $K$ | 🔵 CORE | 🔒 Locked |
| 703 | [Kth Largest Element in a Stream](https://leetcode.com/problems/kth-largest-element-in-a-stream/) | `Easy` | Running Min-Heap of Size $K$ | 🔵 CORE | 🔒 Locked |
| 621 | [Task Scheduler](https://leetcode.com/problems/task-scheduler/) | `Medium` | Max-Heap + Wait Queue | 🔵 CORE | 🔒 Locked |
| 295 | [Find Median from Data Stream](https://leetcode.com/problems/find-median-from-data-stream/) | `Hard` | Two Heaps (Max-Heap + Min-Heap) | 🔵 CORE | 🔒 Locked |

---

### 10. Backtracking
| # | Problem | Difficulty | Pattern | Type | Status |
| :-: | :--- | :-: | :--- | :-: | :-: |
| 78 | [Subsets](https://leetcode.com/problems/subsets/) | `Medium` | Decision Tree (Include/Exclude) | 🔵 CORE | 🔒 Locked |
| 39 | [Combination Sum](https://leetcode.com/problems/combination-sum/) | `Medium` | Unbounded Pick with Deduplication | 🔵 CORE | 🔒 Locked |
| 46 | [Permutations](https://leetcode.com/problems/permutations/) | `Medium` | Element Swapping / Visited Set | 🔵 CORE | 🔒 Locked |
| 90 | [Subsets II](https://leetcode.com/problems/subsets-ii/) | `Medium` | Sorted Array Skip Duplicates | 🔵 CORE | 🔒 Locked |
| 40 | [Combination Sum II](https://leetcode.com/problems/combination-sum-ii/) | `Medium` | Single Use + Skip Duplicates | 🔵 CORE | 🔒 Locked |
| 79 | [Word Search](https://leetcode.com/problems/word-search/) | `Medium` | 2D Grid DFS with In-Place Visited | 🔵 CORE | 🔒 Locked |
| 131 | [Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/) | `Medium` | Partition DFS + Palindrome Check | 🔵 CORE | 🔒 Locked |
| 17 | [Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/) | `Medium` | Digit-to-Char Tree Expansion | 🔵 CORE | 🔒 Locked |

---

### 11. Graphs
*(Prerequisite: Implement Adjacency List, BFS, DFS, and Visited Sets)*

| # | Problem | Difficulty | Pattern | Type | Status |
| :-: | :--- | :-: | :--- | :-: | :-: |
| 200 | [Number of Islands](https://leetcode.com/problems/number-of-islands/) | `Medium` | 2D Grid BFS / DFS | 🔵 CORE | 🔒 Locked |
| 695 | [Max Area of Island](https://leetcode.com/problems/max-area-of-island/) | `Medium` | Connected Component Area Sum | 🔵 CORE | 🔒 Locked |
| 133 | [Clone Graph](https://leetcode.com/problems/clone-graph/) | `Medium` | Node Hash Map + BFS/DFS Copy | 🔵 CORE | 🔒 Locked |
| 994 | [Rotting Oranges](https://leetcode.com/problems/rotting-oranges/) | `Medium` | Multi-Source BFS | 🔵 CORE | 🔒 Locked |
| 417 | [Pacific Atlantic Water Flow](https://leetcode.com/problems/pacific-atlantic-water-flow/) | `Medium` | Reverse Reachability DFS | 🔵 CORE | 🔒 Locked |
| 130 | [Surrounded Regions](https://leetcode.com/problems/surrounded-regions/) | `Medium` | Boundary-Connected Traversal | 🔵 CORE | 🔒 Locked |
| 207 | [Course Schedule](https://leetcode.com/problems/course-schedule/) | `Medium` | Topological Sort / Cycle Detection | 🔵 CORE | 🔒 Locked |
| 210 | [Course Schedule II](https://leetcode.com/problems/course-schedule-ii/) | `Medium` | Kahn's Algorithm / In-Degree BFS | 🔵 CORE | 🔒 Locked |
| 261 | [Graph Valid Tree](https://leetcode.com/problems/graph-valid-tree/) | `Medium` | Union-Find / Cycle + Component Count | 🔵 CORE | 🔒 Locked |
| 323 | [Number of Connected Components](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/) | `Medium` | Disjoint Set Union (DSU) | 🔵 CORE | 🔒 Locked |
| 684 | [Redundant Connection](https://leetcode.com/problems/redundant-connection/) | `Medium` | Union-Find Cycle Edge Detection | 🔵 CORE | 🔒 Locked |

---

### 12. 1-D Dynamic Programming
| # | Problem | Difficulty | Pattern | Type | Status |
| :-: | :--- | :-: | :--- | :-: | :-: |
| 70 | [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/) | `Easy` | Fibonacci Sequence State Transition | 🔵 CORE | 🔒 Locked |
| 746 | [Min Cost Climbing Stairs](https://leetcode.com/problems/min-cost-climbing-stairs/) | `Easy` | Running Min Step Transition | 🔵 CORE | 🔒 Locked |
| 198 | [House Robber](https://leetcode.com/problems/house-robber/) | `Medium` | Rob / Skip Max Transition | 🔵 CORE | 🔒 Locked |
| 213 | [House Robber II](https://leetcode.com/problems/house-robber-ii/) | `Medium` | Circular House Subarray Split | 🔵 CORE | 🔒 Locked |
| 5 | [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/) | `Medium` | Center Expansion / 2D DP Table | 🔵 CORE | 🔒 Locked |
| 91 | [Decode Ways](https://leetcode.com/problems/decode-ways/) | `Medium` | 1-Digit / 2-Digit Valid Combinations | 🔵 CORE | 🔒 Locked |
| 322 | [Coin Change](https://leetcode.com/problems/coin-change/) | `Medium` | Unbounded Knapsack Min Coins | 🔵 CORE | 🔒 Locked |
| 300 | [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/) | `Medium` | $O(n^2)$ DP / $O(n \log n)$ Binary Search | 🔵 CORE | 🔒 Locked |
| 416 | [Partition Equal Subset Sum](https://leetcode.com/problems/partition-equal-subset-sum/) | `Medium` | 0/1 Knapsack Target Sum | 🔵 CORE | 🔒 Locked |

---

### 13. Greedy
| # | Problem | Difficulty | Pattern | Type | Status |
| :-: | :--- | :-: | :--- | :-: | :-: |
| 53 | [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) | `Medium` | Kadane's Algorithm | 🔵 CORE | 🔒 Locked |
| 55 | [Jump Game](https://leetcode.com/problems/jump-game/) | `Medium` | Greedy Max Reachable Index | 🔵 CORE | 🔒 Locked |
| 45 | [Jump Game II](https://leetcode.com/problems/jump-game-ii/) | `Medium` | BFS Window Jump Level | 🔵 CORE | 🔒 Locked |
| 134 | [Gas Station](https://leetcode.com/problems/gas-station/) | `Medium` | Total vs Current Gas Deficit | 🔵 CORE | 🔒 Locked |
| 846 | [Hand of Straights](https://leetcode.com/problems/hand-of-straights/) | `Medium` | Map Frequency Consecutive Grouping | 🔵 CORE | 🔒 Locked |

---

### 14. Intervals
| # | Problem | Difficulty | Pattern | Type | Status |
| :-: | :--- | :-: | :--- | :-: | :-: |
| 57 | [Insert Interval](https://leetcode.com/problems/insert-interval/) | `Medium` | Non-overlapping Merge Partition | 🔵 CORE | 🔒 Locked |
| 56 | [Merge Intervals](https://leetcode.com/problems/merge-intervals/) | `Medium` | Start Time Sort + Overlap Merge | 🔵 CORE | 🔒 Locked |
| 435 | [Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/) | `Medium` | Greedy End Time Interval Scheduling | 🔵 CORE | 🔒 Locked |
| 252 | [Meeting Rooms](https://leetcode.com/problems/meeting-rooms/) | `Easy` | Adjacent Interval Overlap Check | 🔵 CORE | 🔒 Locked |
| 253 | [Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/) | `Medium` | Min-Heap Active Rooms / Chronological Events | 🔵 CORE | 🔒 Locked |

---

### 15. Advanced Graphs
| # | Problem | Difficulty | Pattern | Type | Status |
| :-: | :--- | :-: | :--- | :-: | :-: |
| 743 | [Network Delay Time](https://leetcode.com/problems/network-delay-time/) | `Medium` | Dijkstra's Shortest Path | 🔵 CORE | 🔒 Locked |
| 1584 | [Min Cost to Connect All Points](https://leetcode.com/problems/min-cost-to-connect-all-points/) | `Medium` | Prim's / Kruskal's MST | 🔵 CORE | 🔒 Locked |
| 787 | [Cheapest Flights Within K Stops](https://leetcode.com/problems/cheapest-flights-within-k-stops/) | `Medium` | Bellman-Ford / BFS Price Layering | 🔵 CORE | 🔒 Locked |
| 778 | [Swim in Rising Water](https://leetcode.com/problems/swim-in-rising-water/) | `Hard` | Dijkstra Grid Min-Max Path | 🔵 CORE | 🔒 Locked |
| 269 | [Alien Dictionary](https://leetcode.com/problems/alien-dictionary/) | `Hard` | Lexicographical Topological Sort | ⚫ CHALLENGE | 🔒 Locked |

---

### 16. 2-D Dynamic Programming
| # | Problem | Difficulty | Pattern | Type | Status |
| :-: | :--- | :-: | :--- | :-: | :-: |
| 62 | [Unique Paths](https://leetcode.com/problems/unique-paths/) | `Medium` | 2D Grid Path Combinatorics | 🔵 CORE | 🔒 Locked |
| 1143 | [Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/) | `Medium` | 2D String Matching Matrix | 🔵 CORE | 🔒 Locked |
| 309 | [Stock with Cooldown](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/) | `Medium` | State Machine DP (Buy, Sell, Cooldown) | 🔵 CORE | 🔒 Locked |
| 518 | [Coin Change II](https://leetcode.com/problems/coin-change-ii/) | `Medium` | Unbounded Knapsack Combinations | 🔵 CORE | 🔒 Locked |
| 494 | [Target Sum](https://leetcode.com/problems/target-sum/) | `Medium` | Subset Sum Transformation | 🔵 CORE | 🔒 Locked |
| 97 | [Interleaving String](https://leetcode.com/problems/interleaving-string/) | `Medium` | 2D Matching Prefix DP | 🔵 CORE | 🔒 Locked |
| 72 | [Edit Distance](https://leetcode.com/problems/edit-distance/) | `Medium` | Levenshtein Distance Matrix | 🔵 CORE | 🔒 Locked |

---

### 17. Bit Manipulation
| # | Problem | Difficulty | Pattern | Type | Status |
| :-: | :--- | :-: | :--- | :-: | :-: |
| 136 | [Single Number](https://leetcode.com/problems/single-number/) | `Easy` | XOR Self-Cancellation | 🔵 CORE | 🔒 Locked |
| 191 | [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/) | `Easy` | `n & (n - 1)` Bit Clearing | 🔵 CORE | 🔒 Locked |
| 338 | [Counting Bits](https://leetcode.com/problems/counting-bits/) | `Easy` | DP Bit Shift Relation | 🔵 CORE | 🔒 Locked |
| 190 | [Reverse Bits](https://leetcode.com/problems/reverse-bits/) | `Easy` | Bitwise Shift & Masking | 🔵 CORE | 🔒 Locked |
| 268 | [Missing Number](https://leetcode.com/problems/missing-number/) | `Easy` | XOR Index Matching / Gauss Sum | 🔵 CORE | 🔒 Locked |

---

### 18. Math & Geometry
| # | Problem | Difficulty | Pattern | Type | Status |
| :-: | :--- | :-: | :--- | :-: | :-: |
| 48 | [Rotate Image](https://leetcode.com/problems/rotate-image/) | `Medium` | Transpose + Horizontal Reflection | 🔵 CORE | 🔒 Locked |
| 54 | [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/) | `Medium` | Layer Boundary Shrinking | 🔵 CORE | 🔒 Locked |
| 73 | [Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/) | `Medium` | First Row/Col Marker Optimization | 🔵 CORE | 🔒 Locked |
| 202 | [Happy Number](https://leetcode.com/problems/happy-number/) | `Easy` | Floyd's Cycle Detection on Sums | 🔵 CORE | 🔒 Locked |
| 50 | [Pow(x, n)](https://leetcode.com/problems/powx-n/) | `Medium` | Binary Exponentiation ($O(\log n)$) | 🔵 CORE | 🔒 Locked |
