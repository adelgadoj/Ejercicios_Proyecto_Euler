//#PLROBLEMA 7
//#10001st prime
/*
    By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

    What is the 10 001st prime number?
*/
#include <iostream>
using namespace std;
bool primo(int num){
    bool condicion;
    if(num!=0 || num!=1){
        for(int i=2;i<=num;i++){
                if(num%i==0){
                    if(num==i){
                        condicion=true;
                    }
                    else{
                        condicion=false;
                        return condicion;
                    }
                }
            }
    }
    else{
        condicion=false;
    }
    return condicion;
}
int main()
{
    int cont=0,i=2;
    while(cont!=10001){
        if(primo(i)==true){
            ++cont;
            ++i;
        }
        else{
            i++;
        }
    }
    cout<<i-1;
    return 0;
}
