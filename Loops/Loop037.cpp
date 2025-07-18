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

        void PrintEven()
        {
            int iCnt = 0, iSum = 2;

            if(iNo < 0)
            {
                iNo = -iNo;
            }   

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                cout<<iSum<<"\n";

                iSum = iSum + 2;
            }
        }

};
int main()
{
    int iValue1 = 0;

    cout<<"Enter a number : \n";
    cin>>iValue1;


    Show sobj(iValue1);

    sobj.PrintEven();

    return 0;
}