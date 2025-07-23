#include<iostream>
using namespace std;

class Pattern
{
    public:

        int iNo;

        Pattern(int A)
        {
            this->iNo = A;
        }

        void DisplayPattern()
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                iSum = iSum + 2;
                cout<<iSum<<"\t";
            }
            cout<<"\n";
        }
};

int main()
{
   int iValue1 = 0;

   cout<<"Enter a number : \n";
   cin>>iValue1;

   Pattern pobj(iValue1);

   pobj.DisplayPattern();


    return 0;
}