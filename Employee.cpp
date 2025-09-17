#include "Employee.h"
using namespace std;

Employee::Employee(const std::string& name, int id, const std::string& type) {
  this->name = name;
  this->id = id;
  this->type = type;
}

/* IMPLEMENT GETTERS*/
string Employee::getName() { return name; }
string Employee::getType() { return type; }
int Employee::getId() { return id; }