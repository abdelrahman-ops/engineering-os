# 🧱 Dynamic Array ADT Implementation (C++)

A custom object-oriented implementation of a **Dynamic Array (Array Abstract Data Type)** in C++ with heap allocation, bounds checking, and core array operations.

---

## 📌 Features & Supported Operations

| Operation | Method Signature | Description | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :---: | :---: |
| **Initialize** | `Array(int arr_size)` | Allocates heap memory of size `arr_size` | $O(1)$ | $O(n)$ |
| **Fill** | `void Fill()` | Prompts user to populate elements | $O(n)$ | $O(1)$ |
| **Display** | `void Display()` | Prints current array contents | $O(n)$ | $O(1)$ |
| **Linear Search** | `int Search(int key)` | Finds first index of `key` or returns `-1` | $O(n)$ | $O(1)$ |
| **Append** | `void Append(int item)` | Inserts element at the next available slot | $O(1)$ | $O(1)$ |
| **Insert** | `void Insert(int index, int item)` | Shifts elements right and inserts at `index` | $O(n)$ | $O(1)$ |
| **Delete** | `void Delete(int index)` | Removes element at `index` and shifts elements left | $O(n)$ | $O(1)$ |
| **Enlarge** | `void Enlarge(int newSize)` | Allocates larger memory, copies elements, frees old buffer | $O(n)$ | $O(n)$ |
| **Merge** | `void Merge(const Array& other)` | Combines calling array with `other` into a new allocated buffer | $O(n + m)$ | $O(n + m)$ |
| **Destructor** | `~Array()` | Deallocates heap memory via `delete[]` to prevent memory leaks | $O(1)$ | $O(1)$ |

---

## 🔍 Detailed Operation Breakdown

### 1. `Append(int item)`
* **Logic**: Places `item` at `items[length]` if `length < size`, then increments `length++`.
* **Complexity**: $\mathcal{O}(1)$ time, $\mathcal{O}(1)$ auxiliary space.

### 2. `Insert(int index, int item)`
* **Logic**: 
  1. Validates `length < size` and `0 <= index <= length`.
  2. Shifts all elements from `length - 1` down to `index` one position to the right:
     ```cpp
     for (int i = length; i > index; i--) {
         items[i] = items[i - 1];
     }
     ```
  3. Inserts `item` at `items[index]` and increments `length++`.
* **Complexity**: $\mathcal{O}(n)$ time (worst case when inserting at index 0), $\mathcal{O}(1)$ auxiliary space.

### 3. `Delete(int index)`
* **Logic**:
  1. Validates `0 <= index < length`.
  2. Shifts all elements after `index` one position to the left:
     ```cpp
     for (int i = index + 1; i < length; i++) {
         items[i - 1] = items[i];
     }
     ```
  3. Decrements `length--`.
* **Complexity**: $\mathcal{O}(n)$ time (worst case when deleting index 0), $\mathcal{O}(1)$ auxiliary space.

### 4. `Enlarge(int newSize)`
* **Logic**:
  1. Validates `newSize > size`.
  2. Allocates a new heap array: `int* newItems = new int[newSize]`.
  3. Deep copies all `length` elements from `items` to `newItems`.
  4. Releases old heap memory: `delete[] items`.
  5. Updates pointer `items = newItems` and capacity `size = newSize`.
* **Complexity**: $\mathcal{O}(n)$ time, $\mathcal{O}(n)$ auxiliary space.

### 5. `Merge(const Array& other)`
* **Logic**:
  1. Computes `newSize = size + other.getSize()`.
  2. Allocates a new array with capacity `newSize`.
  3. Copies calling array elements, followed by `other.items`.
  4. Deallocates the old buffer, updates pointer, `size = newSize`, and `length += other.getLength()`.
  5. Passed by `const Array&` reference to prevent accidental shallow copies and double-free issues upon scope exit.
* **Complexity**: $\mathcal{O}(n + m)$ time, $\mathcal{O}(n + m)$ space, where $n = \text{length}_1$ and $m = \text{length}_2$.

## 📚 Documentation & Complexity Notes

* Detailed Complexity Audit & Explanations: **[notes.md](notes.md)**
* Full C++ Source Implementation: **[Array.cpp](Array.cpp)**

