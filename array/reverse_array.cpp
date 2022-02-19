/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{   int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=i+1;
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<"reversed array is"<<endl;
    
    for(int i=n-1;i>=0;i--)
        cout<<a[i]<<" ";
    return 0;
}
