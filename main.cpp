#include "LinkedQueue.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
    LinkedQueue<int> queueA;
    const int MAX_SIZE = 10;

    // attempt to display the front and back
    try {
        cout << queueA.front() << "\n";
    } catch (string& e) {
        cout << e << "\n";
    }

    try {
        cout << queueA.back() << "\n";
    } catch (string& e) {
        cout << e << "\n";
    }

    // insert just one element to queue A
    queueA.enqueue(-5);

    // display its length, front, and back
    cout << "A length: " << queueA.getLength() << "\n";
    cout << "A front: "  << queueA.front()     << "\n";
    cout << "A back: "   << queueA.back()      << "\n";

    // now remove the single element from queue A
    queueA.dequeue();

    // display its length, front, and back
    cout << "A length: " << queueA.getLength() << "\n";
    try {
        cout << queueA.front() << "\n";
    } catch (string& e) {
        cout << e << "\n";
    }
    try {
        cout << queueA.back() << "\n";
    } catch (string& e) {
        cout << e << "\n";
    }

    return 0;
}
