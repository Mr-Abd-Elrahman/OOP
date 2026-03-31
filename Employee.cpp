#include <iostream>

class clsEmployee
{
private:
    int _ID = 0;
    float _Salary;
    std::string _FirstName;
    std::string _LastName;
    std::string _FullName;
    std::string _Email;
    std::string _Phone;
    std::string _Title;
    std::string _Department;

public:
    clsEmployee(int ID, float salary, std::string FirstName, std::string LastName, std::string Email, std::string Phone, std::string Title, std::string Department)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
        _Salary = salary;
        _Title = Title;
        _Department = Department;
    }
    // set and get properties
    int ID() // Read only Property
    {
        return _ID;
    }
    // Salary
    void SetSalary(float Salary)
    {
        _Salary = Salary;
    }

    float GetSalary()
    {
        return _Salary;
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
    // Title
    void SetTitle(std::string Title)
    {
        _Title = Title;
    }

    std::string GetTitle()
    {
        return _Title;
    }

    // Department
    void SetDepartmen(std::string Department)
    {
        _Department = Department;
    }

    std::string GetDepartment()
    {
        return _Department;
    }

    std::string GetFullName()
    {
        return _FirstName + " " + _LastName;
    }

    void Print()
    {
        std::cout << "Info :\n";
        std::cout << "\n------------------------------------";
        std::cout << "\nID         : " << _ID;
        std::cout << "\nFirst Name : " << _FirstName;
        std::cout << "\nLast Name  : " << _LastName;
        std::cout << "\nFull Name  : " << GetFullName();
        std::cout << "\nTitle      : " << _Title;
        std::cout << "\nSalary     : " << _Salary;
        std::cout << "\nDepartment : " << _Department;
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
        std::cout << "\nThe following SMS sent successfully to phone : " << _Phone << std::endl;

        std::cout << SMS;
    }
};

int main()
{

    clsEmployee Employee1(10, 200000, "Zakaria", "Arafat", "ba141686@gmail.com", "01010103442", "Stuff Manager", "Security");

    Employee1.Print();

    Employee1.SendEmail("Hi", "How are you?");
    Employee1.SendSMS("How are you?");

    std::cin.get();
}
