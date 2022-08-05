/*3. Write down a function that will take an array, its size and an integer M as parameters and return the summation of integers that are greater than M.
 Then write a main function that asks the user to enter an integer X and N integers.
 Store N integers in an array and use the above function to compute the summation of the integers that are greater than X and display the result.*/

 #include <stdio.h>

int sumGreater(int arr[],int size,int M){
    int sum=0;
    for(int i=0;i<size;++i){
        if(arr[i]>M){
            sum+=arr[i];
        }
    }
    return sum;

    }


 int main() {
    int arr[1000],size,X;

    printf("How many numbers : ");
    scanf("%d",&size);
    printf("Enter %d integers number : ",size);
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }

    printf("Enter a integer X : ");
    scanf("%d",&X);

    printf("Summation of greater than %d is  %d",X,sumGreater(arr,size,X));
    return 0;



 }
