#include <iostream>
using namespace std;
void bubblesort(int a[],int j,int n)
{
    if(n==1)
    {
    return;
    }
    if(j==n-1)
    {
    return bubblesort(a,0,n-1);
    }
    if(a[j]>a[j+1])
    {
        swap(a[j],a[j+1]);
    }
    return bubblesort(a,j+1,n);
    return;
}
int main() {
    int a[]={5,4,3,2,1};
    int n=5;
    int j=0;
    bubblesort(a,j,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    
}
