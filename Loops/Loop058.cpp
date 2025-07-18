#include<iostream>
using namespace std;


class Circle
{
    public:

        float Radius;

        Circle(float a)
        {
            this->Radius = a;
        }

    double CircleArea()
    {
        float PI = 3.14f;
        float Area = PI * Radius * Radius;
        return Area;
    }
};
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    cout<<"Enter the radius : \n";
    cin>>fValue;

    Circle cobj(fValue);

    dRet = cobj.CircleArea();

    cout<<"Area of circle is : "<<dRet<<"\n";


    return 0;
}