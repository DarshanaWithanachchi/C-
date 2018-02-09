#include<iostream>
using namespace std;
int main()
{
    int toshop=500,backhome=500,distance;
    distance = toshop+backhome;
    std::cout<<"The distance I walked : "<<distance<<"meters"<<endl;

    int time=50,shopingtime=30,walkingTime,speed;
    walkingTime=(time-shopingtime);
    speed=(toshop+backhome)/walkingTime;
    std::cout<<"My average speed is : "<<speed<<"meter per minute"<<endl;

    int weekshoppingtime=3,alltime;
    alltime=time*weekshoppingtime;
    cout<<"Time I spent on shopping for a weed : "<<alltime<<"minutes"<<endl;
    return 0;
}

