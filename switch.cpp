#include<iostream>
using namespace std;

int main()
{
    char alpha;
    cout<<"input any character";
    cin>>alpha;

    switch(alpha)
    {
        case 'a':
            cout<<"Hello!!";
            break;
        case 'b':
            cout<<"Namaste!!";
            break;
        case 'c':
            cout<<"Halo!!";
            break;
        case 'd':
            cout<<"Ciao!!";
            break;
        case 'e':
            cout<<"salut!!";
            break;
        default:
            cout<<"I am still learning more!!";
    }
}