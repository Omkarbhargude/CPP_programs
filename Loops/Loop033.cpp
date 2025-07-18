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

        void Accept()
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                cout<<"*\n";
            }
        }
};
int main()
{
    int iValue = 0;

    cout<<"Enter a number : \n";
    cin>>iValue;

    Show sobj(iValue);

    sobj.Accept();

    return 0;
}