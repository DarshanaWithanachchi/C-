#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a number : ";
    cin>>number;

    while(number<100)
    {
        number++;
        cout<<number<<",";
    }
    while(number>200)
    {
        number--;
        cout<<number<<",";
    }
    cout<<number<<endl;
}
