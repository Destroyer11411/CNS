// Hill Cipher
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    string k;
    int p1[3][3];
    int k1[3][3];

    cout<<"Enter the Plaintext"<<endl;

    cin>>p;

    cout<<"Enter the key"<<endl;
    cin>>k;

    int i,j;
    int n=3;
    int m=3;
    int q=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
             p1[i][j] = int(p[q++]);
             

        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            p1[i][j] = (p1[i][j]-97)%26;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            p1[i][j] = (p1[i][j]%26);
        }
    }

    // cout<<p1[2][2];
    q=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
             k1[i][j] = int(k[q++]);
             

        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            k1[i][j] = (k1[i][j]-97);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            k1[i][j] = (k1[i][j]%26);
        }
    }


    int res[i][j];
    int l;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(l=0;l<n;l++)
            {
                res[i][j] += (((p1[i][l] * k1[l][j])));
            }
        }
    }

    cout<<endl;
    cout<<res[2][2];
    cout<<endl;

     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            res[i][j] =  (res[i][j]%26);
        }
    }

     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            res[i][j] =  (res[i][j]+97);
        }
    }

    
    cout<<endl;
    cout<<res[2][2];
    cout<<endl;

    
    cout<<endl;
    cout<<char(res[2][2]);
    cout<<endl;


    cout<<"The encrypted text is"<<endl;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<char(res[i][j]);
        }
    }

    



}