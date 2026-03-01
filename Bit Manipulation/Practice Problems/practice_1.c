/* QUESTION:
Given an array where every element occurs three times, except one element which occurs only once. Find the element that occurs once.
Examples:

Input: arr[] = [1, 10, 1, 1]
Output: 10
Explanation: 10 occurs once in the array while the other element 1 occurs thrice.

Input: arr[] = [3, 2, 1, 34, 34, 1, 2, 34, 2, 1]
Output: 3
Explanation: All elements except 3 occurs thrice in the array.
*/

#include<stdio.h>

//*** This is also correct program, but here the time complexity will be o(n^2) hence, code is improved below
/*int main(void)
{
    int arr[] = {3, 2, 1, 34, 34, 1, 2, 34, 2, 1}; // array declaration as per question
    int arr_len = sizeof(arr)/sizeof(arr[1]), answer = 0; //length of array
    for(int i = 0; i<arr_len; i++){
        while(answer == 0)
        for(int j = i+1; j<arr_len; j++){
            if(arr[i] & arr[j] == arr[i])
                break;
            else answer = arr[i];
        }
    }

    printf("%d\n", answer);
    return 0;
}*/

int main()
{
    int arr[] = {3, 2, 1, 34, 34, 1, 2, 34, 2, 1}; // array declaration as per question
    int arr_len = sizeof(arr)/sizeof(arr[1]); //length of array
    int result = 0, x, sum;

    // Iterate through every bit (from 0 to 31) as int is 32 bit
    for (int i = 0; i < 32; i++) {
        sum = 0;
        
         // Get the mask for the i-th bit position
        x = (1 << i); 

        // Iterate over the array and count the number of set
        // bits at position i
        for (int j = 0; j < arr_len; j++) {
            
            // Check if the i-th bit is set in arr[j]
            if (arr[j] & x) {  
                sum++;
            }
        }

        // If sum is not a multiple of 3, it's part of the unique element
        if ((sum % 3) != 0) {
            result |= x;
        }
    }

    printf("%d", result);
    return 0;
}