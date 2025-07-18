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

        void FactRev()
        {
            int iCnt = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }
            
            for(iCnt = (iNo / 2); iCnt >= 1; iCnt--)
            {
                if(iNo % iCnt == 0)
                {
                    cout<<iCnt<<"\n";
                }
            }
        }
};
int main()
{
    int iValue1 = 0;

    cout<<"Enter a number : \n";
    cin>>iValue1;


    Show sobj(iValue1);

    sobj.FactRev();

    return 0;
}