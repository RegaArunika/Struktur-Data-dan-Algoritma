#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    Stack(int size) {
        arr = new int[size];
        top = -1;
        capacity = size;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int value) {
        if (top == capacity - 1) {
            cout << "Stack Kelebihan" << endl;
            return;
        }

        top++;
        arr[top] = value;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack Habis" << endl;
            return -1;
        }

        int value = arr[top];
        top--;
        return value;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack Kosong!" << endl;
            return -1;
        }

        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
    
    

};

int main() {
    Stack myStack(5);

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);	
    
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();

    
    
    
    
    
    

    while (!myStack.isEmpty()) {
        cout << myStack.pop() << endl;
    }
   
    return 0;
}
