#include <iostream>
#include <algorithm>

using namespace std;

int PrintArray (double arr[], int size);
int PrintArray (int arr[], int size);
void vArrSwap (int arr[], int size);
int iArrFill (int arr[], int size);
int iArrMove (int arr [], int k);

int main()
{
//    //Task 1
//    int iArrSize;
//    cout << "Enter array size: ";
//    cin >> iArrSize;
//    double dArrNumbers [iArrSize];
//    bool fail = false;
//    for (int i = 0; i < iArrSize; i++)
//    {
//        do {
//            fail = false;
//            cout << "Enter " << i << " array number = ";
//            cin >> dArrNumbers[i];
//            if (cin.fail())
//            {
//                cout << "Entered value is incorrect! Please try again." << endl;
//                fail = true;
//            }
//            cin.clear();
//            cin.ignore();
//        } while (fail);
//    }

//    cout << "Your array is: ";
//    if (PrintArray (dArrNumbers, iArrSize))  //Почему-то если просто вывожу cout << PrintArray (dArrNumbers, iArrSize), выводится еще 0 из return, поэтому пришлось использовать конструкцию if...
//    {
//    cout << "Array was successfuly printed" << endl;
//    }

//    //Task 2
//    const int iRandArrSize = 10;
//    int iRandArr [iRandArrSize] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };
//    cout << "First iteration of array is: ";
//    PrintArray(iRandArr, iRandArrSize);
//    vArrSwap (iRandArr, iRandArrSize);
//    cout << "Second iteration of array is: ";
//    PrintArray(iRandArr, iRandArrSize);

//    //Task 3
//    int iArrBlankSize = 8;
//    int iArrBlank [iArrBlankSize];
//    iArrFill (iArrBlank, iArrBlankSize);
//    PrintArray (iArrBlank, iArrBlankSize);


//    //Task 4
//    int k;
//    cout << "Enter amount of steps (from 1 to 10): ";
//    cin >> k;
//    const int iRandArrSize = 10;
//    int iRandArr [iRandArrSize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    iArrMove(iRandArr, k);
//    PrintArray(iRandArr, 10);

    return 0;
}

inline int iArrMove (int arr [], int k)
{
    rotate (arr, arr + k, arr + 10);
    return 0;
}

int iArrFill (int arr[], int size)
{
    for (int i=0; i<size; i++)
    {
        arr[i] = i*3+1;
    }
    return 0;
}

void vArrSwap (int arr[], int size)
{
    for (int i=0; i<size; i++)
    {
        arr [i] = (arr[i]== 1) ? 0 : 1;
    }

}

int PrintArray (int arr[], int size)
{
    int i;
    for (i=0; i<size; i++)
    {
        cout << arr [i] << " ";
    }
    cout << endl;
    return 0;
}


int PrintArray (double arr[], int size)
{
    int i;
    for (i=0; i<size; i++)
    {
        cout << arr [i] << " ";
    }
    cout << endl;
    return 0;
}
