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
};

int main()
{
    Marvellous mobj;

    cout<<"Size of Marvellous Class : "<<sizeof(mobj)<<"\n";
    
    return 0;
}