//
// Created by Kishi Kishore N on 05/07/26.
//
#inlcude <stdio.h>


int main() {

   int arr[] = {1,2,3,4,5};
   int *ptr = arr;
   for(int i=0; i<5; i++){
    printf("%d",*ptr);
    }

}


void printf(char * str, int i);

void fun(int arr[]) {
    printf("%d", arr[0]);
}
