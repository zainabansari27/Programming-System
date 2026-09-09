#include<stdio.h>
int main(){
    
    int arr[5];
    int largest, secondLargest;

    printf("Enter 5 integers = ");

    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    
    largest = arr[0];
    secondLargest = arr[1];

    if(arr[0] > arr[1]){
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }

    for(int i=2; i<5; i++){
      if(arr[i] > largest){
        secondLargest = largest;
        largest = arr[i];
      } 
      else if (arr[i] > secondLargest){
        secondLargest = arr[i];
      }
    }

    printf("Second largest = %d ", secondLargest);

}