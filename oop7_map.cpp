#include <iostream> 
#include <map> 
#include <string> 
using namespace std; 
 
int main() 
{ 
    // Create a map to store state populations 
    map<string, int> statePopulations; 
 
    // Populate the map with some sample data 
    statePopulations["Maharashtra"] = 39512223; 
    statePopulations["Goa"] = 28995881; 
    statePopulations["Uttar Pradesh"] = 21477737; 
    statePopulations["Madhya Pradesh"] = 19453561; 
    statePopulations["Telangana"] = 12671821; 
 
    // Prompt the user to enter a state name 
    cout << "Enter the name of a state: "; 
    string stateName; 
    getline(cin, stateName); 
 
    // Look up the population in the map 
    auto it = statePopulations.find(stateName); 
 
    if (it != statePopulations.end()) 
        cout << "Population of " << stateName << ": " << it->second << endl; 
    else 
        cout << "Population information not available for " << stateName << endl; 
 
    return 0; 
}