#include<iostream>
using namespace std;
int main()
{
int z,x,c,v,w;
char p;
float in,cm;
int a=0;


//cout<<"a.What is the Sum"<<endl;
//cout<<"b.What is the Product"<<endl;
cout<<"c.what is the qoutient"<<endl;
cout<<"d. Swapping"<<endl;
cout<<"e. If else (even or odd)"<<endl;
cout<<"f.Float"<<endl;
cout<<"g.For loop (even)"<<endl;
cout<<"h.For loop (Horizontal)"<<endl;
cout<<"i.while loop(odd)"<<endl;
cout<<"j.While loop (horizontal and odd)"<<endl;
cout<<"k. Exit"<<endl;
cout<<"enter choice:";
cin>>p;

system ("cls"); 

switch(p)
{
 case 'a' : case 'A':
 cout<<"Enter first number:";
 cin>>z;
 cout<<"Enter second number: ";
 cin>>x;
 cout<<"Enter third number:";
 cin>>c;
 cout<<"Enter fourth number:";
 cin>>v;
 
w=z+x+c+v;

cout<<"The sum of four number is:"<<w;
{
	cin>>p;
	system ("cls");
	system ("pause");
	return main();
	
}

case 'b': case 'B':
	cout<<"Enter the 4 number:";
	cin>>z;
	cin>>x;
	cin>>c;
	cin>>v;
	
	w=z*x*c*v;
	cout<<"The product of four number is:"<<w;
	
{
	cin>>p;
	system ("cls");
	return main();
	system ("pause");
}

case 'c': case 'C':
	cout<<"Enter the 2 number:";
	cin>>z;
	cin>>x;
	
	w=z/x;
	
	cout<<"The quoutient is:"<<w;
	
	{
		cin>>p;
		system ("cls");
		return main();
		system ("pause");
	}
	
	case 'd': case'D':
		cout<<"Enter first number:";
		cin>>z;
		cout<<"enter second number:";
		cin>>x;
		
		c=z;
		z=x;
		x=c;
		
		cout<<"The new valuse of the first number is:"<<z;
		cout<<"The new value of the second number is:"<<x;
	{
		cin>>p;
		system ("cls");
		return main();
		system ("pause");
		}	
	

case 'e': case 'E':
cout<<"Enter integer:";
cin>>z;

if ( z%2==0)
{
	cout <<"Even"<<endl;
}
else
{
	cout<<"odd"<<endl;
}

{ 
cin>>p;
system ("cls");
return main();
system ("pause");
}

case 'f': case 'F':
	cout<<"Enter length in inches:";
	cin>>in;
	
	cm=in*2.54;
	cout<<in<<"inches="<<cm<<"cm\n";
	{
		cin>>p;
		system ("cls");
		return main();
		system ("pause");
	}

case 'g': case 'G':
for(z=2;z<=100;z+=2)

{
cout<< z <<endl;
}
{
	cin>>p;
	system ("cls");
	return main();
	system ("pause");
}

case'h': case 'H':
	for(z=2;z<=100;z+=2)
	{
		cout<< z <<" ";
	}
	{
		cin>>p;
		system ("cls");
		return main();
		system ("pause");
			}
		
	case 'i': case 'I':
		while(a<=100)
		{
			if(a%2==1)
			cout<< a <<endl;
			a++;
		}
		{
		
		cin>>p;
		system ("cls");
		return main();
		system ("pause");
		
	}

case 'j': case 'J':
	while(a<=100)
	{
		if(a%2==1)
		cout<< a <<" ";
		a++;
		
	}
	
	{
		cin>>p;
		system ("cls");
		return main();
		system ("pause");
	}

case 'k': case'K':

return 0;

	default:
{

		cout<<"Invalid choice:";
       
}
{

	cin>>p;
	system ("cls");
	return main();
	system ("pause");
}
}
}




		
	

		
	
	
	
	

