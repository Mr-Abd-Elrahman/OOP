#include <iostream>

class clsA
{
private:
    int _x;

public:
    clsA() {}

    clsA(int value)
    {
        _x = value;
    }

    void print()
    {
        std::cout << "Value of x is: " << _x << std::endl;
    }
};

int main()
{
    // a pointer referes to an integer element in the heap
    std::cout << "\n=====================Stack and heap one element=====================\n";
    int *ptr = new int;
    *ptr = 3;
    std::cout << "heap  : " << ptr << std::endl;
    std::cout << "heap  : " << *ptr << std::endl;
    delete ptr; // <--------------:Note
    std::cout << "________________________________________\n";
    // same pointer referes to an integer element in stack
    int num = 4;
    ptr = &num;
    std::cout << "Stack : " << ptr << std::endl;
    std::cout << "Stack : " << *ptr << std::endl;
    // note this is the same pointer once it pointed to head and another time it pointed to stack one

    std::cout << "\n=====================Stack and heap Array=====================\n";
    // a pointer referes to an integer Array in the Heap
    int *pointer = new int[2];
    pointer[0] = 6;
    pointer[1] = 5;
    std::cout << "Heap array : " << pointer << std::endl;
    std::cout << "Heap array : " << pointer[0] << "," << pointer[1] << std::endl;
    delete[] pointer; // <--------------:Note
    std::cout << "_________________________________________\n";
    // note this is the same pointer once it pointed to head and another time it pointed to stack one
    int array[2];
    pointer = &array[2];
    pointer[0] = 1;
    pointer[1] = 2;
    std::cout << "Stack array : " << pointer << std::endl;
    std::cout << "Stack array : " << pointer[0] << "," << pointer[1] << std::endl;

    std::cout << "\n==========================================\n";

    std::cout << "\n=====================Stack and heap Array of Objects=====================\n";
    int NumberOfObjects = 2;
    clsA *Array = new clsA[NumberOfObjects]; // <-----------:Note array of objects in heap
    for (int i = 0; i < NumberOfObjects; i++)
    {
        Array[i] = clsA(i);
    }
    std::cout << "Heap array\n";
    std::cout << Array << std::endl;
    Array[0].print();
    Array[1].print();
    // for (int i = 0; i < NumberOfObjects; i++)
    // {
    //     Array[i].print();
    // }
    delete[] Array; // <---------:Note
    std::cout << "_________________________________________\n";
    clsA op[NumberOfObjects]; // <------------:Note array of objects in stack
    Array = op;
    Array[0] = clsA(33);
    Array[1] = clsA(55);
    std::cout << "Stack array\n";
    std::cout << Array << std::endl;
    Array[0].print();
    Array[1].print();

    std::cout << "\n=====================Stack and heap one Objects=====================\n";
    std::cout << "normal stack object\n";
    clsA obj(900); // value directly from the object itself
    obj.print();
    clsA *po; // <------------:Note pointer to an object in stack
    po = &obj;
    std::cout << "_________________________________________\n";
    std::cout << "pointer Stack object \n";
    *po = clsA(800); // value from the pointer referes to the object
    std::cout << po << std::endl;
    po->print();
    std::cout << "_________________________________________\n";
    std::cout << "Heap object\n";
    po = new clsA(111); // <-------------:Note pointer to an object in Heap
    std::cout << po << std::endl;
    po->print();
    delete po;
    std::cin.get();
}


/*
==================== POINTER CONCEPT (IMPORTANT) ====================

[1] What is a pointer?
- A pointer is a variable that stores an address in memory.
- It can point to:
    - Variable (int, object, etc.)
    - First element of an array
    - Memory in heap (using new)
    - Memory in stack (normal variables)

---------------------------------------------------------------------

[2] Can one pointer point to everything?

✔ YES, but NOT at the same time.

- A pointer can change where it points:
    int x = 5;
    int* p = &x;     // pointing to x (stack)

    p = new int(10); // now pointing to heap

- Each time you assign a new address:
    → it forgets the old one
    → and points to the new one

---------------------------------------------------------------------

[3] IMPORTANT RULE:

❗ A pointer can only hold ONE address at a time.

Example:
    p = &x;   // pointing to x
    p = arr;  // now pointing to array
    // it is NOT pointing to both

---------------------------------------------------------------------

[4] Type matters (VERY IMPORTANT)

- Pointer type must match the data type:

    int*    → points to int
    clsA*   → points to clsA object

❌ Wrong:
    int* p;
    clsA obj;
    p = &obj;   // ERROR (different types)

---------------------------------------------------------------------

[5] Special case: void*

- void* can point to ANY type:

    void* p;
    int x = 5;
    p = &x;

    clsA obj(10);
    p = &obj;

✔ But:
❌ You cannot use *p directly
✔ You must cast:

    *(int*)p

---------------------------------------------------------------------

[6] Pointer and Arrays

- Array name is like a pointer to first element:

    int arr[2] = {1,2};
    int* p = arr;     // same as &arr[0]

✔ You can use:
    p[0], p[1]

❌ Wrong:
    p = &arr[2]; // OUT OF BOUNDS (danger!)

---------------------------------------------------------------------

[7] Pointer and Ownership

- If you use new → YOU are responsible:

    int* p = new int;
    delete p;

    int* arr = new int[3];
    delete[] arr;

✔ Stack variables are deleted automatically
❌ Never delete stack memory

---------------------------------------------------------------------

[8] Golden Idea

- Pointer is NOT "control for everything"
- It is just:
    → Address of ONE place in memory

=====================================================================
*/