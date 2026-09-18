#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int nums[100];

    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Missing numbers are: ";


    for(int num = 1; num <= n; num++)
    {
        bool found = false;

        for(int i = 0; i < n; i++)
        {
            if(nums[i] == num)
            {
                found = true;
                break;
            }
        }

        if(found == false)
            cout << num << " ";
    }

    return 0;
}
