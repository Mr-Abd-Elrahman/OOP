#include <iostream>

class cls
{
public:
    // static function we call it by Class name
    // it is shared for all objects and it is  very important and usefull
    static int Function1()
    {
        return 10;
    }

    int Function2()
    {
        return 20;
    }
};

int main()
{

    /*The following line calls static function directly via class
    not through the object
    note : at class level yhou can call only static methods and static members*/
    std::cout << cls::Function1() << std::endl;

    cls A1, A2, A3;
    // Static methods can also be called throught the object.
    std::cout << A1.Function1() << std::endl;

    std::cout << A2.Function2() << std::endl;
    std::cout << A2.Function1() << std::endl;

    std::cin.get();
}
// claude AI (code) for explanation
// #include <iostream>

// class Calculator
// {
// private:
//     std::string _brand;

// public:
//     Calculator(std::string B)
//     {
//         _brand = B;
//     }

//     void Print()
//     {
//         std::cout << "brand: " << _brand << std::endl;
//     }

//     static int add(int a, int b)
//     {
//         return a + b;
//     }
// };

// int main()
// {

//     std::cout << Calculator::add(8, 9) << std::endl;
//     Calculator Cal("Casio");
//     Cal.Print();
//     std::cout << Cal.add(8, 9) << std::endl;
//     std::cin.get();
// }