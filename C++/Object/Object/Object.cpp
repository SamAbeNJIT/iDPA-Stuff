#include <iostream>
#include <string>
#include "NyanCat.h"
using namespace std;

void testNyanCat()
{
   NyanCat* littleNyan = new NyanCat();
   littleNyan->hasLazers = true;
   (*littleNyan).hasLazers = true;
   cout << littleNyan->name << " asdhakshfkajshfashdfjkgasdfhasdjkfhjkafajkfkajsdghfjkasdgfjkasdgfjksghdfjkaghsdfjkgasdjkgfasjkgfasjkhdfasghdfahwefukabefukyabwefukawefkubyaefkbawefebfloawebfauklyfaukeroeboebfwyoebfoawebfauoebfuoAWYebfoyebfaukebfuyebfukyebfkuasebfukasebfukasyebfkausyebfaukebfAUKSEBYfAUKSYebfUKSEYBfAUKSebfSUKEYbfUKSebfUKSYEBfUKSEbfUKSEYbfUKSEYbfUKSYEbfUKSEYbfSUKebfy" << endl;
   
   littleNyan->fly();
   littleNyan->nyan();
   
   delete littleNyan;
}

void main()
{
  
   
   

   for(int a = 1; a<2000; a++)
   {
	    testNyanCat();
   }

   system("pause");
}


