#include <iostream>
using namespace std;

int main()
{
   int n, i, j, c = 1, s;

   cout << "Enter number of rows: ";
   cin >> n;

   
   for(i = 0; i < n; i++)
   {
      for(s = 1; s <= n - i; s++)
         cout << " ";

      
      for(j = 0; j <= i; j++)
      {
         
         if (j==0 || i==0)
            c = 1;
         else
            c = c *( i - j + 1) / j;

         cout << c << " ";
      }
      cout << endl;
   }

   return 0;
}