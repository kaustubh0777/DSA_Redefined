#include <bits/stdc++.h>
using namespace std;

int add(int sum, int n)
{
    // Base condition
    if (n < 0)
    {
        return sum;
    }

    return add(sum + n, n - 1);
}
int main()
{
    int n;
    cin >> n;

    int sum = 0;

    cout << add(sum, n) << endl;
}