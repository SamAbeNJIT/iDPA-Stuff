#include <iostream>
#include <string>

using namespace std;

int g=12;

void main()
{

   int* arr = new int[3];
   
    arr[0] = 252;
    arr[1] = 10;
    arr[2] = 10;
    cout << arr[0] << endl;  
	cout << "The address of the array in dynamic memory: "<< arr[0] << endl;
    
	
	for(;;)
    
	{
        arr = new int[10000];
    }
    
    
    delete[] arr;
    
    
	system("pause");
}