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

        int DiffOddEvenDigit()
        {
            int iDigit = 0;
            int iSum1 = 0, iSum2 = 0; 

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;

                if(iDigit % 2 == 0)
                {
                    iSum1 = iSum1 + iDigit;
                }
                else
                {
                    iSum2 = iSum2 + iDigit;
                }
                iNo = iNo / 10;
            }

            return iSum1 - iSum2;
        }
};
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the value : \n";
    cin>>iValue;

    Digit dobj(iValue);

    iRet = dobj.DiffOddEvenDigit();

    cout<<"Diff of even and odd digit is : "<<iRet<<"\n";

    return 0;
}