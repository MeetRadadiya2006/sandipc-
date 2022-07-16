#include<iostream>
using namespace std;
int main()
{
    int x=10;
    char y='a';

    y=x+y;
    x=x+y;

    float z=x+1.9;

    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"z="<<z<<endl;
}