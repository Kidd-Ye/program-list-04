//
//  main.cpp
//  ReverseList
//
//  Created by kidd on 2018/9/8.
//  Copyright © 2018年 Kidd. All rights reserved.
//

#include <iostream>

void Reverse(int arr[], int from, int to){
    int i, temp;
    for (i = 0; i<(to-from+1)/2 ; i++) {
        temp = arr[from + i];
        arr[from + i] = arr[to - i];
        arr[to - i] = temp;
    }
}

void Converse(int arr[], int n, int p){//n为数组长度，p为向左循环移动的位置个数
    Reverse(arr, 0, p-1);
    Reverse(arr, p, n-1);
    Reverse(arr, 0, n-1);
}
void Print(int arr[]){
    for (int i = 0; i < 8; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {

    int arr[] = {1,2,3,4,5,6,7,8};
    printf("初始列表：\n");
    Print(arr);
    printf("向左循环移动4个位置后的列表：\n");
    Converse(arr, 8, 4);
    Print(arr);
    return 0;
}
