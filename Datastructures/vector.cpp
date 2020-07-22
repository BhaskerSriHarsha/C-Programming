# include <iostream>
# include <vector>

using namespace std;

int main()
{
  // creation of the vector
  vector <int> v1;
  cout<<"The vector is empty? : "<<v1.empty()<<endl<<"Adding elements into the vector."<<endl;

  //adding elements into the vector
  for(int i=0;i<10;i++)
  {
    v1.push_back(i);
  }

  //Displaing the elements
  cout<<"Elements of the vector are: ";
  for (auto i = v1.begin(); i != v1.end(); ++i)
  {
    cout<<*i<<" ";
  }
  cout<<endl;

  //INserting element into the std::vector
  v1.insert(v1.begin()+3, 999);
  cout<<"Elements of the vector are: ";
  for (auto i = v1.begin(); i != v1.end(); ++i)
  {
    cout<<*i<<" ";
  }
  cout<<endl;

  //Displaying details about the vector
  cout<<"Size of the vector: "<<v1.size()<<endl;
  cout<<"Is the vector empty? "<<v1.empty()<<endl;
  v1.clear();
  cout<<"Size of vector after clear operation: "<<v1.size()<<endl;


}
