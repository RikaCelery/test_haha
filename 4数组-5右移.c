/*5
题目编号：Exp04-Basic05，GJBook3-06-06
题目名称：转移0元素
题目描述：编写程序，不使用其他辅助数组，把给定整型数组中所有0元素全部移到后面，且所有非0元素的顺序不变。
输入：第一行输入数组长度n（≤100），第二行依次从键盘随机输入n个整数作为数组元素值。
输出：已将所有0元素串到后面的整数数组，各元素间以一个西文空格间隔，最后一个元素后无字符。
样例1：
输入：
10
0 3 1 0 0 0 1 2 3 0
输出：
3 1 1 2 3 0 0 0 0 0
样例2：
输入：
10
0 0 0 0 0 0 1 2 3 4
输出：
1 2 3 4 0 0 0 0 0 0*/
#include <stdio.h>

int main(){
    int n;
    int a[100]={0};
    int i=0;
    int count=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]!=0){
          printf("%d ",a[i]);          
        }else{
            count++;
        }
    }    
    for(int k=0;k<count;k++){
      printf("0 ");}
    return 0;
}