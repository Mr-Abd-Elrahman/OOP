#include <iostream>

using namespace std;

class clsPerson
{

public:
    string FirstName;
    string LastName;

    string FullName()
    {
        return FirstName + " " + LastName;
    }
};

int main()
{

    clsPerson Person1;

    Person1.FirstName = "Abd_Elrahman";
    Person1.LastName = "Ebrahim";

    cout << Person1.FullName() << endl;

    return 0;
}