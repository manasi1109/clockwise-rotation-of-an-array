/*
Problem Description -: Given an array Arr[ ] of N integers and a positive integer K. The task is to cyclically rotate the array clockwise by K.

Note : Keep the first of the array unaltered.

Example 1:

5  —Value of N
{10, 20, 30, 40, 50}  —Element of Arr[ ]
2  —–Value of K
 
Output :

40 50 10 20 30

Example 2:

4  —Value of N
{10, 20, 30, 40}  —Element of Arr[]
1  —–Value of K
 
Output :

40 10 20 30
*/

// code
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,k;
    int *input;
    scanf("%d",&a);
    input = malloc(a*sizeof(int));
    for(int i=0; i<a;i++){
    scanf("%d",&input[i]);
    }
    scanf("%d",&k);
   
    while(k!=0){
        int b = input[a-1];
    for(int j=a-1; j>0; j--){
        input[j] = input[j-1];
       }
       input[0] = b;
       k--;
    }
     
    for(int i = 0; i<a; i++){
    printf("%d ",input[i]);
    }

    return 0;
}
