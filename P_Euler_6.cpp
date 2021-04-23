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
