#include <iostream>

using namespace std;

class clsPerson
{

private:
    string _FirstName;
    string _LastName;
    string _FullName;
    int _ID = 10;

public:
    int ID()
    {
        return _ID;
    }

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

    std::string ReadFullName()
    {
        std::cout << "\nEnter Your Full Name : ";
        getline(cin, _FullName);
        return _FullName;
    }

    void PrintFullName()
    {
        cout << "Ful Name is : " << _FullName << endl;
    }
};

class clsPerson
{
private:
    string _FirstName;
    string _LastName;
    int _ID = 11;

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

    int ID()
    {
        return _ID;
    }
};
int main()
{

    clsPerson Person1, Person2;

    Person1.SetFirstName("Abd_Elrahman");
    Person1.SetLastName("Ebrahim");

    //   cout << Person1.FirstName() << endl;
    //   cout << Person1.LastName() << endl;
    cout << Person1.FullName() << endl;
    cout << "Person ID : " << Person1.ID() << endl;

    Person2.ReadFullName();
    Person2.PrintFullName();

    //  cout << endl;

    //   clsEmployee Employee1;
    //   Employee1.SetFirstName("Zakaria");
    //   Employee1.SetLastName("Arafat");
    // //   cout << Employee1.FirstName() << endl;
    // //   cout << Employee1.LastName() << endl;
    //   cout << Employee1.FullName() << endl;
    //   cout << "Person ID : " << Employee1.ID() << endl;

    return 0;
}