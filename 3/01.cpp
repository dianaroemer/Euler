#include <iostream>
#include <math.h>
using namespace std;

int main() {


	int res = 13;
    double number = 600851475143;
	
//	cout<<res<<"\n";

    cout<<"Number is "<<number<<". Factors as follows: \n";

    //Find factor
	for (double i = 2; i <= number/71; i++){
	
        if(fmod(number,i)==0){                 //number%i == 0){
            cout<<"Factor of "<<number<<" is "<<i;

            //Is factor a prime?
            for(double j = 2; j < i/2; j++){
                if(fmod(i,j)==0){                     //i%j==0){
                    cout<<" - Current Factor "<<i<<" is not a prime";// divisible by "<<j<<"\n";
                break;
                }

            }

            cout<<"\n";
        }

	}




	return 0;
}
