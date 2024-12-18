#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct Item {
    int code;
    std::string name;
    double cost;
    int quantity;

    // Overload the < operator for sorting
    bool operator<(const Item& other) const {
        return code < other.code;
    }
};

// Function to display the items
void displayItems(const std::vector<Item>& items) {
    for (const auto& item : items) {
        std::cout << "Code: " << item.code << ", Name: " << item.name
                  << ", Cost: " << item.cost << ", Quantity: " << item.quantity << std::endl;
    }
}

// Function to search for an item by code
void searchItem(const std::vector<Item>& items, int code) {
    auto it = std::find_if(items.begin(), items.end(), [code](const Item& item) {
        return item.code == code;
    });

    if (it != items.end()) {
        std::cout << "Item found: Code: " << it->code << ", Name: " << it->name
                  << ", Cost: " << it->cost << ", Quantity: " << it->quantity << std::endl;
    } else {
        std::cout << "Item with code " << code << " not found." << std::endl;
    }
}

int main() {
    std::vector<Item> items = {
        {101, "Item1", 50.5, 10},
        {102, "Item2", 30.0, 5},
        {103, "Item3", 20.75, 15}
    };

    // Sort items by code
    std::sort(items.begin(), items.end());

    std::cout << "Sorted items:" << std::endl;
    displayItems(items);

    // Search for an item
    int searchCode;
    std::cout << "Enter item code to search: ";
    std::cin >> searchCode;
    searchItem(items, searchCode);

    return 0;
}
