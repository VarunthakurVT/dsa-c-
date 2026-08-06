#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int T=0;
    int F=0;
    int to=0;
    int H=0;
    int f=0;
    int t=0;
    switch (x)
    {
        if(x>1000){
    case 1000:
        x=x/1000;
        T++;
        break;
        }
        else if(x>500){
    case 500:
        x=x/500;
        F++;
        break;
        }
        else if(x>200){
    case 200:
        x=x/200;
        to++;
        break;
        }
        else if(x>100){
        case 100:
            x=x/100;
            H++;
            break;
        }
        else if( x>50){
        case 50:
            x=x/50;
            f++;
            break;
        }
        else if(x>2){
        case 2:
            x=x/2;
            t++;
            break;
        }
        
    default:
        break;
    }

    cout<<"1000*"<<T<<endl;
    cout<<"500"<<F;

    
    return 0;
}