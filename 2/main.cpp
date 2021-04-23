#include <iostream>
using namespace std;
int main(){
    cout<<"SERIE FIBBONACCI"<<endl;
    int x=1,y=2,z=0,cont=0;
    cout<<"PARES:";
    while(y<4000000){
        z=x+y;
        if(y%2==0){
            cout<<y<<" ";
            cont=cont+y;
        }
        x=y;
        y=z;
    }
    cout<<"\nLA SUMA ES:"<<cont<<endl;
    return 0;
}
