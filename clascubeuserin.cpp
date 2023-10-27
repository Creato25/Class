#include <iostream>
using namespace std;
class cube{
    private:
    double height=3.0;
    double width=3.0;
    double lenght=3.0;
    
public:
    void input(){
    cout<<"Enter the value for Heigh= ";
    cin>>height;
    cout<<"Enter the value for Width= ";
    cin>> width;
    cout<<"Enter the value for Lenght= ";
    cin>>lenght;
    }

    int volume(){
        int vol=height*width*lenght;
       return vol;
    }

};
int main()
{
   class cube cube1;
   cube1.input();
   cube1.volume();
   int vol=cube1.volume();
   cout<<"The volume of cube is= "<<vol<<endl;
    return 0;
}