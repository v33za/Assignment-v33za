#include <iostream>
#include <string.h>
using namespace std;
//1. Creating make file
//2. Swap the value in the array using pointers** to help
//3. Take input from argv


int main(int argc, char **argv)
{
 int i,n,*a;
			n=argc-1;
 		  a=new int[n];
			for(i=0;i<n;i++) 
    {
			    a[i]=atoi(argv[i+1]);
		       cout<< "a[" << i << "]=" <<a[i]<<endl;
		}

    int*pa=a;
    int*pb=&a[n-1];
	
  int temp;
  cout<<"Reverse: ";
  for (int i = 0; i < n / 2; i++) 
    {
        temp = *pa;
        *pa = *pb;
        *pb = temp;
        pa++; pb--;
    }
     // Using p within your program 
  for(i=0;i<n;i++) 
  {
 		   cout<<a[i]<<" "; //p is the location where p points to
 //     p++;  
  }

 delete [] a;  
}

  
//}

