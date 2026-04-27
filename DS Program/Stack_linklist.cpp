#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* top = NULL;
void push(int x) {
    Node* n = new Node();
    n->data = x;
    n->next = top;
    top = n;
    cout << "Inserted: " << x << endl;
}
void pop() {
    if (top == NULL) {
        cout << "Stack is empty\n";
        return;
    }       
    Node* temp = top;
    cout << "Deleted: " << temp->data << endl;
    top = top->next;
    delete temp;
}
void display() {
    if (top == NULL) {
        cout << "Stack is empty\n";
        return;
    }
    Node* temp = top;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    int choice, value;
    do {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while(choice != 4);
    return 0;
}