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

        bool CheckPerfect()
        {
            int iCnt = 0, iSum = 0;

            //Updater
            if(iNo < 0)
            {
                iNo = -iNo;
            }

            for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                    iSum = iSum + iCnt;
                }
            }

            if(iSum == iNo)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};
int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

    NNumber nobj(iValue);

    bRet = nobj.CheckPerfect();

    if(bRet == true)
    {
        cout<<iValue<<" is a perfect number\n";
    }
    else
    {
        cout<<iValue<<" is not a perfect number\n";
    }

    return 0;
}