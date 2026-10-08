#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue <string> people;
    people.push("People 1");
    people.push("People 2");
    people.push("People 3");
    people.push("People 4");
    people.push("People 5");
    cout<<"Ticket issued to the First person: "<<people.front()<<endl;
    people.pop();
    while (!people.empty())
    {
        cout << "Remaining waiting People:  "<<people.front()<<endl;
        people.pop();
    }
    return 0;
}
