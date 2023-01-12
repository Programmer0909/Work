#include <bits/stdc++.h>
using namespace std;

class Que
{
public:
    int front;
    int rear;
    int cap;
    int *arr;
    int top;
    int size;
    Que(int n)
    {
        cap = n;
        arr = new int[cap];
        top = cap;
    }
    void enque(int n)
    {
        int x;
        arr[size] = x;
        size++;
    };
    void deque();
    int getfront();
    bool isfull();
    bool isempty();
    int sizee();
};

void Que::deque()
{
    if (size == -1)
    {
        cout << "Empty queue";
        return;
    }
    size--;
}

int main()
{
    int n;
    cin >> n;
    return 0;
}