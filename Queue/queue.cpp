#include <iostream>
#include <queue>
#include <string>

int main() {
    std::queue<std::string> printQueue;

    // 1. Enqueue elements at the back
    printQueue.push("Report.pdf");
    printQueue.push("Invoice.docx");
    printQueue.emplace("Chart.png"); // Constructs string in-place

    std::cout << "Queue size: " << printQueue.size() << "\n";
    std::cout << "First in line (front): " << printQueue.front() << "\n";
    std::cout << "Last in line (back): " << printQueue.back() << "\n\n";

    // 2. Dequeue and process in FIFO order
    std::cout << "Processing jobs:\n";
    while (!printQueue.empty()) {
        std::cout << " -> Printing: " << printQueue.front() << "\n";
        printQueue.pop(); // Removes the front element
    }

    return 0;
}