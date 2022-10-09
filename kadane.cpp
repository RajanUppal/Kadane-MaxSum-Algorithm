#include<iostream>
#include<climits>
using namespace std;

int kadane(int a[], int n)
{
    int sum = 0, maxSum = INT_MIN,i;
    for(i=0;i<n;i++)
    {
        sum += a[i];
        maxSum = max(sum,maxSum);
        if(sum<0)
        {
            sum=0;
        }
    }
    return maxSum;
}

int main()
{
    int n,i;
    cout<<"Enter the size: ";
    cin>>n;
    int a[n];
    cout<<"Enter array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The Maximum Sum: "<<kadane(a,n);
    return 0;
}
