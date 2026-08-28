# 📝 Array ADT: Engineering & Complexity Audit Notes

Comprehensive notes, conceptual audits, and detailed Big-$O$ complexity derivations for the Custom Dynamic Array implementation in C++.

---

## 📊 Summary Complexity Audit Table

| Operation | Best Case | Worst Case | Auxiliary Space | Key Reason |
| :--- | :---: | :---: | :---: | :--- |
| **`Fill()`** | $\mathcal{O}(N)$ | $\mathcal{O}(N)$ | $\mathcal{O}(1)$ | Performs one iteration for each requested element ($N = \text{number of elements filled}$) |
| **`Display()`** | $\mathcal{O}(N)$ | $\mathcal{O}(N)$ | $\mathcal{O}(1)$ | Traverses all active elements ($N = \text{length}$) |
| **`Search()`** | $\mathcal{O}(1)$ | $\mathcal{O}(N)$ | $\mathcal{O}(1)$ | Best case finds element at index `0`; worst case scans entire array |
| **`Append()`** | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ | Direct write at `items[length]` without loops or resizing |
| **`Insert()`** | $\mathcal{O}(1)$ | $\mathcal{O}(N)$ | $\mathcal{O}(1)$ | Best case inserts at end (`index = length`); worst case inserts at `0` (shifts $N$ elements) |
| **`Delete()`** | $\mathcal{O}(1)$ | $\mathcal{O}(N)$ | $\mathcal{O}(1)$ | Best case deletes last element (`index = length - 1`); worst case deletes `0` (shifts $N - 1$ elements) |
| **`Enlarge()`** | $\mathcal{O}(N)$ | $\mathcal{O}(N)$ | $\mathcal{O}(\text{newSize})$ | Allocates a new heap array of `newSize` and copies existing $N$ elements |
| **`Merge()`** | $\mathcal{O}(N + M)$ | $\mathcal{O}(N + M)$ | $\mathcal{O}(\text{size}_1 + \text{size}_2)$ | Copies active elements ($\mathcal{O}(\text{length}_1 + \text{length}_2)$) into newly allocated buffer |

---

## 🎯 Conceptual Deep Dive & Audit Q&A

### 1. `length` (Logical Elements) vs. `size` (Allocated Capacity)
* **`size` (Capacity)**: Total physical memory slots allocated on the heap (`new int[arr_size]`).
* **`length` (Logical Size)**: Number of valid, populated elements currently stored in the array.
* **Key Principle**: `length` represents how many elements are currently stored. It changes **only as elements are successfully added or removed**, never merely when an operation starts.

---

### 2. Primary Memory vs. Auxiliary Space
* **Primary Memory (Input/State)**: Memory already belonging to the data structure or inputs.
* **Auxiliary Space**: *Additional / temporary* memory allocated during the execution of an algorithm or method.
* **Why `Merge()` is $\mathcal{O}(\text{size}_1 + \text{size}_2)$ Auxiliary Space**:
  Even though both arrays already possess allocated memory, `Merge()` allocates `new int[newSize]`. This allocates a brand new memory block proportional to the combined capacity before releasing old memory.

---

### 3. Detailed Operation Analysis

#### 🔹 `Fill()` — What does $N$ represent?
* The method asks the user for the number of items to populate and executes exactly that many iterations.
* If $N$ elements are requested, it performs $N$ iterations.
* **Time**: $\mathcal{O}(N)$ where $N = \text{number of filled elements}$.
* **Space**: $\mathcal{O}(1)$ auxiliary space.

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
* It directly accesses `items[length]` by pointer arithmetic and assigns the value. No elements are scanned or shifted.
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

#### 🔹 `Enlarge(newSize)` & `Merge(other)` — Capacity vs. Elements
* **`Enlarge()`**: Allocates `new int[newSize]`, copies $N = \text{length}$ elements ($\mathcal{O}(N)$ time), frees old array with `delete[]`, and updates `items` pointer.
* **`Merge()`**:
  * **Time Complexity**: $\mathcal{O}(\text{length}_1 + \text{length}_2)$ — only copies the actual valid elements.
  * **Space Complexity**: $\mathcal{O}(\text{size}_1 + \text{size}_2)$ — allocates memory based on total capacities.
  * *(Simplified to $\mathcal{O}(N + M)$ when modeling general input sizes).*

---

## 💡 Key Engineering Takeaways

1. **Complexity depends on what grows**: Never assume an operation is $\mathcal{O}(N)$ just because it operates on an array; inspect the exact loop bounds and state variables controlling execution.
2. **Auxiliary space measures new allocations**: Allocating a new buffer in `Merge` or `Enlarge` counts as $\mathcal{O}(\text{allocated capacity})$ auxiliary space, even if old buffers are deleted afterward.
3. **Pass large objects by `const&`**: Pass large objects by `const&` when the function only needs to read them and does not need to make a copy.
4. **⚠️ Dynamic Memory Ownership (Rule of Three — Flagged for Later)**: Because `Array` owns raw heap memory (`int* items` with `delete[] items`), a default shallow copy constructor would produce dangling pointers and double-free errors. Passing by `const Array&` safely avoids unintended copies.
