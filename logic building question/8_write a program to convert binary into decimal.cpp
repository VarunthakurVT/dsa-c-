#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n ;
       
        for(int i=0;i<=30;i++){
            int a=i<<1;
            if(n==a){
                return true;
            }
            else{
                return false;
            }
        }
    int a=2<<1;
    cout<<a;    
    int n;
    cout<<"enter the digit ";
    cin>>n;
    int ans=0;
    int i=1;
    while (n!=0)
    {
        int bit=n&1;
          ans=(bit*i)+ans;
        n=n>>1;
         i*=10;
        }
        cout<<ans;
 
    return 0;
}
// Line 6: Char 17: error: variable-sized object may not be initialized
//     6 |             int arr[i]=i<<1;
//       |                 ^      ~~~~
// 1 error generated.
// c:\Users\vttha\OneDrive\Desktop\dsa-c-\logic building question\8_write a program to convert binary into decimal.cpp:9:27: error: array must be initialized with a brace-enclosed initializer
            //  int arr[i]=i<<1;