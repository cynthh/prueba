#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   vector<string> msg {"Hola", "C++", "World", "from", "VS Code", "boluditos"};

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;
//hola hola hola the game
}