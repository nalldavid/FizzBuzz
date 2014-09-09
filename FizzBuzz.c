#include <stdio.h>

int main(){
	
	int i;
	for(i=1;i<101;i++){
		if(i%3==0){
			if(i%5==0){
				printf("FizzBuzz\n");
			}else{
				printf("Fizz\n");
			}
		}else if(i%5==0){
			printf("Buzz\n");
		}else{
			printf("%i\n",i);
		}
	}
	
	return 0;
}
