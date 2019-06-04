#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
  int n, c = 0;

  scanf ("%d", &n);
  char s[n];
  scanf ("%s", s);
  if (n == 1)
    cout<<"0"<<endl;
  else
    {
      while (n != 1)
	{
	  int flag = 0;
	  for (int i = 0; i < n / 2; i++)
	    {
	      if (s[i] != s[i + n / 2])
		{
		  flag = 1;
		  break;
		}
	    }
	  if (flag != 1)
	    {
	      c++;
	      n = n / 2;
	    }
	  else
	    break;
	}
    }

  cout<<c<<endl;

  return 0;
}