/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int addition(int x,int y)
{int Z = x+y ;
return Z ;
}
int main()
{
int a;
int b;
cout<< "enter first munber";
cin>>a;
cout << "enter second number";
cin >>b;
cout<< a; cout<<"+";cout<< b;cout<<"=";cout << addition (a,b);

    return 0;
}

