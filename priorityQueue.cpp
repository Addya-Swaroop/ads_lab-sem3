#include <iostream>
using namespace std;

class PriorityQueue {
    int arr[100];
    int size;

public:
    PriorityQueue() {
        size = 0;
    }
    void enqueue(int value) {
        if (size == 100) {
            cout << "Queue is full\n";
            return;
        }

        int i = size - 1;

        while (i >= 0 && arr[i] < value) {
            arr[i + 1] = arr[i];
            i--;
        }

        arr[i + 1] = value;
        size++;
    }

    void dequeue() {
        if (size == 0) {
            cout << "Queue is empty";
            return;
        }

        cout << "Deleted: " << arr[0] << endl;

        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;
    }
    void display() {
        if (size == 0) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Priority Queue: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;

    pq.enqueue(30);
    pq.enqueue(10);
    pq.enqueue(50);
    pq.enqueue(20);

    pq.display();

    pq.dequeue();
    pq.display();

    return 0;
}