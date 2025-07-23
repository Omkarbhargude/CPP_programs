#include<iostream>
using namespace std;

class Pattern
{
    public:

        int iRow;
        int iCol;

        Pattern(int A, int B)
        {
            this->iRow = A;
            this->iCol = B;
        }

        void DisplayPattern()
        {
            int i = 0, j = 0, k = 1;

            for(i = iRow; i >= 1; i--)
            {
                for(j = 1; j <= iCol; j++)
                {
                    cout<<k<<"\t";
                    k++;

                    if(k == 10)
                    {
                        k = 1;
                    }
                }
                cout<<"\n";
            }
        }
};

int main()
{
   int iValue1 = 0, iValue2 = 0;

   cout<<"Enter number of Rows : \n";
   cin>>iValue1;

   cout<<"Enter number of columns : \n";
   cin>>iValue2;

   Pattern pobj(iValue1,iValue2);

   pobj.DisplayPattern();


    return 0;
}