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

        int MultDigit()
        {
            int iDigit = 0;
            int iMult = 1;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iMult = iMult * iDigit;
                iNo = iNo / 10;
            }

            return iMult;
        }
};
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the value : \n";
    cin>>iValue;

    Digit dobj(iValue);

    iRet = dobj.MultDigit();

    cout<<"Multiplication of given digit is : "<<iRet<<"\n";

    return 0;
}