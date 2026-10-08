#include<iostream>
using namespace std;
class person
{
public:
    string name = "SERGIO MARQUINA";
    int age = 40;
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class superhero : public person
{
public:
    string superpower = "GENIUS-LEVEL INTELLECT.........";
    void supdisp()
    {
        cout<<"SuperPower: "<<superpower<<endl;
    }
};
int main()
{
    superhero sh;
    sh.display();
    sh.supdisp();
}
