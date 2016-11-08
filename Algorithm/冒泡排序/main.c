//
//  main.c
//  冒泡排序
//
//  Created by Heisenbean on 16/11/3.
//  Copyright © 2016年 Heisenbean. All rights reserved.
//


/*
 需求: 1.对一组数进行排序,不超过100个
 2.带名字排序,比如人数得分,xiaoming 66,xiaobai 89
 */
#include <stdio.h>

// 定义一个学生结构体
struct student{
    char name[21];  // 姓名
    int score;     // 分数
};


int main(int argc, const char * argv[]) {
   
    // 初始化一个学生数组
    struct student a[100],k;
    
    int i,j,n;
    scanf("%d",&n); // 输入要比较的元素个数
    
    for (i = 1; i <= n; i++) {
        scanf("%s %d",a[i].name,&a[i].score);
    }
    
    
    for (i = 1; i <= n - 1; i++) {  // 核心部分其实就是两个for循环
        for (j = 1; j <= n - i; j++) {
            if (a[j].score < a[j + 1].score) {
                k = a[j]; a[j] = a[j + 1]; a[j + 1] = k;
            }
        }
    }
    
    for (i = 1; i <= n; i++) {
        printf("姓名:%s 分数:%d\n",a[i].name,a[i].score);
    }
    
    getchar();getchar();
    
    return 0;
}
