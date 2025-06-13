//writing a code for insertion in static array i guesssss
#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n, element, index;

    // Input number of elements
    cout << "Enter number of elements (max 100): ";
    cin >> n;

    // Input array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input element to insert and its index
    cout << "Enter element to insert: ";
    cin >> element;
    cout << "Enter index at which to insert (0 to " << n << "): ";
    cin >> index;

    // Check for valid index
    if (index < 0 || index > n) {
        cout << "Invalid index!" << endl;
        return 1;
    }

    // Shift elements to the right from index
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[index] = element;
    n++; // increase array size

    // Display updated array
    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
