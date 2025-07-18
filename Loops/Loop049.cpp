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

        void MultipleDisplay()
        {
            int iCnt = 0;
            int iMult = 0;


            for(iCnt = 1; iCnt <= 5; iCnt++)
            {
                iMult = iCnt * iNo;
                cout<<iMult<<"\n";
            }

        }
};
int main()
{
    int iValue = 0;

    cout<<"Enter a number : \n";
    cin>>iValue;

    Show sobj(iValue);

    sobj.MultipleDisplay();

    return 0;
}