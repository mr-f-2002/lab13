#include <iostream>
namespace my_space1
{
	std::string name = "my_space1";
	void hello() { std::cout << "Hello World! \n"; }
}
namespace my_space2
{
	std::string name = "my_space2";
	void hello() { std::cout << "Hello World! \n"; }
}

int main()
{
	std::cout << "Current Name Space : " << my_space1::name << std::endl;
	my_space1::hello();
	std::cout << "Current Name Space : " << my_space2::name << std::endl;
	my_space2::hello();
}