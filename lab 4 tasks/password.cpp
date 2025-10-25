 #include<iostream>
 using namespace std;
 int main()
 {
  string mp,up;
  cout << "enter your password" << endl;
  cin>>up;
  mp="PASSWORD1234";
  if(mp==up)
  cout << "you have cracked the code"<< endl;
  else
  cout << "try again"<< endl;
 return 0;
}