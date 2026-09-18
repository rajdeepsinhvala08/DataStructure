#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int nums[100];

    cout << "Enter elements:\n";

    for(int i=0;i<n;i++)
        cin>>nums[i];

    int j=0;

    for(int i=0;i<n;i++)
    {
        if(nums[i]!=0)
        {
            swap(nums[i],nums[j]);
            j++;
        }
    }

    cout<<"After moving zeros:\n";

    for(int i=0;i<n;i++)
        cout<<nums[i]<<" ";

    return 0;
}
