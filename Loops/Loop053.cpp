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

        void Display()
        {
            int iCnt = 0;

            for(iCnt = -iNo; iCnt <= iNo; iCnt++)
            {
                if(iCnt < 0)
                {
                    cout<<"$\t";
                }
                else if(iCnt > 0)
                {
                    cout<<"*\t";
                }
            }

            cout<<"\n";

        }
};
int main()
{
    int iValue = 0;

    cout<<"Enter a number : \n";
    cin>>iValue;

    Show sobj(iValue);

    sobj.Display();

    return 0;
}