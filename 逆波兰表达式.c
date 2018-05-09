#include<iostream>
using namespace std;
double notation()
{
    char str[10];
    cin>>str;
    switch(str[10])
    {
    case'+':retrun notation()+notation();
    case'-':retrun notation()-notation();
    case'*':retrun notation()*notation();
    case'/':retrun notation()/notation();
    default:return atof(str);
    }
}

int main()
{
    cout<<notation();
    return 0;
}
