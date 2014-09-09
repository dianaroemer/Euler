#include <iostream>
#include <math.h>
using namespace std;

int main(){

	int primecount = 1;
	int numprim = 2;
	int i = 1;
	bool amprime = true;

//	int root = numprim/2;
	cout<<"Initialization\n";


	while(primecount <= 10001){

		double root = sqrt(numprim);
		for( int i = 1; i <= root; i++){

//			cout<<"numprime = "<<numprim<<" and i = "<<i;
	
			if (numprim % i == 0 && i!=1){
				amprime = false;	
//				cout<<" and I am setting amprime = false";
			}
	
//			cout<<"\n";
	
		}
//		if( amprime == false )
//			cout<<"I am "<<numprim<<" and I am not a prime.\n";
//		else{
		if( amprime == true ){
			cout<<"I am "<<numprim<<" and I am Optimus prime. My prime index = "<<primecount<<"\n";
			primecount++;
	}

	
		amprime = true;
		numprim++;
	}

    return 0;
}
