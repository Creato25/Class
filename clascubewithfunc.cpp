#include <iostream>
using namespace std;
class cube{
    public:
    double height=3.0;
    double width=3.0;
    double lenght=3.0;

    void volume(){
        double vol=height*width*lenght;
        cout<<"Volume of cube is="<<vol;
    }
};
int main()
{
    cube cube1;
    cout<<"Enter the value for Heigh= ";
    cin>>cube1.height;
    cout<<"Enter the value for Width= ";
    cin>> cube1.width;
    cout<<"Enter the value for Lenght= ";
    cin>>cube1.lenght;
   cube1.volume();
    return 0;
}