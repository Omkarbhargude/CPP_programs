#include<iostream>
using namespace std;

class NNumber
{
    public:
        int iNo;

        // Constructor
        NNumber(int a)
        {
            this->iNo = a;
        }

        bool CheckPrime()
        {
            int iCnt = 0;
            bool bFlag = true;

            //Updater
            if(iNo < 0)
            {
                iNo = -iNo;
            }

            for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                    bFlag = false;
                    break;
                }
            }

            return bFlag;

        }
};
int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

    NNumber nobj(iValue);

    bRet = nobj.CheckPrime();

    if(bRet == true)
    {
        cout<<iValue<<" is a prime number\n";
    }
    else
    {
        cout<<iValue<<" is not a prime number\n";
    }

    return 0;
}