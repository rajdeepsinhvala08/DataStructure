#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits)
{
    // Start from the last digit
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        // If digit is less than 9
        if (digits[i] < 9)
        {
            digits[i]++;      // Add 1
            return digits;    // Done
        }

        // If digit is 9
        digits[i] = 0;
    }

    // If all digits were 9
    vector<int> result(digits.size() + 1, 0);
    result[0] = 1;

    return result;
}

int main()
{
    vector<int> digits = {9, 9, 9};

    vector<int> answer = plusOne(digits);

    cout << "Output: ";

    for (int num : answer)
    {
        cout << num << " ";
    }

    return 0;
}
