#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name

void  Student::assingnDetails(int psudentId,char pname[50]) 
{
  studentId=psudentId;
  strcpy(name,pname);
  
}

// Display StudentId and Name
 void Student::display()
{
  cout<<"Student id"<<studentId<<endl;
   cout<<"Name"<<name<<endl;
  
}
