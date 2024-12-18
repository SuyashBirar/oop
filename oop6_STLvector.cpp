#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
 
class Person 
{ 
public: 
    string name; 
    string dob; 
    string phoneNumber; 
 
    // Constructor 
    Person(const string &n, const string &d, const string &ph) 
        : name(n), dob(d), phoneNumber(ph) {} 
 
    // Overloading < operator for sorting 
    bool operator<(const Person &other) const 
    { 
        return name < other.name; 
    } 
}; 
 
// Function to display a person's information 
void displayPerson(const Person &p) 
{ 
    cout << "Name: " << p.name << ", DOB: " << p.dob << ", Phone: " << p.phoneNumber << endl; 
} 
 
int main() 
{ 
    // Create a vector of Person objects 
    vector<Person> people; 
 
    // Add some sample records 
    people.push_back(Person("Suyash", "2005-01-07", "123-456-7890")); 
    people.push_back(Person("Aditya", "2004-10-21", "987-654-3210")); 
    people.push_back(Person("Harshad", "2004-8-30", "555-123-4567")); 

 
    // Display unsorted records 
    cout << "Unsorted Records:" << endl; 
    for (const auto &person : people) 
    { 
        displayPerson(person); 
    } 
 
    // Sort the vector of Person objects based on the name 
    sort(people.begin(), people.end()); 
 
    // Display sorted records 
    cout << "\nSorted Records:" << endl; 
    for (const auto &person : people) 
    { 
        displayPerson(person); 
    } 
 
    // Search for a person by name 
    string searchName = "Suyash"; 
    auto it = find_if(people.begin(), people.end(), [&searchName](const Person &p){ return p.name == 
searchName; }); 
 
    if (it != people.end()) 
    { 
        cout << "\nRecord found for " << searchName << ":" << endl; 
        displayPerson(*it); 
    } 
    else 
        cout << "\nRecord not found for " << searchName << endl; 
         
    return 0; 
}