#include <iostream>
using namespace std;

	int main()
{
	
	int a , b , c;
	cout<<"please enter the a , b , c" <<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	if ( a+b>c and a+c>b and b+c>a )
	{ 
	cout<<"yes";
	
	if (a==b or b==c or a==c)
	{
       
	    cout<<"motasavi sagh";
	}
       
    else if (a==b and b==c)
    {
       	
        cout<<"motasavi azlaa";
    }
    else if (a*a==b*b + c*c or b*b == c*c + a*a or c*c = a*a + b*b ) 
       cout<<"ghaaem";
    }
	else
    	cout <<"mokhtalef";
    }
    else
	    	
    cout<<"no";
   
}