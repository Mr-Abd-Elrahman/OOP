#include <iostream>
#include <string>

// My Solution مفيش داي ان الدوال ترجع قيمة لان احنا هنحط المتغيرات (void)
// switch بردو ملهاش عازة ولف على الفاضي الطريقة الافضل كتابة اسم كل عملية في الدالة
class clsCalculator
{

private:
   float _Num = 0;
   float _n = 0;
   float _Prev = 0;
   int _OPName = 0;
   std::string GetOpName(int op)
   {
      switch (op)
      {
      case 1:
         return "Adding";
         break;

      case 2:
         return "Subtracting";
         break;

      case 3:
         return "Multiplying";
         break;

      case 4:
         return "Dividing";
         break;

      case 5:
         return "Clear";
         break;

      default:
         return "";
      }
   }

public:
   float Add(float Number)
   {

      _n = Number;
      _Prev = _Num;
      _OPName = 1;
      _Num += Number;

      return _Num;
   }

   float Subtract(float Number)
   {
      _n = Number;
      _Prev = _Num;
      _OPName = 2;
      _Num -= Number;
      return _Num;
   }

   float Multiply(float Number)
   {
      _n = Number;
      _Prev = _Num;
      _OPName = 3;
      _Num *= Number;
      return _Num;
   }

   float Divide(float Number)
   {

      if (Number == 0)
      {
         Number = 1;
      }
      _OPName = 4;
      _n = Number;
      _Prev = _Num;
      _Num /= Number;
      return _Num;
   }
   float Clear()
   {
      _OPName = 5;
      _n = 0;
      _Num = 0;
      return _Num;
   }

   void PrintResult()
   {
      std::string OpName = GetOpName(_OPName);

      if (_n == 0)
      {
         std::cout << "\nResult After " << OpName << " is : " << _Num << std::endl;
      }
      else
         std::cout << "\nResult After " << OpName << " " << _n << " is : " << _Num << std::endl;
   }
};

// Master Solution
class Calculator
{
private:
   float _Result = 0;
   float _PreviousResult = 0;
   float _LastNumber = 0;
   std::string _LastOpration = "clear";

   bool _IsZero(float Number)
   {
      return Number == 0;
   }

public:
   void Add(float Number)
   {
      _LastNumber = Number;
      _PreviousResult = _Result;
      _LastOpration = "Adding";
      _Result += Number;
   }

   void Subtract(float Number)
   {
      _LastNumber = Number;
      _PreviousResult = _Result;
      _LastOpration = "Subtracting";
      _Result -= Number;
   }

   void Multiply(float Number)
   {
      _LastNumber = Number;
      _PreviousResult = _Result;
      _LastOpration = "Multipling";
      _Result *= Number;
   }

   void Divide(float Number)
   {
      _LastNumber = Number;
      if (_IsZero(Number))
      {
         Number = 1;
      }
      _PreviousResult = _Result;
      _LastOpration = "Dividing";
      _Result /= Number;
   }

   void Clear()
   {
      _LastNumber = 0;
      _Result = 0;
      _PreviousResult = 0;
      _LastOpration = "clear";
   }
   void ClancelingLastOperation()
   {
      _LastNumber = 0;
      _Result = _PreviousResult;
      _LastOpration = "Canceling Last Operation";
   }
   void PrintResult()
   {
      std::cout << "Result After " << _LastOpration << " " << _LastNumber << " is : " << _Result << std::endl;
   }
};

class ACalculator
{

private:
   float _Result = 0;
   float _LastNumber = 0;
   float _PreviousNumber = 0;
   std::string _OperationName = "Clear";

   bool _IsZero(float Number)
   {
      return (Number == 0);
   }

public:
   void Add(float Number)
   {
      _LastNumber = Number;
      _PreviousNumber = _Result;
      _OperationName = "Adding";
      _Result += Number;
   }

   void Subtract(float Number)
   {
      _LastNumber = Number;
      _PreviousNumber = _Result;
      _OperationName = "Subtracting";
      _Result -= Number;
   }

   void Multiply(float Number)
   {
      _LastNumber = Number;
      _PreviousNumber = _Result;
      _OperationName = "Multiplying";
      _Result *= Number;
   }

   void Devide(float Number)
   {
      _LastNumber = Number;

      if (Number == 0) // there is no dividing on zero
      {
         Number = 1;
      }
      _PreviousNumber = _Result;
      _OperationName = "Dividing";
      _Result /= Number;
   }

   void Clear()
   {
      _LastNumber = 0;
      _Result = 0;
      _PreviousNumber = 0;
      _OperationName = "Clear";
   }

   void CancelingLastOperation()
   {
      _LastNumber = 0;
      _Result = _PreviousNumber;
      _OperationName = "Canceling Last Operation";
   }

   void PrintResult()
   {
      if (_Result == 0 || _Result == _PreviousNumber) // this for clear and canceling operation
      {
         std::cout << "Result After " << _OperationName << " is : " << _Result << std::endl;
      }
      else
      {
         std::cout << "Result After " << _OperationName << " " << _LastNumber << " is : " << _Result << std::endl;
      }
   }
};
int main()
{
   Calculator Calculator1;

   Calculator1.Add(10);
   Calculator1.PrintResult();

   Calculator1.Add(100);
   Calculator1.PrintResult();

   Calculator1.Subtract(20);
   Calculator1.PrintResult();

   Calculator1.ClancelingLastOperation();
   Calculator1.PrintResult();

   Calculator1.Add(20);
   Calculator1.Multiply(3);
   Calculator1.PrintResult();
   Calculator1.Clear();

   std::cin.get();
}