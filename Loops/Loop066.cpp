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

        int Count()
        {
            int iDigit = 0;
            int iCount = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit < 6)
                {
                    iCount++;
                }

                iNo = iNo / 10;
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

    iRet = dobj.Count();

    cout<<iRet<<"\n";

    return 0;
}