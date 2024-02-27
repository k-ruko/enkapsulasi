#include <iostream>
using namespace std;
class sementara{
	int a;
int b;
public:
int penyelesaian(int input){
	a=input;
	b=a/2;
	return b;
}
};

int main() {
int n;
cin>>n;
sementara setengah;
int ans=setengah.penyelesaian(n);
cout<<ans<<endl;
	
}

