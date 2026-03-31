#include <iostream>

class clsPerson
{
private:
	std::string _FirstName;

public:
	void SetFirsName(std::string FirstName)
	{
		_FirstName = FirstName;
	}

	std::string GetFirstName()
	{
		return _FirstName;
	}
	// this Line of code doesn't work with any operating system such as linux mac or any other compilers except Windows
	// declration specefication
	// instead of the ubove we only write this
	__declspec(property(get = GetFirstName, put = SetFirsName)) std::string FirstName; // won't work
};

int main()
{
	clsPerson Person1;
	Person1.SetFirsName("Ahmed");
	std::cout << Person1.GetFirstName() << std::endl;

	Person1.FirstName = "Ahmed";
	std::cout << Person1.FirstName << std::endl;

	return 0;
}