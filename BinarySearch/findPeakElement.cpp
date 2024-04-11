<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &v, int n)
{
    /* a = [1, 2, 3, 4, 5, 6, 7, 8, 5, 1]
       peak element = 8
       index = 7
    */
    if (v[0] > v[1])
        return 0;
    if (v[n - 1] > v[n - 2])
        return n - 1;

    int low = 1, high = n - 2;
    int ans;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if(v[mid-1] < v[mid] && v[mid] > v[mid + 1]){
            ans = mid;
        }
        else if (v[mid - 1] < v[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        v.push_back(e);
    }

    int idx = findPeakElement(v, n);
    cout << idx << endl;
=======
#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &v, int n)
{
    /* a = [1, 2, 3, 4, 5, 6, 7, 8, 5, 1]
       peak element = 8
       index = 7
    */
    if (v[0] > v[1])
        return 0;
    if (v[n - 1] > v[n - 2])
        return n - 1;

    int low = 1, high = n - 2;
    int ans;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if(v[mid-1] < v[mid] && v[mid] > v[mid + 1]){
            ans = mid;
        }
        else if (v[mid - 1] < v[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        v.push_back(e);
    }

    int idx = findPeakElement(v, n);
    cout << idx << endl;
>>>>>>> e3122a25e58fa3cbcd50d5e509a94659125a93e9
}