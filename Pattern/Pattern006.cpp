#include<iostream>
using namespace std;

class Pattern
{
    public:

        void Display()
        {
            int i = 0, j = 0;

            for(i = 1; i <= 4; i++)
            {
                for(j = 1; j <= 4; j++)
                {
                    cout<<"*\t";
                }
                cout<<"\n";
            }
        }
};

int main()
{
    Pattern pobj;

    pobj.Display();


    return 0;
}