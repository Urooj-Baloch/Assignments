/* 
Prorgrammer:urooj Baloch
Description: task 2
Date: 31-10-2023
*/
#include <stdio.h>
void reverse(int *arr,int size){

int *start=arr;
	int *end=arr+size-1;
	
	while(start<end){
		int temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
		
	}
}



int main() {
	int arr[10];
	printf("enter the 10 integers\n");

	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf(" original array\n");
	
	for (int i=0;i<10;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	reverse(arr,10);
	printf("reverse array\n");
	for(int i=0;i<10;i++){
	
	printf("%d",arr[i]);
}
printf("\n");
		return 0;
}







