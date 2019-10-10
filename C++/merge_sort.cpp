#include<bits/stdc++.h>
using namespace std;

/* Hi I am using my own class to use in merge sort function*/

template<class Item>
class LinearList{
	private:
		int MaxSize;
		Item *element;    // 1D dynamic array
        int len;
	public:
		/* Default constructor. 
		 * Should create an empty list that not contain any elements*/
		LinearList()
		{
			element=nullptr;
			len=0;
		};

		/* This constructor should create a list containing MaxSize elements. You can intialize the elements with any values.*/
		LinearList(const int& MaxListSize)
		{
			MaxSize=MaxListSize;
			element = new Item[MaxSize];
			len=0;

		};

		/* Destructor. 
		 * Must free all the memory contained by the list */
		~LinearList(){};

		/* Indexing operator.
     		 * It should behave the same way array indexing does. i.e,
     		 * LinearList L;
     		 * L[0] should refer to the first element;
     		 * L[1] to the second element and so on.
     		 * */
		Item& operator[](const int& i)
		{
			return element[i];
		}; //return i'th element of list
		
		/* Returns true if the list is empty, false otherwise.
     		 * */
		bool isEmpty()
		{
			if(len==0)
			{
				return true;
			}
			else
			{
				return false;
			}
		};

		/* Returns the actual length (number of elements) in the list.
     		 * */
		int  length()
		{
			return len;
		};	

		/* Returns the maximum size of the list.
     		 * */
		int  maxSize()
		{
			return maxSize;
		};

		/* Returns the k-th element of the list. 
		 * */
		Item  returnListElement(const int k)
		{
			return element[k-1];
		};
		/* Set x to the k-th element and 
		 * return true if k-th element is present otherwise return false.
		 * */
		bool find(const int k, Item& x)
		{
			if(x==element[k-1])
			{
				return true;
			}
			else
			{
				
				return false;
			}
		};

		/* Search for x and 
		 * return the position if found, else return 0.
		 * */
		int  search(Item& x)
		{
			for(int i=0;i<len;i++)
			{
				if(element[i]==x)
				{
					return i+1;
				}
			}
			return 0;

		};

		/* Set x to the k-th element and delete that k-th element.
		 * */
		void  deleteElement(const int  k, Item& x)
		{
			x=element[k-1];
			for(int i=k;i<len;i++)
			{
				element[i-1]=element[i];
			}
			len=len-1;
		};

		/* Insert x after k-th element.
		 * */
		void  insert(const int  k, Item& x)
		{
			for(int i=len;i>k;i--)
			{
				element[i]=element[i-1];
			}
			element[k]=x;
			len=len+1;
		};					
};


//merge two sorted arrays
void merge(LinearList<int>& A, int low, int high , int mid)
{
	int i,j,k;
	j=0;
	i=0;
	k=0;
	LinearList<int> B(100);
	LinearList<int> x(100);
	LinearList<int> y(100);
	for(k=low;k<mid+1;k++)
	{
		x.insert(i,A[k]);
		i++;
	}
	for(k=mid+1;k<high+1;k++)
	{
		y.insert(j,A[k]);
		j++;
	}
	i=0;
	j=0;
	for(k=low;k<high+1;k++)
	{
			if(j==y.length())
			{
				A[k]=x[i];
				i++;
			}
			else if(i==x.length())
			{
				A[k]=y[j];
				j++;
			}
			else
			{
		if(x[i]>y[j])
		{
			A[k]=y[j];
			j++;
		}
		else
		{
			A[k]=x[i];
			i++;
		}
		}
	}
};


//merge sort function
void mergeSort(LinearList<int>& A, int low, int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergeSort(A,low,mid);
		mergeSort(A,mid+1,high);
		merge(A,low,high,mid);
	}

};
//Driver function
int main()
{
	int n,temp,i;
	cin >> n;
	LinearList<int> l(100);
	for(i=0;i<n;i++)
	{
		cin >> temp;
		l.insert(i,temp);
	}
	mergeSort(l,0,n-1);
	for(i=0;i<n;i++)
	{
		cout << l[i] << " ";
	}
	cout << endl;

}
