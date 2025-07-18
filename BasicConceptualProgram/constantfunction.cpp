#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;

        Demo(int a = 0, int b = 0)
        {
            i = a; j = b;
        }

        void Fun()
        {
            this->i++;
            this->j++;
        }

        void Gun() const
        {
            // this->i++;       NA
            // this->j++;       NA
        }
};

int main()
{
    Demo obj1(10,20);
    Demo obj2(30,40);

    cout<<obj1.i<<"\t"<<obj1.j<<"\n";
    obj1.Fun();
    cout<<obj1.i<<"\t"<<obj1.j<<"\n";

    cout<<obj2.i<<"\t"<<obj2.j<<"\n";
    obj2.Gun();
    cout<<obj2.i<<"\t"<<obj2.j<<"\n";
    
    return 0;
}