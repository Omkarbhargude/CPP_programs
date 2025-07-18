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
};

int main()
{
    Marvellous mobj;

    cout<<mobj.i<<"\n";
    cout<<mobj.j<<"\n";
    cout<<mobj.k<<"\n";
        
    return 0;
}