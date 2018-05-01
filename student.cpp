#include "student.h"
#include <string>
using namespace std;
void student::setName(string one,string two)
{
firstname=one;
lastname=two;
}
string student::fullName()
{
string full;
full.append(firstname);
full.append(" ");
full.append(lastname);
return full;
}
