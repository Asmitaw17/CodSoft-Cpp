#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string str;
    double n1,n2;
    
    cout<<"Enter the First number  ";
    cin>>n1;
    cout<<"Enter the opertion ( + ,- ,*, / ): ";
    cin>>str;
    cout<<"Enter the Second number ";
    cin>>n2;

    if (str=="+") 
    {
        cout<<"Addition of "<<n1<< " and " << n2 << " = " << n1 + n2;
    }
    else if (str=="-")
    {
        cout<<"Subraction of "<<n1<< " and " << n2 << " = "<< n1 - n2;
    }
    else if (str=="*")
    {
        cout<<"Multiplication of "<<n1<< " and " << n2 << " = "<< n1 * n2;
    }
    else if (str=="/")
    {
       cout<<"Division of "<<n1<< " and " << n2 << " = "<< n1 / n2;
    }
    else{
        cout<< "Not recognized ";
    }

}