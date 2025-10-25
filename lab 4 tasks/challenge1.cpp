
 #include<iostream>
 using namespace std;
 int main()
 {
  int amount,discount,dis2;
  cout << "enter the amount" << endl;
  cin>>amount;
  if(amount<=5000){
  discount=amount*5/100;
  cout << "the discount will be of"<<discount << endl;  }
  if(amount>5000){
  discount=amount*10/100;
  cout << "the discount will be of"<<discount << endl;   }
 return 0;
}