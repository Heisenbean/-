//
//  main.c
//  冒泡排序
//
//  Created by Heisenbean on 16/11/3.
//  Copyright © 2016年 Heisenbean. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a[100],i,j,k,n;
    scanf("%d",&n); // 输入一个数
    
    for (i = 1; i <= n; i++) {
        scanf("%d",&a[i]);
    }
    
    
    for (i = 1; i <= n - 1; i++) {
        for (j = 1; j <= n - i; j++) {
            if (a[j] < a[j + 1]) {
                k = a[j]; a[j] = a[j + 1]; a[j + 1] = k;
            }
        }
    }
    
    for (i = 1; i <= n; i++) {
        printf("%d ",a[i]);
    }
    
    getchar();getchar();
    
    return 0;
}
