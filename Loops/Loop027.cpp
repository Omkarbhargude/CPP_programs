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

        int CountDigit()
        {
            int iDigit = 0;
            int iCount = 0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iNo = iNo / 10;
                iCount++;
            }

            return iCount;
        }
};
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the value : \n";
    cin>>iValue;

    Digit dobj(iValue);

    iRet = dobj.CountDigit();

    cout<<"Total digits are : "<<iRet<<"\n";

    return 0;
}