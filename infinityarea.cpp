#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int n,r,a,b,i;
    double area;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        area=0;
        cin>>r>>a>>b;
        
        while(r!=0)
        {
        int res=r*a;
        int ball=res/b;
        //int r2=res;
        cout<<setprecision(9);
        area=area+((M_PI*r*r)+(M_PI*res*res));
        cout<<area<<endl;
        r=ball;
        
        }

    }
    for(i=1;i<=n;i++){

        
    }
        
        
        
    
    
}
