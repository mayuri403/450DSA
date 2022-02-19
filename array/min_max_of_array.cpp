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
    
    int min=a[0];
    int max=a[0];
    
    for(int i=0;i<n;i++)
       if(a[i]>max)
           max=a[i];
       else if(a[i]<min)
           min=a[i];
           
    cout<<"max="<<max<<endl;
    cout<<"min="<<min;
           
    
    return 0;
}
