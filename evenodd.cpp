#include<iostream>
using namespace std;
int prime(int a);
int x,c,b,count;
int main()
{
 cout<<"enter x=\n";
 cin>>x;
 if(x%2==0)
 {
  cout<<"it is even number"<<endl;
 }
 else
 {
  cout<<"it is odd num"<<endl;
 }
 cout<<"enter b value\n";
 cin>>b;
 c=prime(b);
 //cout<<"c value: "<<c<<endl;
 if(c==2)
 cout<<"it is prime num"<<endl;
 else
 cout<<"it is not prime num"<<endl;
}
 int prime(int y)
{
 int z;
 for(z=1;z<=y;z++)
 {
  if(y%z==0)
  {
   count++;
  }
 }
 return count;
}
