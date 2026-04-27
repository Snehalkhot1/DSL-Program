#include <iostream>
using namespace std;
#define SIZE 10
int hashTable[SIZE];
int hashFunction(int key) {
    return key % SIZE;
}
void display() {
    cout << "\nHash Table:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << i << " -> " << hashTable[i] << endl;
    }
}
int main() {
    int n, key, choice;
    
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;
    cout << "How many values you want to insert: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> key;
        int index = hashFunction(key);
        hashTable[index] = key;  
    }
    display();   
    cout << "\n1.Search  2.Delete\n";
    cout << "Enter choice: ";
    cin >> choice;
    cout << "Enter value: ";
    cin >> key;
    int index = hashFunction(key);
    if (choice == 1) {   
        if (hashTable[index] == key)
            cout << "Value Found\n";
        else
            cout << "Value Not Found\n";
    }
    else if (choice == 2) { 
        if (hashTable[index] == key) {
            hashTable[index] = -1;
            cout << "Value Deleted\n";
        } else {
            cout << "Value Not Found\n";
        }
    }
    display();  
    return 0;
}