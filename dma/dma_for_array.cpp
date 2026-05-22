// allocate dma for int array
#include<iostream>
using namespace std;
int main()
{
int *p;
p=new int[5];
int i;
for(i=0;i<5;i++)
cin>>p[i];

for(i=0;i<5;i++)
cout<<p[i]<<" ";
}
