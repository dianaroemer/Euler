#include <iostream>
using namespace std;

int main() {

	int res = 2;
	int tra;
	int fib1 = 1;
	int fib2 = 2;
	int temp;

	cout<<fib1<<"\n"<<fib2<<"\n";	

	while(fib2 < 4000000){
	
		temp = fib2;
		fib2 = fib1 +fib2;
		fib1 = temp;

		if(fib2%2==0)
			res = res + fib2;

		cout<<fib2<<"\n";
	}


	cout<<res<<"\n";

	return 0;


}
