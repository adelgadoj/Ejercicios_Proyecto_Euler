//#PROBLEMA 10
//#Summation of primes
/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/
#include <iostream>
using namespace std;
bool primo(int num){
    bool res=true;
    if(num!=0 || num!=1){
        for(int i=2;i<num;i++){
            if(num%i==0){
                    if(num==i){
                        res=true;
                    }
                    else{
                        res=false;
                        return res;
                    }
            }
        }
    }
    else{
        res=false;
    }
    return res;
}

int sumPrim(int num){
    int s=0;
    for(int i=2;i<num;i++){
        if(i!=2 && i%2!=0){
            if(primo(i)==true){
            s=s+i;
            }
        }
        else if(i==2){
            s=s+2;
        }
        }
    return s;
}
int main()
{

    int suma=sumPrim(2000000);
    cout<<"suma:"<<suma<<endl;
    return 0;
}
