//
//  main.c
//  水通排序
//
//  Created by Heisenbean on 16/10/24.
//  Copyright © 2016年 Heisenbean. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    /*
        需求:输入5个整数,然后从大到小排序(只能输入10以下的整数)
     */
    int a[11],i,j,t;
    
    for(i=0;i<=10;i++)
        a[i]=0;  //初始化为0
    
    for(i=1;i<=5;i++)  //循环读入5个数
    {
        scanf("%d",&t);  //把每一个数读到变量t中
        a[t]++;  //进行计数
    }
    
    for(i=10;i>=0;i--)  //依次判断a[0]~a[10]
        for(j=1;j<=a[i];j++)  //出现了几次就打印几次
            printf("%d ",i);
    getchar();getchar();
    //这里的getchar();用来暂停程序，以便查看程序输出的内容
    
    
    
    //
    /*
    int mark[1001],i,j,k;
    
    for (i = 0;i <= 1000;i++){  // 把所有的数(桶)都置0
        mark[i] = 0;
    }
    
    for (i = 1; i <= 5; i++) {  // 输入想要排序的5个数
        scanf("%d",&k);
        mark[k]++;  // 有哪个数,哪个水桶里就+1
    }
    
    for (i = 1000; i >= 0; i--) {
        for (j = 1; j <= mark[i]; j++) {
            printf("%d\n",i);
        }
    }
    
    getchar();getchar();
    
    */
    
    return 0;

}
