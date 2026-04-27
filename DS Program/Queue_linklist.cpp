#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* front = NULL;
Node* rear = NULL;
void enqueue(int x) {
    Node* n = new Node();
    n->data = x;
    n->next = NULL;
    if (rear == NULL) {
        front = rear = n;
    } else {
        rear->next = n;
        rear = n;
    }
    cout << "Inserted: " << x << endl;
}
void dequeue() {
    if (front == NULL) {
        cout << "Queue is empty\n";
        return;
    }
    Node* temp = front;
    cout << "Deleted: " << temp->data << endl;
    front = front->next;
    if (front == NULL)
        rear = NULL;
    delete temp;
}
void display() {
    if (front == NULL) {
        cout << "Queue is empty\n";
        return;
    }
    Node* temp = front;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    int choice, value;
    do {
        cout << "\n--- QUEUE MENU ---\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
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