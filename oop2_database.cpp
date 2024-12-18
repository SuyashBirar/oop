#include <iostream> 
using namespace std; 
 
class studentPrivate 
{ 
 private :  
  string bloodGroup; 
  string address; 
  long tele; 
  string drivingLiscense; 
 
 public :  
  inline void getData() 
  { 
   cout<<"Blood Group of Student : "<< bloodGroup << endl; 
   cout<<"Address of Student : "<< address << endl; 
   cout<<"Telephone No of Student : "<< tele << endl; 
   cout<<"Driving Liscense of Student : "<< drivingLiscense << endl; 
  } 
 
  friend class Student; 
}; 
 
class Student 
{ 
 private : 
  string name; 
  int roll; 
  int std; 
  string div; 
  string dob; 
  studentPrivate obj; 
 
 public :  
  Student() 
  { 
   name = "student"; 
   roll = -1; 
   std = -1; 
   div = -1; 
   dob = "0-0-0000"; 
   obj.bloodGroup = "default"; 
   obj.address = "default"; 
   obj.tele = 0000000; 
   obj.drivingLiscense = "default"; 
  } 
 
  Student(Student &s) 
  { 
   s.name = this->name; 
   s.roll = this->roll; 
   s.std = this->std;    
   s.div = this->div; 
   s.dob = this->dob; 
   s.obj.bloodGroup = obj.bloodGroup;    
   s.obj.address = obj.address; 
   s.obj.tele = obj.tele; 
   s.obj.drivingLiscense = obj.drivingLiscense;  
  } 
 
  ~Student() { } 
 
  void setData() 
  { 
   try 
   { 
    cout << "Enter the Name of Student : "; 
    cin >> name; 
     
    cout << "Enter the Roll No of Student : "; 
    cin >> roll; 
     
    cout << "Enter the CLass of Student : "; 
    cin >> std; 
 
    cout << "Enter the Division of Student : "; 
    cin >> div; 
 
    cout << "Enter the DOB of Student : "; 
    cin >> dob; 
 
    cout << "Enter the Blood Group of Student : "; 
    cin >> obj.bloodGroup; 
 
    cout << "Enter the Address of Student : "; 
    cin >> obj.address; 
 
    cout << "Enter the Telephone of Student : ";  
    cin >> obj.tele; 
 
    cout << "Enter the Driving Liscense Student : "; 
    cin >> obj.drivingLiscense; 
 
    cout << endl; 
   } 
   catch(exception e) 
   { 
    cout <<"Exception Occured !"<< endl; 
   } 
  } 
 
  void getData() 
  { 
   cout << endl; 
   cout<<"Name of Student : "<< name << endl; 
   cout<<"Roll of Student : "<< roll << endl; 
   cout<<"Class of Student : "<< std << endl; 
   cout<<"Div of Student : "<< div << endl; 
   cout<<"Date Of Birth of Student : "<< dob << endl; 
 
   obj.getData(); 
  } 
}; 
 
int main() 
{ 
 Student *s = new Student(); 
 s->setData(); 
 s->getData(); 
 
 delete s; 
} 