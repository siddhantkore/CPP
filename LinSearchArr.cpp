#include <iostream>

using namespace std;

int search ( int A[], int n, int key )
{
	int i;
	for (i =0; i<=n; i++ )
	{
				if ( key == A[i])
					return i;
	}
		
	return 0;
}
int main ()
{
	int A[] = {1,2,3,4,4,3,2,1};
	int k;
	cout<<"Enter an element to search ";
	cin>>k;
	int index = search( A, sizeof(A)/4 , k );
	if(index)
		cout<<"The Number found at "<<index<<" Index"<<endl;
	else
		cout<<"Not found";
		
	return 0;	
}
