#include <iostream>


class clsAddress
{
 private:
  std::string _AddressLine1;
  std::string _AddressLine2;
  std::string _PoBox;
  std::string _ZipCode;


  public:
  
  //Constructor
   clsAddress(std::string AddressLine1,std::string AddressLine2,std::string PoBox,std::string ZibCode)
   {
    _AddressLine1 = AddressLine1;
    _AddressLine2 = AddressLine2;
    _PoBox = PoBox;
    _ZipCode = ZibCode;
     
   }

  void SetAddressLine1(std::string AddressLine1)
  {
    _AddressLine1 = AddressLine1;

  }
  std::string AddressLine1()
  {
    return _AddressLine1;
  }

  void SetAddressLine2(std::string AddressLine2)
  {
    _AddressLine2 = AddressLine2;

  }
  std::string AddressLine2()
  {
    return _AddressLine2;
  }


  void SetPoBox(std::string PoBox)
  {
    _PoBox = PoBox;

  }
  std::string PoBox()
  {
    return _PoBox;
  }

  void SetZipCode(std::string ZibCode)
  {
    _ZipCode = ZibCode;

  }
  std::string ZipCode()
  {
    return _ZipCode;
  }

  void Print()
  {
    std::cout << "Address Details\n";
    std::cout << "------------------------------------------\n";
    std::cout << "Address Line1 : " << _AddressLine1 << std::endl;
    std::cout << "Address Line2 : " << _AddressLine2 << std::endl;
    std::cout << "Post Box      : " << _PoBox << std::endl;
    std::cout << "Z Code        : " << _ZipCode << std::endl;
    std::cout << "------------------------------------------\n";

  }

};



int main()
{
    clsAddress Address1("Qena","Qus","12344","dfgdf44r534");
    
    Address1.Print();
    std::cin.get();
}