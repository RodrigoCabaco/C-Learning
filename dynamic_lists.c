#include <stdio.h>
#include <stdlib.h>

void add_to_array (char** array [], char* value, int array_size) {
	char* new_array [array_size+1];
	for (int i = 0; i < array_size; ++i)
	{
		new_array[i]=array[i];
	}
	new_array[array_size+1] = value;
	array = new_array;
}

int main()
{	
	char* i [] = {"Hi","ho","hias"};
	add_to_array(&i, "Hello",3);
	printf("%s", i[1]);
	return 0;
}