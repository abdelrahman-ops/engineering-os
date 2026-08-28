#include <iostream>

using namespace std;

class Array {
private:
    int size;
    int length;
    int* items;

public:
    Array(int arr_size) {
        size = arr_size;
        length = 0;
        items = new int[arr_size];
    }

    ~Array() {
        delete[] items;
    }

    void Fill() {
        int no_of_items;
        cout << "How many items do you want to fill? ";
        cin >> no_of_items;

        if (no_of_items > size) {
            cout << "Error: You cannot exceed array size (" << size << ")!" << endl;
            return;
        }

        for (int i = 0; i < no_of_items; i++) {
            cout << "Enter element #" << i + 1 << ": ";
            cin >> items[i];
            length++;
        }
    }

    void Display() {
        cout << "Array Content: [ ";
        for (int i = 0; i < length; i++) {
            cout << items[i];
            if (i < length - 1) {
                cout << ", ";
            }
        }
        cout << " ]" << endl;
    }

    int getSize() const {
        return size;
    }

    int getLength() const {
        return length;
    }

    // Linear search
    int Search(int key) {
        int index = -1;

        for (int i = 0; i < length; i++) {
            if (items[i] == key) {
                index = i;
                break;
            }
        }
        return index;
    }

    void Append(int item) {
        if (length < size) {
            items[length] = item;
            length++;
        } else {
            cout << "Error: Array is full, cannot append more elements!" << endl;
        }
    }

    void Insert(int index, int item) {
        if (length >= size) {
            cout << "Error: Array is full, cannot insert more elements!" << endl;
            return;
        }

        if (index >= 0 && index <= length) {
            for (int i = length; i > index; i--) {
                items[i] = items[i - 1];
            }
            items[index] = item;
            length++;
        } else {
            cout << "Error: Index out of range (valid index: 0 to " << length << ")!" << endl;
        }
    }

    void Delete(int index) {
        if (index >= 0 && index < length) {
            for (int i = index + 1; i < length; i++) {
                items[i - 1] = items[i];
            }
            length--;
        } else {
            cout << "Error: Index out of range (cannot delete)!" << endl;
        }
    }

    void Enlarge(int newSize) {
        if (newSize <= size) {
            cout << "Error: New size must be larger than current size (" << size << ")!" << endl;
            return;
        }

        int* newItems = new int[newSize];

        for (int i = 0; i < length; i++) {
            newItems[i] = items[i];
        }

        delete[] items;
        items = newItems;
        size = newSize;
    }

    void Merge(const Array& other) {
        int newSize = size + other.getSize();
        int* old = items;

        items = new int[newSize];

        int i;
        for (i = 0; i < length; i++) {
            items[i] = old[i];
        }
        delete[] old;

        int j = i;

        for (int i = 0; i < other.getLength(); i++) {
            items[j++] = other.items[i];
            length++;
        }
        size = newSize;
    }

    int Max(){
        if(length == 0){
            cout << "Error: Array is empty, cannot find maximum element!" << endl;
            return -1;
        }
        int max = items[0];
        for (int i = 1; i < length; i++)
        {
            if (items[i] > max)
            {
                max = items[i];
            }
        }
        return max;
    }

    int Min(){
        if(length == 0){
            cout << "Error: Array is empty, cannot find minimum element!" << endl;
            return -1;
        }
        int min = items[0];
        for (int i = 1; i < length; i++)
        {
            if (items[i] <= min)
            {
                min = items[i];
            }
        }
        return min;
    }

    int Sum(){
        int sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum += items[i];
        }
        return sum;
    }

    void Reverse(){
        int* newArr = new int[size];
        for (int i = 0; i < length; i++)
        {
            newArr[i] = items[length - 1 - i];
        }
        delete[] items;
        items = newArr;
    }

};

int main(int argc, const char** argv) {
    int arr_size;
    cout << "Enter array size: ";
    cin >> arr_size;
    Array my_array(arr_size);

    cout << "========================================================" << endl;
    my_array.Fill();

    cout << "========================================================" << endl;
    cout << "Array Size = " << my_array.getSize() << " | Length = " << my_array.getLength() << endl;
    cout << "========================================================" << endl;
    my_array.Display();

    cout << "========================================================" << endl;
    int key;
    cout << "Enter the item you want to search for: ";
    cin >> key;
    int index = my_array.Search(key);

    if (index == -1) {
        cout << "Result: Element (" << key << ") not found." << endl;
    } else {
        cout << "Result: Element (" << key << ") exists @ position: " << index << endl;
    }

    cout << "========================================================" << endl;
    int item;
    cout << "Enter the item you want to append (at end): ";
    cin >> item;
    my_array.Append(item);
    my_array.Display();

    cout << "========================================================" << endl;
    int newItem, newIndex;
    cout << "Enter the item you want to insert: ";
    cin >> newItem;
    cout << "Enter the index you want to insert at: ";
    cin >> newIndex;

    my_array.Insert(newIndex, newItem);
    my_array.Display();
    cout << "Array Size = " << my_array.getSize() << " | Length = " << my_array.getLength() << endl;

    cout << "========================================================" << endl;
    int deleteIndex;
    cout << "Enter the index you want to delete: ";
    cin >> deleteIndex;

    my_array.Delete(deleteIndex);
    my_array.Display();
    cout << "Array Size = " << my_array.getSize() << " | Length = " << my_array.getLength() << endl;

    cout << "========================================================" << endl;
    int newSize;
    cout << "Enter the new size of the array: ";
    cin >> newSize;

    my_array.Enlarge(newSize);
    my_array.Display();
    cout << "Array Size = " << my_array.getSize() << " | Length = " << my_array.getLength() << endl;

    cout << "========================================================" << endl;
    cout << "Creating second array to merge (size = 3):" << endl;
    Array other(3);
    other.Fill();

    cout << "Merging second array into first array..." << endl;
    my_array.Merge(other);

    cout << "Array Size = " << my_array.getSize() << " | Length = " << my_array.getLength() << endl;
    my_array.Display();



    cout << "========================================================" << endl;
    cout << "Max element: " << endl;
    cout << my_array.Max() << endl;

    cout << "========================================================" << endl;
    cout << "Min element: " << endl;
    cout << my_array.Min() << endl;

    cout << "========================================================" << endl;
    cout << "Sum of all elements: " << endl;
    cout << my_array.Sum() << endl;

    cout << "========================================================" << endl;
    cout << "Reversed array: " << endl;
    my_array.Reverse();
    my_array.Display();

    return 0;
}