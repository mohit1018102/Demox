#include<iostream>
using namespace std;

int main()
{

	 //Driver Code
        //function call
       //create add, multiply, subtract, divide
}

int add(int a, int b)
{
	return a+b;
}

int combine(int a,int b)
{
	return add(mult(a,b), div(a,b));
}

int mult(int a, int b)
{
	return a*b;
}
int div(int a,int b)
{
 return a/b;
}


