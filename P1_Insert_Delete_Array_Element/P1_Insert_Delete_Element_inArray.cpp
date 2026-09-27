#include<iostream>
using namespace std;

void InsertElement(int arr[], int size, int capacity)
{
    if(size<0 || size>capacity)
    {
        cout<<"[ERROR] - Array Size is Invalid";
        return;
    }

    int element,index;
    cout<<"Enter the Value of the Element Wanting to be inserted: ";
    cin>>element;
    cout<<"Enter the Index at which you want the Element to be inserted: ";
    cin>>index;

    for(int i=size-1; i>=index; i--)
    {
        arr[i+1]=arr[i];
    }

    arr[index]=element;
    size++;
}
void DeleteElement(int arr[], int size)
{
    if(size==0)
    {
        cout<<"[ERROR] - Array has No Elements to be deleted";
        return;
    }

    int index;
    cout<<"Enter the Index of the Element to be deleted";
    cin>>index;

    for(int i=index; i<size; i++)
    {
        arr[i]=arr[i+1];
    }

    size--;
}
void DisplayElements(int arr[], int size)
{
    cout<<"========================== DISPLAY ARRAY ELEMENTS ===========================\n";

    if(size==0)
    {
        cout<<"\n[ERROR] - There are No Elements in the Array";
        return;
    }

    cout<<"Index \t\t";
    for(int i=0; i<size; i++)
    {
        cout<<"["<<i<<"]"<<"\t\t";
    }
    cout<<endl;

    cout<<"\t\t";
    for(int i=0; i<size; i++)
    {
        cout<<"------\t\t";
    }
    cout<<endl;

    cout<<"Value \t\t";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t\t";
    }
    cout<<endl;

    cout<<"\t\t";
    for(int i=0; i<size; i++)
    {
        cout<<"-------\t\t";
    }
    cout<<endl;

    cout<<"Address\t    ";
    for(int i=0; i<size; i++)
    {
        cout<<&arr[i]<<"\t";
    }
    cout<<endl;
}
int main()
{
    const int MaxCapacity= 100;
    int Numsize= 0;

    cout<<"=============================== HOME ================================";

    cout<<endl<<"Enter the Size of the Array - (0 to "<<MaxCapacity<<" )\n";
    cin>>Numsize;

    int arr[MaxCapacity], choice;
    for(int i=0; i<Numsize; i++)
    {
        cout<<"Enter the Element at Index ["<<i<<"]: ";
        cin>>arr[i];
    }

    cout << "\n[SUCCESS] Custom array initialization complete! Loading menu workspace...";
    cout << "\nPress Enter to proceed...";
    cin.ignore();
    cin.get();
    system("cls");

     while (true)
    {
        cout << "\n=========================================================" << endl;
        cout << "             ARRAY STRUCTURAL OPERATIONS LAB             " << endl;
        cout << "=========================================================" << endl;
        cout << "1. Insert Element (Addition)" << endl;
        cout << "2. Delete Element" << endl;
        cout << "3. Display Numerical Array (with RAM Grid Mapping)" << endl;
        cout << "4. Exit Program" << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << "Enter choice (1-4): ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                InsertElement(arr, Numsize, MaxCapacity);
                break;
            case 2:
                DeleteElement(arr, Numsize);
                break;
            case 3:
                DisplayElements(arr, Numsize);
                break;
            case 4:
                cout << "\nClosing Session. Happy Coding!" << endl;
                return 0;
            default:
                cout << "\n[WARNING] Invalid choice!" << endl;
        }

        cout << "\nPress Enter to continue...";
        cin.ignore();
        cin.get();

        system("cls");
    }
    return 0;
}
