#include <iostream>

class clsPersson
{
public:
    std::string FullName;
    clsPersson() // constructor
    {
        FullName = "Hi,i'm Abd_Elrahman Ebrahim Abdo Mohammed\n";
        std::cout << "\nHi,i'm constructor\n";
    }

    ~clsPersson() // Destructor at the end of the program you can do sevral things with it
    {
        std::cout << "Hi,i'm Destructor\n";
    }
};

void Function1()
{
    clsPersson Person1;
}

void Function2()
{
    clsPersson *Person2 = new clsPersson;
    std::cout << Person2 << std::endl;           // this prints the hexadecimal address of the pointer
    std::cout << Person2->FullName << std::endl; // note that we cant print all the object we just can print the members inside it

    delete Person2;
}
int main()
{
    Function1();
    Function2();

    std::cin.get();
}