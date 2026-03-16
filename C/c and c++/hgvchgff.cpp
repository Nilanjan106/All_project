#include <bits/stdc++.h>
  
using namespace std;
  
int main()
  
{
    int n;
    cin>> n;
    int arr[10];
    for (int i = 0; i <n; i++)
    {
        cin>> arr[i];
    }
    
    sort(arr, arr + n);
    int i = 0, j = 0;
    int len = 0;
    while (j <n)
    {
        if (j - i <2)
        {
            j++;
        }
        else {
            if (arr[i] + arr[i + 1]> arr[j])
            {
                len = max(len, j - i + 1);
                j++;
            }
            else {
                i++;
            }
        }
    }
    cout <<len <<endl;
    return 0;
}
