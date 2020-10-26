#include <iostream>
#include <cstring>
#include <iomanip>

#include "node.h"
#include "student.h"

using namespace std;

int main() {
  //create first student
  Student* student = new Student;
  cout << "Input student's first name:" << endl;
  cin.get(student->getName(), 20);
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Input student's last name:" << endl;
  cin.get(student->getSurname(), 20);
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Input student's ID:" << endl;
  cin >> *student->getID();
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Input student's GPA:" << endl;
  cin >> *student->getGPA();
  cin.clear();
  cin.ignore(10000, '\n');

  //create second student
  Student* student2 = new Student;
  cout << "Input student's first name:" << endl;
  cin.get(student2->getName(), 20);
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Input student's last name:" << endl;
  cin.get(student2->getSurname(), 20);
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Input student's ID:" << endl;
  cin >> *student2->getID();
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Input student's GPA:" << endl;
  cin >> *student2->getGPA();
  cin.clear();
  cin.ignore(10000, '\n');

  //prints student
  cout << "----------------------------" << endl;
  cout << "Student #1: " << student->getName() << " " << student->getSurname() << ", ";
  cout << "ID: " << *student-> getID() << ", GPA: ";
  cout << fixed << setprecision(2) << *student-> getGPA() << endl;
  //print student2
  cout << "Student #2: " << student2->getName() << " " << student2->getSurname() << ", ";
  cout << "ID: " << *student2-> getID() << ", GPA: ";
  cout << fixed << setprecision(2) << *student2-> getGPA() << endl << endl;

  //sets up 2 nodes
  Node* firstNode = new Node(student);
  Node* secondNode = new Node(student2);
  firstNode->setStudent(student);
  firstNode->setNext(secondNode);
  secondNode->setStudent(student2);
  //prints students using nodes
  cout << "Nodes: " << endl;
  cout << firstNode->getStudent()->getName() << " " << firstNode->getStudent()->getSurname() << endl;
  cout << firstNode->getNext()->getStudent()->getName() << " " << firstNode->getNext()->getStudent()->getSurname() << endl;
  
  return 0;
}
