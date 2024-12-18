#include <iostream> 
using namespace std; 
 
class complex 
{ 
    public: 
        float real; 
        float imag; 
 
        complex()         
        { 
            real = 0;  
            imag = 0; 
        } 
 
        friend complex operator+(complex, complex); 
        friend complex operator*(complex, complex); 
        friend istream &operator>>(istream &, complex &);  
        friend ostream &operator<<(ostream &, complex &); 
}; 
 
complex operator+(complex obj1, complex obj2) 
{ 
    complex temp; 
    temp.real = obj1.real + obj2.real; 
    temp.imag = obj1.imag + obj2.imag; 
 
    return temp;  
} 
 
complex operator*(complex obj1, complex obj2) 
{ 
    complex temp; 
    temp.real = obj1.real * obj2.real - obj1.imag * obj2.imag; 
    temp.imag = obj1.real * obj2.imag + obj1.imag * obj2.real; 
 
    return temp; 
} 
 
istream &operator>>(istream &in, complex &obj) 
{ 
    cout << "Enter Real Part : ";   
    in >> obj.real; 
    cout << "Enter Imaginary Part : "; 
    in >> obj.imag; 
 
    return in; 
} 
 
ostream &operator<<(ostream &out, complex &obj) 
{  
    if (obj.imag >= 0) 
        out << obj.real << "+" << obj.imag << "i\n"; 
    else 
        out << obj.real << obj.imag << "i\n"; 
    return out; 
} 
 
int main() 
{ 
    complex c1, c2, c3;  
 
    cout << "Initialize c1 : " << endl; 
    cout << c1;  
    cout << "Initialize c2 : " << endl; 
    cout << c2;  
 
    cout << "\nEnter Complex Number c1 : " << endl; 
    cin >> c1;  
    cout << "C1 is : " << c1; 
    cout << "\nEnter Complex Num c2 ; " << endl; 
    cin >> c2;  
    cout << "C2 is : " << c2; 
 
    int ch; 
    do 
    { 
        cout << "\n1.Addition\n2.Multiplication \n0.Exit" << endl; 
        cout << "Enter your choice : "; 
        cin >> ch; 
        switch (ch) 
        { 
        case 0: 
            break; 
        case 1: 
            c3 = c1 + c2; 
            cout << "Addition is : " << endl; 
            cout << c3;  
            break;  
        case 2: 
            c3 = c1 * c2; 
            cout << "Multiplication is : " << endl; 
            cout << c3; 
            break;  
        default: 
            cout << "Invalid choice" << endl; 
        }  
    }while (ch != 0); 
 
    return 0;  
} 