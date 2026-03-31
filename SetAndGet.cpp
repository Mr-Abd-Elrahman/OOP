#include <iostream>

using namespace std;

class clsPerson
{

private:
    string _FirstName;
    string _LastName;

public:
    // Set property
    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }
    // GetProperty
    string FirstName()
    {
        return _FirstName;
    }

    // Set property
    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }
    // GetProperty
    string LastName()
    {
        return _LastName;
    }

    string FullName()
    {
        return _FirstName + " " + _LastName;
    }
};

class clsPerson
{
private:
    string _FirstName;
    string _LastName;

public:
    // Set property
    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }
    // GetProperty
    string FirstName()
    {
        return _FirstName;
    }

    // Set property
    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }
    // GetProperty
    string LastName()
    {
        return _LastName;
    }

    string FullName()
    {
        return _FirstName + " " + _LastName;
    }
};
int main()
{

    clsPerson Person1;

    Person1.SetFirstName("Abd_Elrahman");
    Person1.SetLastName("Ebrahim");

    cout << Person1.FirstName() << endl;
    cout << Person1.LastName() << endl;
    cout << Person1.FullName() << endl;

    cout << endl;

    clsPerson Employee1;
    Employee1.SetFirstName("Zakaria");
    Employee1.SetLastName("Arafat");
    cout << Employee1.FirstName() << endl;
    cout << Employee1.LastName() << endl;
    cout << Employee1.FullName() << endl;

    return 0;
}