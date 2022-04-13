// #include <iostream>
// using namespace std;
// int printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// void merge(int arr1[], int n, int arr2[], int m, int arrMerge[])
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;

//     while (i < n && j < m)
//     {
//         if (arr1[i] > arr2[j])
//         {
//             arrMerge[k] = arr2[j];
//             k++;
//             j++;
//         }

//         else
//         {
//             arrMerge[k] = arr2[i];
//             k++;
//             j++;
//         }
//     }
//     while (i < n)
//     {
//         arrMerge[k] = arr1[i];
//         k++;
//         i++;
//     }
//     while (j < m)
//     {
//         arrMerge[k] = arr2[j];
//         k++;
//         j++;
//     }
// }

// int main()
// {
//     int arr1[4] = {2, 5, 13, 34};
//     int arr2[3] = {
//         7,
//         11,
//         17};

//     int arrMerge[7] = {0};

//     merge(arr1, 4, arr2, 3, arrMerge);
//     printArray(arrMerge, 7);

//     return 0;
// }