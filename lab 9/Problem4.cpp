#include <iostream>
using namespace std;
void Transform(int arr[], int size, int times) {
    for(int t = 0; t < times; t++) {
        for(int i = 0; i < size; i++) {
            if(arr[i] % 2 == 0)
                arr[i] -= 2;
            else
                arr[i] += 2;
        }
    }
}
int main() {
    int num;
    cout << "Enter size of array: ";
    cin >> num;
    int arr[num];
    cout << "Enter array elements: ";
    for(int i = 0; i < num; i++)
        cin >> arr[i];
    int times;
    cout << "Enter number of transformations: ";
    cin >> times;
    Transform(arr, num, times);
    cout << "Transformed array: ";
    for(int i = 0; i < num; i++)
        cout << arr[i] << " ";
    return 0;
}