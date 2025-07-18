#include<iostream>
using namespace std;


class Meter
{
    public:

        int iArea;

        Meter(int a)
        {
            this->iArea = a;
        }

        double SquareMeter()
        {
            float iSmeter = 0.0929f;
            float fAns = iArea * iSmeter;
            return fAns;
        }
};
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    cout<<"Enter the area in square feet : \n";
    cin>>iValue;

    Meter mobj(iValue);

    dRet = mobj.SquareMeter();

    cout<<"The area in square meter is : "<<dRet<<"\n";

    return 0;
}