#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter number of candies: ";
    cin>>n;

    int candy[100];

    cout<<"Enter candy types:\n";

    for(int i=0;i<n;i++)
        cin>>candy[i];

    int unique=0;

    // Count different candy types
    for(int i=0;i<n;i++)
    {
        bool found=false;

        for(int j=0;j<i;j++)
        {
            if(candy[i]==candy[j])
            {
                found=true;
                break;
            }
        }

        if(found==false)
            unique++;
    }

    int limit=n/2;

    if(unique<limit)
        cout<<"Answer = "<<unique;
    else
        cout<<"Answer = "<<limit;

    return 0;
}
