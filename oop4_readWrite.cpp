#include <iostream> 
#include <fstream> 
using namespace std; 
 
int main() 
{ 
    char ch; 
    char data[100]; 
    fstream file1; 
 
    cout << "Creating an Output file" << endl; 
    file1.open("sample.txt", ios::out); // opening file in output mode 
    if (!file1) 
    { 
        cout << "File Not Created" << endl; 
        return 0; 
    } 
    else 
        cout << "File Created Successfully" << endl; 
 
    cout << endl << "Writing Information to It" << endl; 
    cout << "Enter the Data : "; 
    cin.getline(data, 100); // taking input with white spaces 
    file1 << data; // storing all the given data into file object 
 
    cout << endl << "Closing File" << endl; 
    file1.close(); 
    cout << endl << "Opening Created File as Input File" << endl; 
    file1.open("sample.txt", ios::in); // opening file in input mode 
    cout << endl << "Reading Information From file" << endl; 
    while (file1) 
    { 
        ch = file1.get(); // reading each character in ch variable 
        cout << ch; 
    } 
 
    cout << endl; 
}