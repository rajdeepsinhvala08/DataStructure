#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter number of attacks: ";
    cin>>n;

    int timeSeries[100];

    cout<<"Enter attack times:\n";

    for(int i=0;i<n;i++)
        cin>>timeSeries[i];

    int duration;

    cout<<"Enter duration: ";
    cin>>duration;

    int total=0;

    for(int i=0;i<n-1;i++)
    {
        int difference=timeSeries[i+1]-timeSeries[i];

        if(difference>=duration)
            total+=duration;
        else
            total+=difference;
    }

    total+=duration;

    cout<<"Total poisoned time = "<<total;

    return 0;
}
