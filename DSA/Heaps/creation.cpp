/*Basic properties:
    1.Should be a complete binary tree
    2.Should be filled from left

    Implemented using array

    Accessing
    Node is at i'th index
    left child at 2*i index
    Right child at 2*i + 1 index
*/
#include <bits/stdc++.h>
using namespace std;
class heap
{
public:
    int size = 0;
    int arr[100];
    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    // INSERTION IN A HEAP

    void insert(int val)
    {
        size++;
        int index = size;
        arr[size] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index /= 2;
            }
            else
                return;
        }
    }

    // DELETING A HEAP

    int del()
    {
        int temp;
        if (size == 0)
        {
            /* code */
            cout << "Ham gadhe hai?" << endl;
            return 0;
        }
        temp = arr[1];
        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i <= size)
        {
            int leftindex = 2 * i;
            int rightindex = 2 * i + 1;
            if (leftindex <= size && arr[i] < arr[leftindex])
            {
                swap(arr[i], arr[leftindex]);
                i = i * 2;
            }
            else if (rightindex <= size && arr[i] < arr[rightindex])
            {
                swap(arr[i], arr[rightindex]);
                i = i * 2;
            }
            else
                return temp;
        }
    }

    // PRINTING A HEAP

    void print()
    {
        for (int i = 1; i <= size; i++)
            cout << arr[i] << " ";
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[left] > arr[largest])
        largest = left;
    if (right <= n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n)
{
    int size = n;
    while (size > 1)
    {
        swap(arr[1], arr[size-1]);
        size--;
        heapify(arr, size, 1);
    }
}

int main()
{
    // int n;
    // cin >> n;
    // heap h;
    // for (int i = 0; i < n; i++)
    // {
    //     int a;
    //     cin >> a;
    //     h.insert(a);
    // }
    // h.print();
    // cout << endl;
    // cout << h.del();
    // cout << endl;
    // h.print();

    cout << endl
         << "Heapify" << endl;

    int prr[] =  {-1, 12, 11, 13, 5, 6, 7 };
    int m = 7 / 2;
    for (int i = m; i > 0; i--)
        heapify(prr, 7, i);
    for (int i = 1; i < 7; i++)
        cout << prr[i] << " ";

    // Heap sort
    heapsort(prr, 7);
    cout << "Sorted array" << endl;
    for (int i = 1; i < 7; i++)
        cout << prr[i] << " ";

    return 0;
}