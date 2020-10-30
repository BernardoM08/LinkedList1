#ifndef NODE_H
#define NODE_H

#include "student.h"

using namespace std;

class Node
{
 public:
  Node(Student* newstud);
  ~Node();
  //setters
  void setStudent(Student* newstudent);
  void setNext(Node* newnext);
  //getters
  Student* getStudent();
  Node* getNext();
 private:
  Student* student;
  Node* next;
};
#endif
