#include <iostream>
using namespace std;

// declaring class
class lingkaran {
	// access modifier
private:
	// Data Member
	
	float luas;
	float jari_jari;

public:
	void dapatkanJariJari()
	{
		cout << "Enter jari-jari\n";
		cin >> jari_jari;
	}
	void cariLuas()
	{
		luas = 3.14 * jari_jari * jari_jari;
		cout << "Area of lingkaran= " << luas;
	}
};
int main()
{
	// creating instance(object) of class
	lingkaran ling;
	ling.dapatkanJariJari(); // calling function
	ling.cariLuas(); // calling function
}

