#include <iostream>
using namespace std;
char keypad[][10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void printstrings(char *a,char*out,int i,int j)
{
    if(a[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<",";
        return;
    }
    int digit=a[i]-'0';
    if((digit==1 || digit==0))
    {
        printstrings(a,out,i+1,j);
    }
    for(int k=0;keypad[digit][k]!=0;k++)
    {
        out[j]=keypad[digit][k];
        printstrings(a,out,i+1,j+1);
    }
}
int main() {
    char a[100];
    char out[100];
    cin>>a;
    printstrings(a,out,0,0);
    return 0;
}
