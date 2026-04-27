#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n];   
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int key;
    cout << "Input the key to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            cout << "The key " << key << " is found at index " << i << endl;
            return 0;
        }
    }
    cout << "Not found" << endl;
    return 0;
}