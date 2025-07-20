ARRAYS
Array is a collection of items of the same variable type that are stored at contiguous memory locations

1)Find Largest element in an array

#include <iostream>
#include<climits>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    int max=INT_MIN;
    
    for (int i=0;i<n;i++)
    {
      if (max<a[i])
        max=a[i];
    }
    cout<<max; 
    return 0;
}

ii)find smallest element in an array

#include <iostream>
#include<climits>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    int min=INT_MAX;
    
    for (int i=0;i<n;i++)
    {
      if (min>a[i])
        min=a[i];
    }
    cout<<min; 
    return 0;
}

iii)Find Second Smallest Element in an Array

#include <iostream>
#include<climits>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    //int min=INT_MAX;
    
    for (int i=0;i<n;i++)
    {
      for (int j=0;j<n;j++)
      {
        if (a[i]<a[j])
        {
          int t=a[i];
          a[i]=a[j];
          a[j]=t;
        }
      }
    }
    for (int i=0;i<n;i++)
        cout<<a[i]<<" "; 
    cout<<endl<<a[1];
    return 0;
}

iv)Find Second Largest Element in an Array

same code as below except the condition
if (a[i]>a[j])

2)Calculate the sum of elements in an array

#include <iostream>
/*#include<climits>*/
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    int sum=0;
    
    for (int i=0;i<n;i++)
    {
      sum+=a[i];
    }
    cout<<sum;
    return 0;
}

3)Reverse an array

#include <iostream>
/*#include<climits>*/
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    
    for (int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

4)Sort first half in ascending order and second half in descending
i/p 1: 7(odd)
       7 2 6 9 0 5 1 
 
o/p 1: 2 6 7 9 5 1 0 

i/p 2: 6(even)
       7 2 6 9 0 5 
       
o/p 2: 2 6 7 9 5 0 

#include <iostream>
/*#include<climits>*/
using namespace std;


int asc(int a[],int m)
{
    for (int i=0;i<m;i++)
    {
      for (int j=0;j<m;j++)
      {
        if (a[i]<a[j])
        {
          int t=a[i];
          a[i]=a[j];
          a[j]=t;
        }
      }
    }
    /*for (int i=0;i<n;i++)
      cout<<a[i]<<" ";*/
    return 0;
}

int des(int a[],int m,int n)
{
    for (int i=m;i<n;i++)
    {
      for (int j=m;j<n;j++)
      {
        if (a[i]>a[j])
        {
          int t=a[i];
          a[i]=a[j];
          a[j]=t;
        }
      }
    }
    return 0;
}

int odd(int a[],int m,int n)
{
  if (n%2!=0)
  { 
    asc(a,m);
    for (int i=m+1;i<n;i++)
    {
      for (int j=m+1;j<n;j++)
      {
        if (a[i]>a[j])
        {
          int t=a[i];
          a[i]=a[j];
          a[j]=t;
        }
      }
    }
  }
  return 0;
}

int main() 
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    int m=n/2;
    asc(a,m);
    des(a,m,n);
    odd(a,m,n);
    for (int i=0;i<n;i++)
       cout<<a[i]<<" ";
    return 0;
}

5)Occurence of elements in an array/ find the frequency of elements in an array

i/p : 4
      3 5 3 2

o/p :  2:1
       3:2
       5:1

#include <iostream>
#include <climits>
using namespace std;

int max(int a[],int n)
{
    int maxi=INT_MIN;
    for (int i=0;i<n;i++)
    {
      if (a[i]>maxi)
       maxi=a[i];
    }
    return maxi;     //to find the maximum element in an array
}

int main() 
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
       cin>>a[i];
    int m=max(a,n);
    int f[m+1];     //creating frequency array with length of max element+1
    for (int i=0;i<m+1;i++)
       int (f[i]=0);    //set frequency array = 0
    for (int i=0;i<n;i++)
       f[a[i]]++;           //traverse i/p array & increement if it exists
    for (int i=0;i<m+1;i++)
    {

         if (f[i]!=0)
            cout<<i<<":"<<f[i]<<endl;      
    }
       
    return 0;
}

