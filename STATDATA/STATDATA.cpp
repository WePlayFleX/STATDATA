#include <iostream>

using namespace std;

class Foo
{
private:
	static int count;

public:
	Foo()
	{
		count++;
	}

	int getCount()
	{
		return count;
	}
};

int Foo::count = 0;

int main()
{
	Foo f1, f2, f3;

	cout << "Number of objects: " << f1.getCount() << endl;
	cout << "Number of objects: " << f2.getCount() << endl;
	cout << "Number of objects: " << f3.getCount() << endl;

	system("pause");
	return 0;
}