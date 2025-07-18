#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j,k;
};

class Hello : public Demo
{
    public:
        int x,y;
};

int main()
{
    cout<<sizeof(Demo)<<"\n";
    cout<<sizeof(Hello)<<"\n";
    
    return 0;
}