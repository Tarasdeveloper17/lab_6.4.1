#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void createArr(int* arr, const int size, const int Low, const int High)
{
 for (int i=0; i<size; i++)
 arr[i] = Low + rand() % (High-Low+1);
}

void Print(int* arr, const int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i]<< " ";
    cout << endl;
}


int sumElementOfArray(int *arr , const int size)
{
    int S = 0;
    for(int i = 0; i < size; i++)
    
        if(arr[i] < 0)
            S+=arr[i];
    return S;
}



void multiElementOfArray(int *arr , const int size)
{
    int P = 1;
    int max = arr[0];
    for (int  i = 0; i < size; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }

    }
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "min element is = " << min << endl;
    cout << "max element is = " << max << endl;
    for(int i = max; i < min;i++)
    {
        P*=arr[i];
    }
    cout <<"Prod : " << P <<endl;


}


void sortedArray(int *arr, const int size)
{

    int i, j;

    for(i = 0; i < size; i++)
    {
        for(j = i + 1; j < size; ++j)
        {
            if(arr[i] >= arr[j])
            {
                int tmp;
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
             }
        }
    }

}





int main()
{
    srand((unsigned)time(NULL));
    cout << " n: ";
    int n;
    cin >> n;
    int arr[n];
    int Low = -4;
    int High = -16;

    createArr(arr, n, Low, High);
    Print(arr, n);
    cout<< "Sum = " << sumElementOfArray(arr, n)<<endl;
    multiElementOfArray(arr,n);
    sortedArray(arr, n);
    Print(arr, n);





    return 0;
}


