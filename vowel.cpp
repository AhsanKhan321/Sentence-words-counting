
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int j=0;
    cout<<"Enter words = ";
    cin>>s;
    for(int i=0;i<=sizeof(s);i++)
    {
    if(s[i]=='a'||s[i]=='e'|| s[i]=='i'|| s[i]=='o' ||s[i]=='u')
    { 
        j++;
    }
    }
    cout<<"Total Vowel in array is = "<<j<<endl;
    return 0;

}