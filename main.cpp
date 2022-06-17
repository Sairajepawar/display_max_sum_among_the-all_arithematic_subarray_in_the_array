#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array:- ";
    cin>>n;
    int a[10];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" element:- ";
        cin>>a[i];
    }
    int count;
    int flag;
    int sum;
    int max=INT_MIN;
    for(int i=1;i<n-1;i++)
    {
        count=0;
        sum=a[i-1];
        while(a[i+1]-a[i]==a[i]-a[i-1])
        {
            sum+=a[i];
            i++;
            count++;
        }
        if(count>0)
        {
            sum+=a[i];
            if(sum>max)
            {
                max=sum;
            }
        }
    }
    if(max==INT_MIN)
    {
        cout<<"No arithematic subarray exists in given array";
    }
    else
    {
        cout<<max;
    }
    return 0;
}
