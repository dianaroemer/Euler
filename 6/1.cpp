#include <iostream>
using namespace std;

int main(){


    double sumsqr = 0;
    double sqrsum = 0;

    for(int i = 0; i <=100; i++){

        sumsqr = sumsqr + (i*i);

    }

    cout<<sumsqr<< endl;

    for (int i = 0; i <=100; i++){

        sqrsum = sqrsum + i;

    }

    sqrsum = sqrsum * sqrsum;

    cout<<sqrsum<< endl;

    double result = sqrsum - sumsqr;

    cout<< fixed << result << endl;


    return 0;
}

