#include <iostream>
#define MAXSIZE 50

using namespace std;

class Queue {
    private:
        int data[MAXSIZE];
        int front;
        int rear;

    public:
        Queue() {
            front = -1;
            rear = -1;
        }

        bool isEmpty() {
            return front == -1 && rear == -1;
        }

        bool isFull() {
            return rear == MAXSIZE - 1;
        }

        void enqueue(int value) {
            if (isFull()) {
                cout << "Queue Penuh" << endl;
                return;
            } else if (isEmpty()) {
                front = rear = 0;
            } else {
                rear++;
            }

            data[rear] = value;
        }

        void dequeue() {
            if (isEmpty()) {
                cout << "Queue Kosong" << endl;
                return;
            } else if (front == rear) {
                front = rear = -1;
            } else {
                front++;
            }
        }

        int peek() {
            if (isEmpty()) {
                cout << "Queue Kosong" << endl;
                return -1;
            } else {
                return data[front];
            }
        }

        void display() {
            if (isEmpty()) {
                cout << "Queue Kosong" << endl;
                return;
            }

            cout << "Queue: ";
            for (int i = front; i <= rear; i++) {
                cout << data[i] << " ";
            }
            cout << endl;
        }
        int count(){
        	return(rear-front +1);
		}
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display();
	
    q.dequeue();
    q.dequeue();

    q.display();

    cout << "Front element: " << q.peek() << endl;

    return 0;
}
