# Types of Time Functions

A reference guide for common time complexity classes, their formal names, and mathematical function examples ordered from fastest to slowest growth rate.

---

## 📊 Growth Rate Hierarchy

$$O(1) < O(\log n) < O(n) < O(n \log n) < O(n^2) < O(n^3) < O(2^n) < O(n!)$$

| Complexity | Name | Growth Speed |
| :--- | :--- | :--- |
| **`O(1)`** | Constant | Fastest / Ideal |
| **`O(log n)`** | Logarithmic | Extremely Scalable |
| **`O(n)`** | Linear | Proportional |
| **`O(n log n)`** | Linearithmic | Efficient Sorting |
| **`O(n²)`** | Quadratic | Slow for Large $n$ |
| **`O(n³)`** | Cubic | Very Slow |
| **`O(2ⁿ)`** | Exponential | Intractable |
| **`O(n!)`** | Factorial | Slowest / Brute-force |

---

## 1. `O(1)` — Constant

- $f(n) = 2$
- $f(n) = 5$
- $f(n) = 5000$

> **Conclusion:** All 3 are **$= O(1)$**

---

## 2. `O(log n)` — Logarithmic

- $f(n) = \log(n)$
- $f(n) = 2 \log(n)$
- $f(n) = 5000 \log(n)$

> **Conclusion:** All 3 are **$= O(\log n)$**

---

## 3. `O(n)` — Linear

- $f(n) = 2n + 3$
- $f(n) = 500n + 700$
- $f(n) = \frac{n}{5000} + 6$

> **Conclusion:** All 3 are **$= O(n)$**

---

## 4. `O(n log n)` — Linearithmic

- $f(n) = n \log(n)$
- $f(n) = 2n \log(n)$
- $f(n) = 5000n \log(n)$

> **Conclusion:** All 3 are **$= O(n \log n)$**

---

## 5. `O(n²)` — Quadratic

- $f(n) = n^2$
- $f(n) = 2n^2$
- $f(n) = 5000n^2$

> **Conclusion:** All 3 are **$= O(n^2)$**

---

## 6. `O(n³)` — Cubic

- $f(n) = n^3$
- $f(n) = 2n^3$
- $f(n) = 5000n^3$

> **Conclusion:** All 3 are **$= O(n^3)$**

---

## 7. `O(2ⁿ)` — Exponential

- $f(n) = 2^n$
- $f(n) = 2 \times 2^n$
- $f(n) = 5000 \times 2^n$

> **Conclusion:** All 3 are **$= O(2^n)$**

---

## 8. `O(n!)` — Factorial

- $f(n) = n!$
- $f(n) = 2 \times n!$
- $f(n) = 5000 \times n!$

> **Conclusion:** All 3 are **$= O(n!)$**