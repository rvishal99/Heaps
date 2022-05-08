#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i)
{
    int largest = i;
    int l = 2*i;
    int r = 2*i + 1;

    if(l<=n && arr[largest]<arr[l])
    {
        largest = l;
    }
    if(r<=n && arr[largest] < arr[r])
    {
        largest = r; 
    }
    if(largest !=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void heapSort(int arr[],int n)
{
    int size = n;
    while(size>1)
    {
        swap(arr[size],arr[1]);
        size--;

        heapify(arr,size,1);
    }
}
void printArray(int arr[],int n)
{
    for (int i = 1; i <=n; i++)
{
   cout<<arr[i]<<" "; 
}cout<<endl;
}
int main(){
int arr[6] = {-1,54,53,55,52,50};
int n=5;
for (int i = n/2; i>0; i--)
{
    heapify(arr,n,i);
}

printArray(arr,n);
heapSort(arr,n);
printArray(arr,n);

return 0;
}
