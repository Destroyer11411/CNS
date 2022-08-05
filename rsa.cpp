#include<bits/stdc++.h>
using namespace std;

int modd(int a,int b);
int calcd(int e, int phi);


int main()
{

    long int p;
    long int q;
    cout<<"Enter the first prime number"<<endl;
    cin>>p;
    cout<<"Enter the second prime number"<<endl;
    cin>>q;

    double n =p*q;
    double phi = (p-1) * (q-1);

    long int e;

    cout<<"Enter the value of e"<<endl;
    cin>>e;

    long int d = calcd(e,phi);

    cout<<"The public key is {"<<e<<","<<n<<"}"<<endl;
    cout<<"The private key is {"<<d<<","<<n<<"}"<<endl;

    long int ct;
    long int pt;

    long int msg;

    cout<<"Enhter the message "<<endl;
    cin>>msg;

    // ct = pow(msg,e);
    // ct = modd(ct,n);

    ct = modd(pow(msg,e),n);

    cout<<"The cipher text is"<<ct<<endl;

    pt = modd(pow(ct,d),n);

    cout<<"The pt is"<<abs(pt)<<endl;
    return  0;


}


int calcd (int e,int phi)
{
    int i;
    for(i=1;i<=phi;i++)
    {
        if(modd(e*i,phi)==1)
        {
            return i;
        }
    }
    return 0;
}

int modd(int a, int b)
{
    return a%b;
}

