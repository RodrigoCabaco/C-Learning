#include <stdio.h>

void change(char** hi){
	*hi = "Hi";
};

int main(){
	char* i = "Hello";
	i = "Not Hellasdo";
	change(&i);
	printf("%s", i);
	return 0;
}