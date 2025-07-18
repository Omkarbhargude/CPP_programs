#include<iostream>
using namespace std;

class Marvellous
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Marvellous()
        {
            i = 10;
            j = 20;
            k = 30;
        }
        void Display()
        {
            cout<<"Value of i : "<<i<<"\n";
            cout<<"Value of j : "<<j<<"\n";
            cout<<"Value of k : "<<k<<"\n";
        }
};

int main()
{
    Marvellous mobj;

    mobj.Display();
        
    return 0;
}