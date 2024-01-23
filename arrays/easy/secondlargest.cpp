#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lar = 0;
    int slar = 0;

    int n, in;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        arr.push_back(in);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]>lar)
        {
            slar = lar;
            lar = arr[i];

        }
        else if(arr[i] >slar && arr[i]<=lar)
        {
            slar=arr[i];
        }


    }
    cout<<"Largest and second largest are "<<lar<<" "<<slar<<endl;
}