#include <iostream> 
using namespace std; 
 
class publication 
{ 
    private : 
        string title; 
        float price; 
 
    public : 
        void setData() 
        { 
            cout << "Enter the title of publication : "; 
            cin >> title; 
 
            cout << "Enter the price of publication : "; 
            cin >> price; 
        } 
 
        void getData() 
        { 
            cout<< endl << "Title of Publication : "<< title << endl; 
            cout<<"Price of Publication : "<< price << endl; 
        } 
}; 
 
class book : public publication  
{ 
    private : 
        int pageCount; 
       
    public : 
        void setData() 
        { 
            publication :: setData(); 
            cout << "Enter the page count of publication : "; 
            cin >> pageCount; 
        } 
 
        void getData() 
        { 
            publication :: getData(); 
            cout<<"Page Count of Publication : "<< pageCount << endl << endl; 
        } 
}; 
 
class cd : public publication  
{ 
    private : 
        int time; 
     
    public : 
        void setData() 
        { 
            publication :: setData(); 
            cout << "Enter the time of publication : "; 
            cin >> time; 
        } 
 
        void getData() 
        { 
            publication :: getData(); 
            cout<<"Time of Publication : "<< time << endl << endl; 
        } 
}; 
 
int main() 
{ 
    book b; 
    b.setData(); 
    b.getData(); 
    cd c; 
    c.setData(); 
    c.getData(); 
 
    return 0; 
} 
