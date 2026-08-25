# Time Complexity & Asymptotic Analysis

A comprehensive reference covering the mathematical foundations, asymptotic notations ($O$, $\Omega$, $\Theta$), practical code analysis rules, and complexity derivation techniques.

---

## 📑 Table of Contents

### Part I: Core Fundamentals & Notations
1. [What Is Time Complexity?](#1-what-is-time-complexity) — Definition of growth behavior, input size ($n$), and $T(n)$.
2. [Why Do We Ignore Constants?](#2-why-do-we-ignore-constants) — Understanding dominant terms and asymptotic scaling.
3. [The Three Main Asymptotic Notations](#3-the-three-main-asymptotic-notations) — High-level overview of $O$, $\Omega$, and $\Theta$.
4. [Big-O — Upper Bound](#4-big-o--upper-bound) — Asymptotic ceiling, tightest upper bound, and age analogy.
5. [Big-Omega — Lower Bound](#5-big-omega--lower-bound) — Asymptotic floor and minimum growth guarantees.
6. [Big-Theta — Tight Bound](#6-big-theta--tight-bound) — Tight sandwich bounds ($O + \Omega$).
7. [Big-O, Big-Omega, and Big-Theta Together](#7-big-o-big-omega-and-big-theta-together) — Comparing all three bounds on a single function.
8. [Tightness Matters](#8-tightness-matters) — The informativeness hierarchy of asymptotic bounds.

### Part II: Cases vs Notations & Growth Rates
9. [Best Case, Average Case, Worst Case](#9-best-case-average-case-worst-case) — Input scenario analysis using Linear Search.
10. [A Very Important Distinction](#10-a-very-important-distinction) — Why Big-O is not mathematically synonymous with worst-case.
11. [Complexity Is About Growth, Not Seconds](#11-complexity-is-about-growth-not-seconds) — Growth rates vs real-world wall-clock execution time.
12. [Common Growth Rates](#12-common-growth-rates) — Standard complexity hierarchy ($O(1)$ to $O(n!)$).

### Part III: Practical Code Analysis
13. [Reading Code and Finding Complexity](#13-reading-code-and-finding-complexity) — Single, sequential, and nested loops.
14. [Logarithmic Complexity](#14-logarithmic-complexity) — Repeated halving/doubling patterns and binary search.
15. [Sequential vs Nested Loops](#15-sequential-vs-nested-loops) — Addition vs multiplication rules.
16. [Constants and Lower-Order Terms](#16-constants-and-lower-order-terms) — Rules for simplifying algebraic runtime expressions.
17. [A Practical Complexity Analysis Process](#17-a-practical-complexity-analysis-process) — Step-by-step 5-step framework to analyze any algorithm.
18. [A Better Mental Model](#18-a-better-mental-model) — Intuitive framework for asymptotic thinking.
19. [Example: Printing an Array](#19-example-printing-an-array) — Complete walkthrough from code to $\Theta(n)$.

### Part IV: Summary & Self-Assessment
20. [The Key Rules to Memorize](#20-the-key-rules-to-memorize) — 14 essential complexity rules.
21. [Quick Self-Test](#21-quick-self-test) — 7 practice conceptual and code questions with answers.
22. [Final Mental Picture](#22-final-mental-picture) — End-to-end visual summary diagram.

---

## 1. What Is Time Complexity?

Time complexity describes how the amount of work performed by an algorithm grows as the input size grows.

It does not primarily describe:
- The exact number of seconds an algorithm takes
- The speed of a particular computer
- A fixed ratio between input size and execution time

Instead, we care about the growth behavior of the algorithm.

We usually write:
`T(n)`

where:
- `n` = input size
- `T(n)` = amount of work / running time as a function of `n`

### Example

Suppose an algorithm processes every element of an array:

```text
for each element in the array:
    do constant work
```

If the array contains `n` elements, the loop executes approximately `n` times.

Therefore:
`T(n) = Θ(n)`

If the input doubles:
- `n` → `n`
- `2n` → approximately `2n` work
- `10n` → approximately `10n` work

The important thing is the growth pattern, not the exact number of milliseconds.

---

## 2. Why Do We Ignore Constants?

Suppose an algorithm takes:
`T(n) = 5n + 20`

For very large `n`, the `5n` term dominates the constant `20`.

Therefore:
`T(n) = Θ(n)`

Similarly:
`T(n) = 100n + 5000`

is also:
`Θ(n)`

Both algorithms are linear in their asymptotic growth.

This is why asymptotic analysis generally ignores:
- Constant multipliers
- Lower-order terms

### Examples

- `3n + 10` → `Θ(n)`
- `100n + 5000` → `Θ(n)`
- `n² + n + 10` → `Θ(n²)`
- `5n³ + 20n²` → `Θ(n³)`

---

## 3. The Three Main Asymptotic Notations

There are three important ways to describe asymptotic bounds:

| Notation | Meaning |
| :--- | :--- |
| `O(g(n))` | Upper bound |
| `Ω(g(n))` | Lower bound |
| `Θ(g(n))` | Tight bound |

The most important mental model is:
- **`O`** → upper bound
- **`Ω`** → lower bound
- **`Θ`** → both upper and lower bound

> [!NOTE]
> **Do not memorize:**
> - `O` = worst case
> - `Ω` = best case
> - `Θ` = average case
>
> That is an oversimplification. Best case, average case, and worst case are separate concepts from `O`, `Ω`, and `Θ`.

---

## 4. Big-O — Upper Bound

### Definition

Big-O describes an asymptotic upper bound.

Informally:
`T(n) = O(g(n))` means that, after the input becomes sufficiently large, the runtime does not grow faster than a constant multiple of `g(n)`.

Think:
> **`O` → ceiling / upper bound**

### Example

Suppose:
`T(n) = n`

Then all of these are technically true:
- `T(n) = O(n)`
- `T(n) = O(n²)`
- `T(n) = O(n³)`
- `T(n) = O(2ⁿ)`

Why? Because:
- `n ≤ n²`
- `n ≤ n³`
- `n ≤ 2ⁿ`

for sufficiently large `n`.

However, they are not equally useful. The tightest useful upper bound is:
`O(n)`

So when someone asks:
> *"What is the Big-O of this algorithm?"*

we normally give the most informative/tight asymptotic upper bound.

### Age Analogy

Suppose Bob's age is `x` and we know:
`x ≤ 130`

Then it is also technically true that:
- `x ≤ 1000`
- `x ≤ 1,000,000`

But `x ≤ 130` is much more informative.

The same intuition applies to Big-O:
If `T(n) = n`, then `O(n)` is much more informative than `O(n²)`, even though both are technically valid upper bounds.

---

## 5. Big-Omega — Lower Bound

### Definition

Big-Omega describes an asymptotic lower bound.

Informally:
`T(n) = Ω(g(n))` means that, after the input becomes sufficiently large, the runtime grows at least as fast as a constant multiple of `g(n)`.

Think:
> **`Ω` → floor / lower bound**

### Example

Suppose:
`T(n) = n`

Then:
- `T(n) = Ω(n)`
- `T(n) = Ω(log n)`
- `T(n) = Ω(1)`

are all technically true.

But `Ω(n)` is the most informative/tight lower bound.

The important interpretation is:
The runtime cannot asymptotically grow slower than linear.

Avoid thinking:
> *"The algorithm won't be faster than another algorithm."*

Instead think:
> *"This function provides a lower bound on how the runtime grows."*

---

## 6. Big-Theta — Tight Bound

### Definition

Big-Theta describes a tight asymptotic bound.

An algorithm is `Θ(g(n))` when it is both:
- `O(g(n))`
- and `Ω(g(n))`

Therefore:
`Θ(g(n)) = O(g(n)) + Ω(g(n))`

Conceptually:

```text
  Ω(g(n))
     ↓
   T(n)
     ↓
  O(g(n))
```

Both bounds have the same asymptotic growth.

### Example

Suppose:
`T(n) = 3n + 7`

We can say:
- `T(n) = O(n)`
- `T(n) = Ω(n)`
- `T(n) = Θ(n)`

The most precise asymptotic description is:
`Θ(n)`

because the runtime is bounded above and below by linear growth.

---

## 7. Big-O, Big-Omega, and Big-Theta Together

Suppose:
`T(n) = n`

Then:

```text
                Upper bounds
                     ↓
          O(n²), O(n³), O(2ⁿ), ...
                     ↑
                 T(n) = n
                     ↓
               Ω(log n), Ω(1), ...
                Lower bounds
```

The tight bound is:
`Θ(n)`

So:
- `O(n)` → tight upper bound
- `Ω(n)` → tight lower bound
- `Θ(n)` → tight bound

---

## 8. Tightness Matters

There can be many valid upper and lower bounds.

For `T(n) = n`, these are all valid:
- `O(n)`, `O(n²)`, `O(n³)`
- `Ω(n)`, `Ω(log n)`, `Ω(1)`

But `Θ(n)` is the most precise asymptotic description.

A useful hierarchy is:

```text
Less informative
      ↓
    O(2ⁿ)
    O(n³)
    O(n²)
    O(n)       ← useful tight upper bound
    Θ(n)       ← tight overall characterization
    Ω(n)       ← useful tight lower bound
      ↑
More informative
```

The exact ordering here is about how informative the bounds are for this specific function, not about the formal definitions being interchangeable.

---

## 9. Best Case, Average Case, Worst Case

This is a different concept from `O`, `Ω`, and `Θ`.

Consider linear search:

```text
for each element:
    if element == target:
        return
```

There are different possible inputs.

### Best Case

The target is the first element:
`[Target, ...]`

Only one comparison is needed.
- **Best case** = `Θ(1)`

### Worst Case

The target is the last element, or isn't present:
`[..., Target]`
or:
`[..., ...]`  // target absent

We may inspect every element.
- **Worst case** = `Θ(n)`

### Average Case

On average, we may inspect a proportional number of elements.
- **Average case** = `Θ(n)`

### Summary

| Case | Complexity |
| :--- | :--- |
| **Best** | `Θ(1)` |
| **Average** | `Θ(n)` |
| **Worst** | `Θ(n)` |

The words **best / worst / average** describe the **input scenario**.
The symbols **`O` / `Ω` / `Θ`** describe **mathematical bounds**.

---

## 10. A Very Important Distinction

Do not automatically say:
- `O` = worst case
- `Ω` = best case

That shortcut is commonly used in beginner explanations, but it is not mathematically accurate.

For example:
- Worst-case runtime = `Θ(n)`

can be expressed as:
- Worst-case runtime = `O(n)`

and also:
- Worst-case runtime = `Ω(n)`

and therefore:
- Worst-case runtime = `Θ(n)`

The notation tells us about bounds.
The phrase "worst case" tells us which inputs/scenario we are analyzing.

---

## 11. Complexity Is About Growth, Not Seconds

Suppose:
- **Algorithm A**: `T(n) = 2n`
- **Algorithm B**: `T(n) = 100n`

Both are:
`Θ(n)`

Algorithm B may take much longer in practice because its constant factor is larger.
Asymptotic analysis intentionally focuses on the growth pattern.

For example:
`n = 100`
- `A` → 200 units
- `B` → 10,000 units

But if both continue to scale linearly:
- `A` → `Θ(n)`
- `B` → `Θ(n)`

This does not mean they are equally fast in real life. It means they have the same asymptotic growth class.

---

## 12. Common Growth Rates

From generally better scalability to worse scalability:

| Complexity | Common Name | Example |
| :--- | :--- | :--- |
| `O(1)` | Constant | Array indexed access |
| `O(log n)` | Logarithmic | Binary search |
| `O(n)` | Linear | Scan an array |
| `O(n log n)` | Linearithmic | Merge sort |
| `O(n²)` | Quadratic | Simple nested loops |
| `O(n³)` | Cubic | Three nested loops |
| `O(2ⁿ)` | Exponential | Many brute-force subset problems |
| `O(n!)` | Factorial | Brute-force permutations |

These describe how work grows as `n` becomes large.

---

## 13. Reading Code and Finding Complexity

The goal of complexity analysis is eventually to look at code and derive its growth.

### One loop

```cpp
for (int i = 0; i < n; i++) {
    // constant work
}
```

The loop executes `n` times:
`Θ(n)`

### Two sequential loops

```cpp
for (int i = 0; i < n; i++) {
    // work
}

for (int i = 0; i < n; i++) {
    // work
}
```

Total work:
```text
n + n
= 2n
= Θ(n)
```

So sequential loops usually add:
```text
O(n) + O(n)
= O(2n)
= O(n)
```

### Nested loops

```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        // constant work
    }
}
```

The inner loop executes `n` times for every outer iteration:
```text
n × n
= n²
```

Therefore:
`Θ(n²)`

Nested independent loops usually multiply.

---

## 14. Logarithmic Complexity

A common source of `O(log n)` is repeatedly reducing the problem by a constant factor.

For example:
```text
n
n/2
n/4
n/8
n/16
...
1
```

The number of reductions required is approximately:
`log₂(n)`

Therefore:
`Θ(log n)`

Binary search works this way because each comparison approximately halves the remaining search space.

---

## 15. Sequential vs Nested Loops

A useful rule:

### Sequential
`O(n) + O(n)` becomes `O(n)`

### Nested
`O(n) × O(n)` becomes `O(n²)`

> [!NOTE]
> Do not apply this mechanically to every piece of code. Always determine how many times the inner operation actually executes.

---

## 16. Constants and Lower-Order Terms

When finding asymptotic complexity:

### Ignore constants
- `O(5n)` → `O(n)`
- `O(100n²)` → `O(n²)`

### Ignore lower-order terms
- `O(n² + n)` → `O(n²)`
- `O(n³ + n² + n)` → `O(n³)`

The dominant term controls the asymptotic growth.

---

## 17. A Practical Complexity Analysis Process

When given an algorithm, follow this process:

1. **Step 1 — Identify the input size**
   - Ask: *What does `n` represent?*
   - Examples:
     - `n` = number of array elements
     - `n` = number of characters
     - `n` = number of nodes
     - `n` = number of edges

2. **Step 2 — Identify the basic operation**
   - Ask: *What operation is repeatedly being performed?*
   - For example:
     - comparison
     - array access
     - addition
     - function call
     - hash lookup

3. **Step 3 — Count how many times it happens**
   - Determine the number of executions as a function of `n`.

4. **Step 4 — Simplify**
   - Remove constants and lower-order terms.

5. **Step 5 — State the complexity**
   - For example:
     `T(n) = 3n + 5` → `Θ(n)`

---

## 18. A Better Mental Model

When you see `T(n)`, think:
> *"If I increase the input size, how does the amount of work grow?"*

Then:
- **`O(g(n))`** means: *"This growth has an asymptotic upper bound of `g(n)`."*
- **`Ω(g(n))`** means: *"This growth has an asymptotic lower bound of `g(n)`."*
- **`Θ(g(n))`** means: *"This growth is tightly characterized by `g(n)`."*

This is the mental model to carry into DSA.

---

## 19. Example: Printing an Array

Suppose:

```cpp
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}
```

### Analysis

**Input size:**
`n` = number of elements

The loop executes:
`n` times

Each iteration performs constant work.

Therefore:
`T(n) = cn` (for some constant `c`)

So:
`T(n) = Θ(n)`

Therefore it is also:
- `O(n)`
- `Ω(n)`

and technically also:
- `O(n²)`
- `O(n³)`
- `O(2ⁿ)`
- `...`

But `Θ(n)` is the most precise asymptotic characterization.

---

## 20. The Key Rules to Memorize

1. Complexity describes growth as input size increases.
2. `O(g(n))` = asymptotic upper bound.
3. `Ω(g(n))` = asymptotic lower bound.
4. `Θ(g(n))` = tight asymptotic bound.
5. `O`, `Ω`, and `Θ` are not synonyms for worst, best, and average case.
6. Best / average / worst describe different input scenarios.
7. Ignore constant factors in asymptotic analysis.
8. Ignore lower-order terms.
9. Sequential work generally adds.
10. Nested independent work generally multiplies.
11. Repeated halving/doubling often produces `O(log n)`.
12. When possible, prefer the tightest useful bound.
13. Complexity is about growth, not exact execution time.
14. Always define what `n` represents before analyzing an algorithm.

---

## 21. Quick Self-Test

Before moving on, you should be able to answer these without memorizing definitions.

### Question 1
If `T(n) = 5n + 20`, what is the tight asymptotic complexity?
> **Answer:** `Θ(n)`

### Question 2
Is `T(n) = n` also `O(n²)`?
> **Answer:** Yes. But `O(n)` is the tighter and more informative upper bound.

### Question 3
Is `T(n) = n` also `Ω(1)`?
> **Answer:** Yes. But `Ω(n)` is the tighter and more informative lower bound.

### Question 4
What does `Θ(n)` tell you?
> **Answer:** The runtime grows asymptotically linearly: it has both an `O(n)` upper bound and an `Ω(n)` lower bound.

### Question 5
What is the difference between `O(n)` and `Θ(n)`?
> **Answer:** `O(n)` only gives an upper bound. `Θ(n)` says the growth is tightly bounded by `n` from both above and below.

### Question 6
What is the complexity of:
```cpp
for (i = 0; i < n; i++)
    print(i);
```
> **Answer:** `Θ(n)` because the operation happens `n` times.

### Question 7
What is the complexity of:
```cpp
for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
        print(i, j);
```
> **Answer:** `Θ(n²)` because the inner operation executes `n × n = n²` times.

---

## 22. Final Mental Picture

Keep this picture in your head:

```text
                 INPUT SIZE
                     n
                     │
                     ▼
              ┌─────────────┐
              │   Algorithm │
              └─────────────┘
                     │
                     ▼
               Amount of Work
                   T(n)
                     │
                     ▼
            How does it GROW?
                     │
        ┌────────────┼────────────┐
        ▼            ▼            ▼
       O            Θ            Ω
     upper        tight        lower
     bound        bound        bound
```

The central question is always:
> *"As n gets larger, how does the amount of work grow?"*

Once this becomes intuitive, calculating the complexity of actual code becomes much easier.