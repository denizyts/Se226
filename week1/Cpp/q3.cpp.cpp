#include <iostream>

using namespace std;

int main()
{

  int labgrade;
  int midterm;
  int final;
  double total = 0;

  cin >> labgrade;

  cin >> midterm;
  cin >> final;

  total += ((double)labgrade/100)*25;
  cout << total << " total " << endl;
  total += ((double)midterm/100)*35;
  cout << total << " total " << endl;
  total += ((double)final/100)*40;
  cout << total << " total " << endl;



  //cout << total << " total " << endl;






}
