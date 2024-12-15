/*#include<iostream>
using namespace std;
int main()
{
int umesh=31;
int &chinnu=umesh;
cout<<chinnu<<endl;
cout<<umesh<<endl;
chinnu=1999;
cout<<endl;
}*/

/*#include<iostream>
using namespace std;
void doublenum(int &num)
{
    num*=2;
}
int main()
{
    int number=5;

    doublenum(number);
    {
      cout<<number;
    }
}*/

//Default constructor

/*#include<iostream>
using namespace std;
class myclass{
private:
    int x;
    int y;
public:
    myclass(){
        x=1;
        y=04;
        cout<<"default construcutor x and y set to default"<<endl;
    }
    void dispalvalues(){
        cout<<x<<endl<<y<<endl;
    }
};
    int main()
    {
        myclass obj;
        obj.dispalvalues();
    }*/


    //
#include<iostream>
using namespace std;
class myclass{
private:
    int x;
    int y;
public:
    myclass(int a,int b){
        x=a;
        y=b;
        cout<<"parameterized constructor x and y "<<endl;
    }
    void dispalvalues(){
        cout<<x<<endl<<y<<endl;
    }
};
    int main()
    {
        myclass obj(3,40);
        myclass obj1(60,4);
        obj. dispalvalues();
        obj1. dispalvalues();
    }

