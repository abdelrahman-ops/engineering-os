# 📝 Array ADT: Engineering & Complexity Audit Notes

Comprehensive notes, conceptual audits, and detailed Big-$O$ complexity derivations for the Custom Dynamic Array implementation in C++.

---

## 📊 Summary Complexity Audit Table

| Operation | Best Case | Worst Case | Auxiliary Space | Key Reason |
| :--- | :---: | :---: | :---: | :--- |
| **`Fill()`** | $\mathcal{O}(N)$ | $\mathcal{O}(N)$ | $\mathcal{O}(1)$ | Loops and processes $N$ elements (where $N = \text{number of elements filled}$) |
| **`Display()`** | $\mathcal{O}(N)$ | $\mathcal{O}(N)$ | $\mathcal{O}(1)$ | Traverses all active elements ($N = \text{length}$) |
| **`Search()`** | $\mathcal{O}(1)$ | $\mathcal{O}(N)$ | $\mathcal{O}(1)$ | Best case finds element at index `0`; worst case scans entire array |
| **`Append()`** | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ | Direct write at `items[length]` without loops or resizing |
| **`Insert()`** | $\mathcal{O}(1)$ | $\mathcal{O}(N)$ | $\mathcal{O}(1)$ | Best case inserts at end (`index = length`); worst case inserts at `0` (shifts $N$ elements) |
| **`Delete()`** | $\mathcal{O}(1)$ | $\mathcal{O}(N)$ | $\mathcal{O}(1)$ | Best case deletes last element (`index = length - 1`); worst case deletes `0` (shifts $N - 1$ elements) |
| **`Enlarge()`** | $\mathcal{O}(N)$ | $\mathcal{O}(N)$ | $\mathcal{O}(\text{newSize})$ | Allocates a new heap array of `newSize` and copies existing $N$ elements |
| **`Merge()`** | $\mathcal{O}(N + M)$ | $\mathcal{O}(N + M)$ | $\mathcal{O}(N + M)$ | Allocates a new array of capacity $(\text{size}_1 + \text{size}_2)$ and copies all elements |

---

## 🎯 Conceptual Deep Dive & Audit Q&A

### 1. `length` vs. `size` (Capacity)
* **`size` (Capacity)**: Total physical memory slots allocated on the heap (`new int[arr_size]`).
* **`length` (Logical Size)**: Number of valid, populated elements currently stored in the array.
* **Key Principle**: `length` changes **only as elements are successfully added or removed**, never merely when an operation starts.

---

### 2. Primary Memory vs. Auxiliary Space
* **Primary Memory (Input/State)**: Memory already belonging to the data structure or inputs.
* **Auxiliary Space**: *Additional / temporary* memory allocated during the execution of an algorithm or method.
* **Why `Merge()` is $\mathcal{O}(N + M)$ Auxiliary Space**:
  Even though both arrays already have existing memory allocated, `Merge()` allocates `new int[newSize]`. This allocates a brand new memory block proportional to $(N + M)$ before releasing old memory.

---

### 3. Detailed Operation Analysis

#### 🔹 `Append()` — Why is it strictly $\mathcal{O}(1)$?
* Look at the implementation:
  ```cpp
  void Append(int item) {
      if (length < size) {
          items[length] = item;
          length++;
      }
  }
  ```
* It directly accesses `items[length]` by offset arithmetic and assigns the value. No elements are scanned or shifted.
* **Time**: $\mathcal{O}(1)$ best and worst.
* **Space**: $\mathcal{O}(1)$ auxiliary space.

#### 🔹 `Display()` — Why does it depend on `length`, not `size`?
* The loop runs:
  ```cpp
  for (int i = 0; i < length; i++)
  ```
* If `size = 1,000,000` but `length = 5`, `Display()` iterates **5 times**, not 1,000,000 times.
* Complexity is strictly bounded by active elements: $\mathcal{O}(N)$ where $N = \text{length}$.

#### 🔹 `Insert()` & `Delete()` — Best vs. Worst Cases
* **`Insert(index, item)`**:
  * **Best Case $\mathcal{O}(1)$**: Inserting at index `length` requires 0 loop iterations (appends to next slot).
  * **Worst Case $\mathcal{O}(N)$**: Inserting at index `0` forces all $N$ existing elements to shift right by one index.
* **`Delete(index)`**:
  * **Best Case $\mathcal{O}(1)$**: Deleting index `length - 1` requires 0 shifts (decrements `length--`).
  * **Worst Case $\mathcal{O}(N)$**: Deleting index `0` shifts all remaining $N - 1$ elements left.

#### 🔹 `Enlarge(newSize)` & `Merge(other)`
* **`Enlarge()`**: Allocates `new int[newSize]`, copies $N = \text{length}$ elements ($\mathcal{O}(N)$ time), frees old array with `delete[]`, and sets `items` pointer.
* **`Merge()`**:
  * Combines calling array ($N$ elements) with `other` ($M$ elements).
  * Copies both into a new buffer of capacity $(\text{size}_1 + \text{size}_2)$.
  * Time: $\mathcal{O}(N + M)$.
  * Auxiliary Space: $\mathcal{O}(N + M)$ due to new heap allocation.
  * **C++ Best Practice**: Passing `const Array& other` by reference avoids the copy constructor and prevents double-free crashes when destructors run on temporary copies.

---

## 💡 Key Engineering Takeaways

1. **Complexity depends on what grows**: Never assume an operation is $\mathcal{O}(N)$ just because it operates on an array; check whether a loop actually runs and what variable controls its upper bound.
2. **Auxiliary space measures new allocations**: Allocating a new buffer in `Merge` or `Enlarge` counts as $\mathcal{O}(\text{allocated size})$ auxiliary space, even if old buffers are deleted afterward.
3. **Safety first in dynamic memory**: Always pass objects by `const &` when copying is not needed, and pair every `new[]` with a `delete[]` in the destructor.
