#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
void findotherstring (char str[],int n)
{
	int flag=0;
	char str1[105];
	strcpy(str1,str);
	for(int i=1;i<n-1;i++)
	{
		if(str[i]!=str[i+1])//checking constraint
		{
			flag=-1;
			break;
		}
	}
	
	if(flag==0)
	 cout<<"-1";
	 
	 else
	 {
	 	int i=n-1;

	 	while(str1[i]=='0')//to set higher string
	 	{
		 str1[i]='1';
		 i--;
	 	}
	 	str1[i]='0';
	 	
	 	
	 	
	 	i=n-1;
	 	while(str[i]=='1') //to set lower string
	 	{
		 str[i]='0';
		 i--;
	 	}
	 	str[i]='1';
	 	
	 	cout<<str<<" ";
	 	cout<<str1;
	 	
	 }
}
int main()
{   int n;
	cin>>n;
	char str[105];
	cin>>str;
	findotherstring(str,n);
	return 0;
	
}