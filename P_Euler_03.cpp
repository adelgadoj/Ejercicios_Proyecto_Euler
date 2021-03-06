//#PROBLEMA 3
//#Largest prime factor
/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
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
int main(){
    long long int n=600851475143;
    int cons;
    for(int i=2; n!=1; ++i){
        while(primo(i)==true && n%i==0){
            n=n/i;
            cons=i;
            cout<<cons<<" ";
        }
    }
    cout<<"\nMAXIMO FACTOR:"<<cons;
    return 0;
}
