//first main function

#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

class my_variables
{
public:
	int a;
	int b;

	void printa()
	{
		printf("%d %d\n", a, b);
	}
};

std::ostream &operator << (std::ostream &stream, my_variables obj)
{
	stream << obj.a << " " << obj.b << std::endl;

	return stream;
}

int main()
{
	my_variables my_variables;

	my_variables.a = 7;
	my_variables.b = 5;
	my_variables.printa();

	printf("hello, world!\n");

	cout << "this is c++ style!" << endl;

	std::ofstream ofile("style.txt");
	ofile << my_variables << std::endl;
}