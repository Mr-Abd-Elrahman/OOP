#include <iostream>

class clsPerson
{
private:
    int _ID = 0;
    std::string _FirstName;
    std::string _LastName;
    std::string _FullName;
    std::string _Email;
    std::string _Phone;

public:
    clsPerson(int ID, std::string FirstName, std::string LastName, std::string Email, std::string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }
    // set and get properties
    int ID() // Read only Property
    {
        return _ID;
    }

    // First name
    void SetFirstName(std::string FirstName)
    {
        _FirstName = FirstName;
    }

    std::string GetFirstName()
    {
        return _FirstName;
    }

    // Last name
    void SetLastName(std::string LastName)
    {
        _LastName = LastName;
    }

    std::string GetLastName()
    {
        return _FirstName;
    }

    // Email
    void SetEmail(std::string Email)
    {
        _Email = Email;
    }

    std::string GetEmail()
    {
        return _Email;
    }

    // Phone
    void SetPhone(std::string Phone)
    {
        _Phone = Phone;
    }

    std::string GetPhone()
    {
        return _Phone;
    }

    std::string GetFullName()
    {
        return _FirstName + " " + _LastName;
    }

    void Print()
    {
        std::cout << "Info :\n";
        std::cout << "\n------------------------------------\n";
        std::cout << "\nID         : " << _ID;
        std::cout << "\nFirst Name : " << _FirstName;
        std::cout << "\nLast Name  : " << _LastName;
        std::cout << "\nFull Name  : " << GetFullName();
        std::cout << "\nEmail      : " << _Email;
        std::cout << "\nPhone      : " << _Phone;
        std::cout << "\n------------------------------------\n";
    }

    void SendEmail(std::string Subject, std::string Body)
    {
        std::cout << "\nThe following message sent successfully to email : " << _Email;
        std::cout << "\nSubject : " << Subject;
        std::cout << "\nBody : " << Body;
    }

    void SendSMS(std::string SMS)
    {
        std::cout << "\nThe following SMS sent successfully to phone : " << _Phone;

        std::cout << "\n"
                  << SMS;
    }
};

int main()
{

    clsPerson Person1(10, "Abd_Elrahman", "Ebrahim", "ba141686@gmail.com", "01010103442");

    Person1.Print();

    Person1.SendEmail("Hi", "How are you?");
    Person1.SendSMS("How are you?");

    std::cin.get();
}