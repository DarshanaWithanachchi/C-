#include<iostream>
#include<string>

using namespace std;

int main()
{
    string aHair="Brown",aEyes="Blue",bHair="Black",bEyes="Brown",cHair="Red",cEyes="Black";

    bool haircheck=(aHair=="Brown");
    cout<<haircheck<<endl;

    haircheck=(aHair=="Brown") || (bHair=="Red");
    cout<<haircheck<<endl;

    bool eyescheck=(aEyes=="Blue") || (bEyes=="Brown") || (cEyes=="Black");
    cout<<eyescheck<<endl;
}
