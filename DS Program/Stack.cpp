#include <iostream>
using namespace std;
#define MAX 5

int stack[MAX];
int top = -1;

void push(int value) {
    if (top >= MAX - 1) {   
        cout << "Stack Overflow! Cannot push " << value << endl;
        return;
    }
    stack[++top] = value;   
    cout << value << " pushed into stack." << endl;
}

void pop() {
    if (top < 0) {   
        cout << "Stack Underflow! Cannot pop." << endl;
        return;
    }
    cout << stack[top--] << " popped from stack." << endl;
}

void display() {
    if (top < 0) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Stack elements are: ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}
int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}