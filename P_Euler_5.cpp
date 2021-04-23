#include <iostream>
using namespace std;
int main()
{
    int i=20;
    int num=1;
    while(i>0){
        if(num%i==0){
            --i;

        }
        else{
            num++;
            i=20;
        }
    }
    cout<<num<<endl;
    return 0;
}
