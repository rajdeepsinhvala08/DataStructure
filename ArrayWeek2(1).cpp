#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int nums[20];

    cout << "Enter sorted unique elements:\n";

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    int i = 0;

    cout << "\nSummary Ranges:\n";

    while(i < n)
    {
        int start = nums[i];


        while(i + 1 < n && nums[i + 1] == nums[i] + 1)
        {
            i++;
        }


        if(start == nums[i])
            cout << start << endl;

        else
            cout << start << "->" << nums[i] << endl;

        i++;
    }

    return 0;
}
