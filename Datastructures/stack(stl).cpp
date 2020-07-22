# include <iostream>
# include <bits/stdc++.h>

using namespace std;

// A demonstration of stack STL in C++

void showstack(stack <int> s)
{
  while (!s.empty()) {
    cout<<s.top()<<endl;
    s.pop();
  }
}

int main()
{

stack <int> s;

cout<<"Current status of stack empty?: "<<s.empty()<<endl<<"Pushing elements into the stack"<<endl;

//pushing elements into the stack
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);

showstack(s);


}
