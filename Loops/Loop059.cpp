#include<iostream>
using namespace std;


class Circle
{
    public:

        float fWidth;
        float fHeight;

        Circle(float a, float b)
        {
            this->fWidth = a;
            this->fHeight = b;
        }

    double RectArea()
    {
        float Area = 0.0f;
        Area = fWidth * fHeight;
        return Area;
    }
};
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0f;

    cout<<"Enter the width of rectangle : \n";
    cin>>fValue1;

    cout<<"Enter the height of rectangle : \n";
    cin>>fValue2;

    Circle cobj(fValue1,fValue2);

    dRet = cobj.RectArea();

    cout<<"Area of rectangle is : "<<dRet<<"\n";


    return 0;
}