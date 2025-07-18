#include<iostream>
using namespace std;

class Degree
{
    public:
        
        float fTemp;

        Degree(float a)
        {
            this->fTemp = a;
        }

        double Celcius()
        {
            int Celcius = 0;
            Celcius = (fTemp - 32) * 5/9;
            return Celcius;
        }
};

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    cout<<"Enter temperature in Fehrenheit : \n";
    cin>>fValue;

    Degree dobj(fValue);

    dRet = dobj.Celcius();

    cout<<"The temperature in celcius is : "<<dRet<<"\n";

    return 0;
}