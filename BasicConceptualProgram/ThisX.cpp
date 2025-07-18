#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;
        Demo(int A, int B)
        {
            i = A; j = B;
        }
        void Display(int x) // void Display(Demo *this, int x)
        {
            cout<<"Value of i "<<this->i<<"\n";
            cout<<"Value of j "<<this->j<<"\n";
        }
};
int main()
{
    Demo obj(11,21);

    obj.Display(51);    // Display(&obj,51);

    return 0;
}