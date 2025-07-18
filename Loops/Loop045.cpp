#include<iostream>
using namespace std;


class Pattern
{
    public:

        int iNo;

        Pattern(int a)
        {
            this->iNo = a;
        }

        void Display()
        {
            int iCnt = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                cout<<"$\t*\t";
            }

            cout<<"\n";
        }
};
int main()
{
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    Pattern pobj(iValue);

    pobj.Display();


    return 0;
}