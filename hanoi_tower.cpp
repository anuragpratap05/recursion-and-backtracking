#include<iostream>
using namespace std;
void tower(int n,char src,char dest,char helper)
{
    if(n==0)
    {
        return;
    }
    tower(n-1,src,helper,dest);
    
        cout<<"move" " "<<n<< " ""disk from"" " <<src<< " ""to" " "<<dest<<endl;
        tower(n-1,helper,dest,src);
    
}
int main()
{
    int n;
    cin>>n;
    tower(n,'a','c','b');
}
