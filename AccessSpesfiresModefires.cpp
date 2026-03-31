#include <iostream>

using namespace std;

class clsPerson
{
  // only Accessable inside the class
private:
  int variable1 = 5;
  int Function1()
  {
    return 40;
  }

  // only accessable inside this class and all classes inhirtes this class

protected:
  int variable2 = 4;

  int Function2()
  {
    return 50;
  }

  // accessable for every one outside/inside/and classes inherits class
public:
  string FirstName;

  string LastName;

  string FullName()
  {
    return FirstName + " " + LastName;
  }

  float Function3()
  {
    return Function1() * variable1 * variable2;
  }
};

int main()
{
  clsPerson Person1;

  Person1.FirstName = "Abd_Elrahman";
  Person1.LastName = "Ebrahim";

  cout << Person1.FullName() << endl;

  cout << Person1.Function3() << endl;

  return 0;
}