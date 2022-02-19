/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main()
{   int n=9;
    int a[]={3,8,5,2,9,5,1,4,4};
   
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    
    sort(a,a+n);
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
   
    cout<<"enter the value of k="<<endl;
    int k;
    cin>>k;
    cout<<k<<"th smallest value is"<<endl;
    cout<<a[k-1];
    
        return 0;
}
