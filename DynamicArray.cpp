#include <iostream>

int* func_returnArr(int size, int x)
{
	int* result = new int[size];
	
	for (int i = 0; i < size; i++)
		result[i] = x + i + 1;
		
	return result;
}

int main()
{
	int ArraySize = 5;
	int IndexValue = 5;
	int* arr = func_returnArr(ArraySize, IndexValue);
	
	for (int i = 0; i < 5; i++)
		std::cout << arr[i] << " ";
	
	std::cin.get();
	return 0;
}
