#include <iostream>
using namespace std;
class cube{
    public:
    double height=3.0;
    double width=3.0;
    double lenght=3.0;
};
int main()
{
    cube cube1;
    cube1.height=12;
    cube1.width=12;
    cube1.lenght=12;
    int vol= (cube1.height)*(cube1.width)*(cube1.lenght);
    cout<<"Volume of cube= "<<vol<<endl;
    return 0;
}