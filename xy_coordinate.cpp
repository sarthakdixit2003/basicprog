#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout<<"Enter coordinate";
    cin>>x>>y;
    if(x > 0 && y > 0)
        cout<<"First quadrant"<<"\n";
    else if(x > 0 && y < 0)
        cout<<"Fourth quadrant"<<"\n";
    else if(x < 0 && y > 0)
        cout<<"Second quadrant"<<"\n";
    else
        cout<<"Third quadrant"<<"\n";
}
