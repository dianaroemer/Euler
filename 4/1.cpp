#include <iostream>
using namespace std;

int main() {

//    int res = 13;
//    cout<<res<<"\n";

    int temp1;
    int temp2;
    int temp3;
    int temp4;
    int temp5;
    int temp6;
    int temp;


    for( int i = 0; i <= 999; i++) {

        for( int j = 0; j <= 999; j++){

            //Palindrome Check
            temp = i*j;
//            cout<<temp<<"  ";
   



            temp1 = temp/100000;
            temp = temp-(temp1*100000);
            temp2 = temp/10000;
            temp = temp-(temp2*10000);
            temp3 = temp/1000;
            temp = temp-(temp3*1000);
            temp4 = temp/100;
            temp = temp-(temp4*100);
            temp5 = temp/10;
            temp = temp-(temp5*10);
            temp6 = temp/1;  

            if( temp1!=0 && temp1==9 &&
                temp1==temp6 && temp2==temp5 && temp3==temp4)
                cout<<i*j<<" is the sum of "<<i<<" and "<<j<<".\n";

        }

    }

    return 0;
}
