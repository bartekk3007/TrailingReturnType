#include <iostream>

using namespace std;

auto sum(int a, int b) -> decltype(a + b)
{
	return a + b;
}

int main()
{
	cout << sum(2, 3) << '\n';

	int i = 5;
	decltype(i) j = 0;

	cout << typeid(j).name();

	return 0;
}