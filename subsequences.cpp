#include <iostream>
using namespace std;
void subsequences(char *a,char *out,int i,int j)
{
    if(a[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<" , ";
        return;
    }
    out[j]=a[i];
    subsequences(a,out,i+1,j+1);
    subsequences(a,out,i+1,j);
}
int main() {
    char a[100];
    cin>>a;
    char out[100];
    subsequences(a,out,0,0);
    return 0;
}
