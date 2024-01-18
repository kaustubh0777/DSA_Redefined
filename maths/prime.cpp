#include <bits/stdc++.h>
using namespace std;

bool check_prime(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}
int main()
{

    int n;
    cin >> n;

    // you can find the divisor by running the loop till root n

    if (check_prime(n) == true)
    {
        cout << "It is prime" << endl;
    }
    else
    {
        cout << "Not Prime " << endl;
    }
}

// Time Complexity = O(N)