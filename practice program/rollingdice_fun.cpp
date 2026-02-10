
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int rolldice(int target){
int dice1,dice2,count=0,sum;
while (sum!=target)
{
    dice1= rand() % 6+1;
    dice2= rand() % 6+1;
    sum= dice1 + dice2;
    count++;
}
cout<<"roll count:"<<count;
return count;
}
int main() {
    cout << "The number of times the dice are rolled to "<< "get the sum 10 = " << rolldice(10) << endl;
    return 0;
}