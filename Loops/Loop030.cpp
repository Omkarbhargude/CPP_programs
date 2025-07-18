#include<iostream>
using namespace std;

class Digit
{
    public:

        int iNo;

        Digit(int a)
        {
            this->iNo = a;
        }

        int SumDigit()
        {
            int iDigit = 0;
            int iSum = 0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iSum = iSum + iDigit;
                iNo = iNo / 10;
            }

            return iSum;
        }
};
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the value : \n";
    cin>>iValue;

    Digit dobj(iValue);

    iRet = dobj.SumDigit();

    cout<<"Summation of digits are : "<<iRet<<"\n";

    return 0;
}