//#PROBLEMA 6
//#Sum square difference
/*
    The sum of the squares of the first ten natural numbers is,
            `1^2 + 2^2 + ... + 10^2 = 385`
    The square of the sum of the first ten natural numbers is,
            `(1 + 2 + ... + 10)^2 = 55^2 = 3025`

    Hence the difference between the sum of the squares of the first ten natural numbers
    and the square of the sum is `3025 - 385 = 2640`.

    Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

*/
#include <iostream>
#include <math.h>
using namespace std;
int sumaCuadrados(int n){
    int cont=0;
    for(int i=1;i<=n;i++){
        cont=cont+pow(i,2);
    }
    return cont;
}
int cuadradoDeSuma(int n){
    int cont=0;
    for(int i=1;i<=n;i++){
        cont=cont+i;
    }
    return pow(cont,2);
}
int main()
{
    int a=sumaCuadrados(100);
    int b=cuadradoDeSuma(100);
    cout<<b<<" - "<<a<<" = "<<b-a;
    return 0;
}
