#include <iostream>

using namespace std;

int main()
{
    int nums[] = {555,901,482,1771};
    int even_digit_count = 0;

    for (int num : nums)
    {
        int count = 0;
        while (num)
        {
            num /= 10;
            count++;
        }
        if (count % 2 == 0)
            even_digit_count++;
    }
    cout << even_digit_count << endl;

    return 0;
}