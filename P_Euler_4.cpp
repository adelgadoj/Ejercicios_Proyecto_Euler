//#PROBLEMA 4
//#Largest palindrome product
/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
bool palin(long long int n){
    char num[100];
    sprintf(num,"%ld",n);
    char num2[100];
    int cont=0;
    bool var=true;
    for(int i=strlen(num)-1;i>=0;i--){
        num2[cont]=num[i];
        cont++;
    }

    if(strcmp(num,num2)!=0){
            var=false;
            return var;
    }
    else{
        return var;
    }

}

int main()
{
    int x,y;
    long long int a,m=100*100;
    for(int i=100; i<=999; ++i){
        for(int j=100; j<=999; ++j){
            a=i*j;
            if(palin(a)==true && a>m){
                m=a;
                x=i;
                y=j;
            }
        }
    }

    cout<<x<<" x "<<y<<" = "<<m;
    return 0;
}
