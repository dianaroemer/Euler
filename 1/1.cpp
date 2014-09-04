#include <iostream>
using namespace std;

int main() {

	int res = 0;
	int tra;

	for( tra = 0; tra < 1000; tra++){

		if( tra%3==0 || tra%5==0)
			res = res + tra;
		
	}

	cout<<res<<"\n";
	
	return 0;

}
