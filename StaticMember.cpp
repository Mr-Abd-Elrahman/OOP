#include <iostream>

class ClsA
{
public:
    int Var;
    static int Counter;

    ClsA()
    {
        Counter++;
    }

    void Print()
    {
        std::cout << "\nVar : " << Var << std::endl;
        std::cout << "Counter : " << Counter << std::endl;
    }
};
// Data type plus class name :: static variable
// we should intialize the static variables by a value but can't do this insede the calss it self or in the main() or any function()
int ClsA::Counter = 0;

int main()
{
    ClsA A1, A2, A3, A4;

    A1.Var = 10;
    A2.Var = 20;
    A3.Var = 30;
    A4.Var = 40;

    A1.Print();
    A2.Print();
    A3.Print();
    A4.Print();

    std::cout << "\nCounter After Changing static member in one object\n";

    A3.Counter = 300; // the value of the (static variable) or one of the them is considered for all

    A1.Print();
    A2.Print();
    A3.Print();
    A4.Print();
    std::cin.get();
}
