#include <iostream>
#include <math.h>
using namespace std;

int main() {

   //cout<<"Hello!\n";


    for ( double i = 1; i < 100000000000; i++){

    /*    if(i%2==0 && i%3==0 && i%4==0 && i%5==0 && i%6==0 && i%7==0 
            && i%8==0 && i%9==0 && i%10==0){
            cout<<i<<"\n";
            break;
        }
*/

        if( fmod(i,1)==0 && fmod(i,11)==0 &&
            fmod(i,2)==0 && fmod(i,12)==0 &&
            fmod(i,3)==0 && fmod(i,13)==0 &&
            fmod(i,4)==0 && fmod(i,14)==0 &&
            fmod(i,5)==0 && fmod(i,15)==0 &&
            fmod(i,6)==0 && fmod(i,16)==0 &&
            fmod(i,7)==0 && fmod(i,17)==0 &&
            fmod(i,8)==0 && fmod(i,18)==0 &&
            fmod(i,9)==0 && fmod(i,19)==0 &&
            fmod(i,10)==0 && fmod(i,20)==0){
            cout<<i<<"\n";
            
            cout.precision(15);
            cout<< fixed << i << endl;
                        


            break;
        }
/*
        if(i%19==0 && i%2==0 && i%3==0 && i%4==0 && i%5==0 && i%6==0 && i%7==0 
            && i%8==0 && i%9==0 && i%10==0 && i%11==0 && i%12==0 && i%13==0){
           // && i%14==0 && i%15==0 && i%16==0 && i%17==0 && i%18 && i%20==0){
            cout<<i<<"\n";
            break;
        }

*/

     }
           



    return 0;
}
