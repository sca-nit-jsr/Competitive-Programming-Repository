#include<iostream>
#include<cmath>
using namespace std;
void print(int x)
{
    cout<<"5"<<endl;
    for(int i=0;i<5;i++)
            cout<<x+i<<" ";
        cout<<endl;
}
int main()
{
    int t,m,p,q,length,total;
    cin>>t;
    while(t--)
    {
        cin>>m;
        p=4*m+1;
        if(p%5!=0)
            q=(p+(5-p%5));
        else
            q=p; //here q is the approximate number from where next 4 number have to print(excluded q)
        while(1)
        {
            total=0;
            length=floor(log(q)/log(5)); //here we check q satisfy 'z' number of tralling zero
            for(int i=1;i<=length;i++)
                total+=int(q/int(pow(5,i)));
            if(total==m)
            {
                print(q);
                break;
            }
            else
                if(total<m) //if q not satisfy and less than 'z' increase by 5 else 'z' is not possible for any number
                    q+=5; 
                else
                {
                    cout<<"0"<<endl;
                    break;
                }
        }
        
        
    }
}
