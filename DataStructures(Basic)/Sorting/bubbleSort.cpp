#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void bubbleSort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}
}

void merge(int arr[],int l,int m,int r)
{
	// copy to left and right temp arrays
	int n1=m-l+1; int left[n1];
	int n2=r-l; int right[n2];
	for(int i=0;i<n1;i++)
		left[i]=arr[l+i];
	for(int i=0;i<n2;i++)
		right[i]=arr[m+i+1];

	int i=0;
	int j=0;
	int k=l;
	while(i<n1 && j<n2)
	{
		if(left[i]<=right[j])
			arr[k++]=left[i++];
		else
			arr[k++]=right[j++];
	}
	while(i<n1)
		arr[k++]=left[i++];
	while(j<n2)
		arr[k++]=right[j++];

}

// MERGESORT
void mergerSort(int arr[],int l,int r)
{
	if(r>l)//atleast 2 elements
	{
		int m=l+(r-l)/2;
		mergerSort(arr,l,m);
		mergerSort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}

/*Selection sort*/
// increasing order
void selecttionSort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int min_idx=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min_idx])
				min_idx=j;
		}
		swap(arr[min_idx],arr[i]);
	}
}

// partition function for quick sort
int partition(int arr[],int l,int h,int p)
{
	int temp[h-l+1];
	int index=0;

	for(int i=l;i<=h;i++)
	{
		if(arr[i]<arr[p])
		{
			temp[index]=arr[i];
			index++;
		}
	}
	for(int i=l;i<=h;i++)
	{
		if(arr[i]==arr[p])
		{
			temp[index]=arr[i];
			index++;
		}
	}
	for(int i=l;i<=h;i++)
	{
		if(arr[i]>arr[p])
		{
			temp[index]=arr[i];
			index++;
		}
	}
	int res=l+index-1;
	for(int i=l;i<=h;i++)
	{
		arr[i]=temp[i-l];
	}

	int res; //index of pivot element
}

void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}

int main()
{
	// int arr[]={20,12,32,31,9,78};
	// int n=sizeof(arr)/sizeof(arr[0]);

	// cout<<"Before sorting : "<<endl;
	// display(arr,n);

	// // bubbleSort(arr,n);
	// selecttionSort(arr,n);
	// cout<<endl;
	// cout<<"After sorting : "<<endl;
	// display(arr,n);
	// cout<<endl;

	int a[]={10,5,30,15,7};
	int l=0,r=4;
	mergerSort(a,l,r);
	for(int x:a)
		cout<<x<<" ";
	cout<<endl;

	return 0;
}