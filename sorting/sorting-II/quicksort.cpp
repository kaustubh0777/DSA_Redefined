#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &v, int low, int high)
{
    int pivot = v[low];
    int i = low;
    int j = high;

// run until i and j dont cross each other
    while (i < j)
    {
        // to avoid out of bound errors high-1 ND low+1
        while (v[i] <= pivot && i <= high-1)
        {
            i++;
        }
        while (v[j] >= pivot && j >= low+1)
        {
            j--;
        }
        if (i < j)
        {

            swap(v[i], v[j]);
        }
    }
    // putting pivot element at its correct place
    swap(v[low],v[j]);
    return j;
}

void quicksort(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int pivot = partition(v, low, high);
        // divide n conquer based on the pivot element
        quicksort(v,low,pivot);
        quicksort(v,pivot+1,high);
    }
}

int main()
{
    int n, in;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);
    }

    int low = 0;
    int high = n-1;

    quicksort(v, low, high);

    for(int i=0;i<v.size();i++)
    {
    cout<<v[i]<<" ";
    }
    cout<<endl;
}