#include<iostream>
using namespace std;

/*Find x in inOrder*/
int search(int arr[],int x,int n)   
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		 return i; /*return the index of the element found*/
	}
	return -1;                      
}

void printPostOrder(int inOrder[],int preOrder[],int n)
{
	int rootNode=search(inOrder,preOrder[0],n);
	if(rootNode)	/*If right subtree is not empty */
	{	
		printPostOrder(inOrder,preOrder+1,rootNode);
	}
	if(rootNode!=n-1)	/*If left subtree is not empty*/
	{	
		printPostOrder(inOrder+rootNode+1,preOrder+rootNode+1,n-rootNode-1);
	}
	cout<<preOrder[0]<<" ";          
}

int main()
{
	int inOrder[]={9,20,29,30,50,90,100,120};
	int preOrder[]={30,20,9,29,90,50,120,100};
	
	int n=sizeof(inOrder)/sizeof(inOrder[0]);
	
	cout<<"Post order : ";
	printPostOrder(inOrder,preOrder,n);
	cout<<endl;
	
	return 0;
}
