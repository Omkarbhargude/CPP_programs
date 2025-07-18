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

        bool CheckZero()
        {
            int iDigit = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit == 0)
                {
                    return true;
                }

                iNo = iNo / 10;
            }

            return false;
        }
};
int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the value : \n";
    cin>>iValue;

    Digit dobj(iValue);

    bRet = dobj.CheckZero();

    if(bRet == true)
    {
        cout<<"It contains Zero in it\n";
    }
    else
    {
        cout<<"It does not contain zero in it\n";
    }

    return 0;
}