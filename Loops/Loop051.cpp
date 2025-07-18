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

        void Table()
        {
            int iCnt = 0;
            int iTable = 1;

            if(iNo < 0)
            {
                iNo = -iNo;
            }


            for(iCnt = 1; iCnt <= 10; iCnt++)
            {
                iTable = iCnt * iNo;

                cout<<iTable<<"\n";
                
            }

        }
};
int main()
{
    int iValue = 0;

    cout<<"Enter a number : \n";
    cin>>iValue;

    Show sobj(iValue);

    sobj.Table();

    return 0;
}