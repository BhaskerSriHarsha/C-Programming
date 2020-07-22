# include <iostream>

using namespace std;

int main()
{
  // creation of the array
  int array[3] = {1,2,3};

  cout<<"Array before Manipulation : "<<array[0]<<array[1]<<array[2]<<endl;


  // Manipulation of the array

  array[0] = 3;
  array[1] = 2;
  array[2] = 1;

  cout<<"Array after Manipulation : "<<array[0]<<array[1]<<array[2]<<endl;
}
