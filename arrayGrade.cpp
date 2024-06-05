#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    int arr[n];
    int size = sizeof(arr) / sizeof(int);
    cout << "Enter the scores of " << n << " students: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    double sum = 0;
    double ave = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        ave = sum / size;
    }
    cout << "Average score of the class: " << ave;
    return 0;
}