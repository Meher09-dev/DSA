#include<iostream>
using namespace std;
void SelectionSort(int arr[], int size)
{
    int minindex, temp;
    if(size<=1)
    {
        cout<<"Array Cannot Be Sorted\n";
        return;
    }
    for(int i=0; i<size-1; i++)
    {
        minindex=i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j]<arr[minindex])
            {
                temp=arr[j];
                arr[j]=arr[minindex];
                arr[minindex]=temp;
            }
        }
    }
}
void DisplayArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int MaxNum=100, NumSize=0, arr[MaxNum], choice;
    cout<<"====================================================\n";
    cout<<"                  SELECTION SORT                    \n";
    cout<<"====================================================\n";

    while(true)
    {
        cout<<"\nEnter the Size of the Array (Max: "<<MaxNum<<" )- ";
        cin>>NumSize;

        if(NumSize>0 && NumSize<=MaxNum)
        {
            break;
        }
        cout<<"Array Size out of bounds \n";
    }
    for(int i=0; i<NumSize; i++)
    {
        cout<<"Enter the Element at the Index Position ["<<i<<"]- ";
        cin>>arr[i];
    }
    cout<<"\nThank You for Entering the Array\n";

    while(true)
    {
        cout<<"====================================================\n";
        cout<<"                  SELECTION SORT                    \n";
        cout<<"====================================================\n";
        cout<<"1. Perform Selection Sort\n";
        cout<<"2. Display Array\n";
        cout<<"3. Exit Program\n";
        cout<<"====================================================\n";
        cout<<"Enter Your Choice <1-3>: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            SelectionSort(arr, NumSize);
            break;
        case 2:
            DisplayArray(arr, NumSize);
            break;
        case 3:
            return 0;
        }
    }
}
