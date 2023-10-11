#include <iostream>
using namespace std;

int main() {
 int a[5],i,sum=0,avg=0;
    cout<<"enter 5 values:";
    for(i=0;i<5;i++)
        {
          cin>>a[i];
            cout<<a[i]<<endl;
            sum+=a[i];
        }
    avg=sum/5;
    cout<<"\n sum="<<sum;
    cout<<"\n avg="<<avg;
    return 0;
}
