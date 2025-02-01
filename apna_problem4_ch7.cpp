#include<stdio.h>

void reversearray(int arr[], int n);

int main()
{
  printf("\t REVERSED ARRAY GENERATOR \n");
  int num;
  printf("\nenter size of array =  ");
  scanf("%d", &num);
  int arr[num];
  for(int i = 0; i<num; i++){
  	printf("\nenter numbr %d = ", i+1);
  	scanf("%d", &arr[i]);
  }
    reversearray(arr, num);
    printf("\t reverse array = \n");
	for(int i = 0; i < num; i++){
		printf("%d \n", arr[i]);
	}	
	printf("\n");
	return 0;
}
void reversearray(int arr[], int n){
	int start = 0,  end = n-1;
	while(start < end){
		int temp = 0;
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}	
}
