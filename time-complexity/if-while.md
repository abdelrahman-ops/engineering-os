# How to analyze a loop if it is a While Loop or a condition statement?

## While Loop

Let's analyze the while loop in the following examples:

---

### Example 1

```c
int i = 0;           // --> 1
while (i < n) {      // --> n+1
    stmt;            // --> n
    i++;             // --> n
}
```

**Analysis:**
- $f(n) = 3n + 2$
- Time Complexity: **`O(n)`**

---

### Example 2

```c
int a = 1;           // --> 1
while (a < b) {      // --> n+1
    stmt;            // --> n
    a = a * 2;       // --> n
}
```

**Trace:**
- $a = 1$
- $1 \times 2 = 2$
- $2 \times 2 = 2^2$
- $2^2 \times 2 = 2^3$
- $\dots$
- $2^k$

It will terminate when $a \ge b$:
- $2^k \ge b$
- $k = \log_2 b$

**Conclusion:**
- Total time complexity is **`O(log b)`** aka **`O(log n)`**

---

### Example 3

```c
i = 1;               // --> 1
k = 1;               // --> 1
while (k < n) {      // --> n+1
    stmt;            // --> n
    k = k + i;       // --> n
    i++;             // --> n
}
```

**Trace:**
- $k = 1, i = 1$
- $k = 1 + 1, i = 2$
- $k = 2 + 2, i = 3$
- $k = 2 + 2 + 3, i = 4$
- $k = 2 + 2 + 3 + 4, i = 5$
- $k = 2 + 2 + 3 + 4 + 5, i = 6$
- $\dots$
- $k = 1 + 2 + 3 + 4 + \dots + m, i = m$
- $k = \frac{m(m+1)}{2}$
- $\dots$

It terminates when $k \ge n$:
- $\frac{m(m+1)}{2} = n$
- $m = \sqrt{n}$

**Conclusion:**
- Total time complexity is **`O(sqrt(n))`**

---

### Example 4

```c
while (m != n) {
    if (m > n) 
        m = m - n;
    else 
        n = n - m;
}
```

**Conclusion:**
- It will take **`O(n)`** max and **`O(1)`** min

---

### Example 5

```c
Algorithm Test(n)
{
    if (n < 5)
    {
        printf("%d", n);   // -------------> 1 (Best Case)
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("%d", i); // ---------> n (Worst Case)
        }
    }
}
```

**Conclusion:**
- **Best Case:** `O(1)`
- **Worst Case:** `O(n)`