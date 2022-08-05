
//Ceaser cipher
#include<bits/stdc++.h>
using namespace std;

void encrypt();
void decrypt();


int main()
{


    int choice;
    cout<<"Enter the option"<<endl;
    cout<<"1. Encryption"<<endl;
    cout<<"2.Decryption"<<endl;
    cin>>choice;

    switch(choice){
        case 1 :{
            encrypt();
            break;
        }
        case 2 :{
            decrypt();
            break;

        }

        default:{
            cout<<"Entered the wrong input"<<endl;
            break;
        }
    }
}

void decrypt()
{
    cout<<"You have entered the Decrypt block"<<endl;

    string c;
    cout<<"Enter the cipher text to be decrypted"<<endl;
    cin>>c;

    int i,n;
    n = c.length();

    int d[n];

    for(i = 0;i<n;i++)
    {
        d[i] = int(c[i]);
        d[i] = (d[i]-97)%26;
    }

    for(i=0;i<n;i++)
    {
        d[i] = (d[i] - 3)%26;
    }
    for(i=0;i<n;i++)
    {
        d[i] = (d[i] + 97);
    }

    cout<<"The decrypted text is"<<endl;

    for(i=0;i<n;i++)
    {
        cout<<char(d[i]);
    }

    cout<<endl;







}


void encrypt()
{
    string c;
    cout<<"Enter the string to be encrypted"<<endl;
    cin>>c;
    int n,i;
    n = c.length();

    int d[n];

    for(i=0;i<n;i++)
    {
        d[i]  = int(c[i]);
        d[i] = (d[i] - 97)%26;

    }

    for(i=0;i<n;i++)
    {
        d[i] = (d[i] + 3)%26;
    }

    for(i = 0;i<n;i++)
    {
        d[i] = d[i] + 97;
    }

    cout<<"The encrypted text id"<<endl;

    for(i=0;i<n;i++)
    {
        cout<<char(d[i]);
    }

    cout<<endl;
}

