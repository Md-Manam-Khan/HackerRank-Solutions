#include <iostream>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll a, b, i;
    cin >> a >> b;
    string numbers[] = {"one", "two", "three", "four", "five","six", "seven", "eight", "nine"};
    for (i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            cout << numbers[i - 1] << endl;
        }
        else if (i % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna