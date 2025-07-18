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
    const Demo obj2(30,40);

    obj1.Fun();     // A
    obj1.Gun();     // A
    obj2.Fun();     // NA
    obj2.Gun();     // A
    
    return 0;
}