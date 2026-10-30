#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
    int *arr;
    int capacity;
    int front;
    int rear;

public:

    CircularQueue(int n) {
        capacity = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % capacity == front;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Queue Overflow" << endl;
            return;
        }

        // First element
        if (front == -1) {
            front = 0;
            rear = 0;
        }
        else {
            rear = (rear + 1) % capacity;
        }

        arr[rear] = x;

        cout << "Pushed: " << x << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return;
        }

        cout << "Popped: " << arr[front] << endl;

        // Only one element was present
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % capacity;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return arr[front];
    }

    ~CircularQueue() {
        delete[] arr;
    }
};

int main() {

    CircularQueue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "Front: " << q.peek() << endl;

    q.pop();
    q.pop();

    q.push(60);
    q.push(70);

    cout << "Front: " << q.peek() << endl;

    return 0;
}   