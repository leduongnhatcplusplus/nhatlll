#include<iostream>
using namespace std;
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
 
int min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}
int main(){
	int a[5];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		}
	int x;
	x=max(a,n)-min(a,n);
	cout<<x;
	}
