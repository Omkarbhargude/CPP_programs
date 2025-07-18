#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int No1;
        int No2;

        Arithematic()
        {
            cout<<"Inside default cnostructor\n";
            No1 = 0;
            No2 = 0;
        }
        Arithematic(int A, int  B)
        {
            cout<<"Inside parametrised cnostructor\n";
            No1 = A;
            No2 = B;
        }
        ~Arithematic()
        {
            cout<<"Inside destructor\n";
        }
};

int main()
{
    Arithematic obj1;
    Arithematic obj2(11,10);

    return 0;
}