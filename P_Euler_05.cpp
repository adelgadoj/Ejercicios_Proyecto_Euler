//#PROBLEMA 5
//#Smallest multiple
/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
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
