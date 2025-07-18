#include<iostream>
using namespace std;

class Show
{
    public:

        int iNo;

        Show(int a)
        {
            this->iNo = a;

        }

        int DollarToINR()
        {
            int iConv = 0;
            iConv = iNo * 70;
            return iConv;
        }

};
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the USD Amount : \n";
    cin>>iValue;

    Show sobj(iValue);

    iRet = sobj.DollarToINR();

    cout<<"The amount in INR is : "<<iRet<<"\n";

    return 0;
}