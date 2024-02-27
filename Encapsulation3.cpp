// C++ program to demonstrate
// Encapsulation
#include <iostream>
using namespace std;

class encapsulasi {
private:
	// Data hidden from outside world
	int x;

public:
	// Function to set value of
	// variable x
	void beriNilai(int a) { x = a; }

	// Function to return value of
	// variable x
	int dapatkan() { return x; }
};

// Driver code
int main()
{
	encapsulasi obj;
	obj.beriNilai(5);
	cout << obj.dapatkan();
	return 0;
}

