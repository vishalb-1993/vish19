#include<iostream>
 using namespace std;
 int main () 
 {
 int n,i,a;
 double sum=0;
 double avg=0;
 cout<<"\nEnter the no of elements:"<<endl;
 cin>>n;
     cout<<n<<endl;
 for(i=0;i<n;i++)
{
cout<<"Enter the number"<<i+1<<": "<<endl;
 cin>>a;
    cout<<"number"<<i+1<<":"<<a<<endl;
 sum=sum+a;

 }
     avg=sum/n;
 cout<<"Avg of "<<n<<" numbers : "<<avg;
 return 0;
 }
