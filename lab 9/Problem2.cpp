#include <iostream>
using namespace std;
string sevenBoom(int arr[], int size) {
for(int i = 0; i < size; i++) {
int num = arr[i];
while(num != 0) {
if(num % 10 == 7)
return "Boom!";
num /= 10;
} }
 return "there is no 7 in the array";
}
int main() {
int num;
cout << "Enter size of array: ";
cin >> num;
int arr[num];
cout << "Enter numbers: ";
for(int i = 0; i < num; i++)
cin >> arr[i];
cout << sevenBoom(arr, num);
return 0;
}