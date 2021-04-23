#include <iostream>
using namespace std;
int triplet(int sum){
    int s;
    for (int i = 1; i<1000; i++) {
        for (int j = i + 1; j<1000; j++) {
            for (int k = j + 1; k<1000; k++) {
                int x = i*i, y = j*j, z = k*k;
                if (z == x + y){
                    s=i+j+k;

                    if(s==sum){
                        cout<<i<<" + "<<j<<" + "<<k<<" = "<<s<<endl;
                        return i*j*k;
                    }
                }
            }
        }
    }
    return 0;
}
int main()
{
    int s=1000;
    cout<<triplet(s);
    return 0;
}
