#include <bits/stdc++.h>
#include <vector>

using namespace std;

class MinHeap {

public:
  vector<int> harr;
  int capacity;
  int size;

  MinHeap(int capacity) {
    this->capacity = capacity;
    this->size = 0;
    harr.reserve(capacity); // Optional: Reserve space for capacity
  }

  void Swap(int index1, int index2) { swap(harr[index1], harr[index2]); }

  int Parent(int index) { return (index - 1) / 2; }

  int leftChild(int index) { return 2 * index + 1; }

  int rightChild(int index) { return 2 * index + 2; }

  void Insert(int data) {
    if (size == capacity) {
      cout << " fuLL";
      return;
    }
    harr.push_back(data);
    size++;
    // upheap
    upheap(size - 1);
  }

  void upheap(int index) {
    if (index == 0) {
      return;
    }

    // get the parent
    int parent = Parent(index);

    // if current item is less than parent => swap
    if (harr[index] < harr[parent]) {
      Swap(index, parent);
      // check the same for parent index
      upheap(parent);
    }
  }

  int remove() {
    int root = harr[0];
    int last = harr[size - 1];
    // remove last element
    harr.pop_back();
    // decrease size
    size--;

    if (!harr.empty()) {
      // remove root element and assign last element to root
      harr[0] = last;
      downheap(0);
    }

    return root;
  }

  void downheap(int index) {
    if (index == size) {
      return;
    }
    int min = index;
    int l = leftChild(min);
    int r = rightChild(min);
    if (l < size && harr[l] < harr[min]) {
      min = l;
    }
    if (r < size && harr[r] < harr[min]) {
      min = r;
    }

    // either left or right is smaller than current item
    if (min != index) {
      Swap(min, index);
      downheap(min);
    }
  }
};

void heapSort(MinHeap *root) {
  vector<int> a;
  while (root->size != 0) {
    a.push_back(root->remove());
  }
  for (int i : a) {
    cout << i;
  }
}

int main(int argc, char *argv[]) {
  int size = 10; // Initialize the size or capacity

  MinHeap *heap = new MinHeap(size);

  heap->Insert(34);
  heap->Insert(45);
  heap->Insert(22);
  heap->Insert(89);

  heapSort(heap);

  cout << "Removed: " << heap->remove() << endl;

  // Optional: Print the heap elements
  for (int i = 0; i < heap->size; i++) {
    cout << heap->harr[i] << " ";
  }
  cout << endl;

  delete heap; // Clean up memory

  return 0;
}
