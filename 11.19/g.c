/*
题目描述
void SelectSort(int a[],int n); 使用选择排序算法对数组a的前n个元素按照升序的方式排序。
选择排序算法描述如下：
从a[0]~a[n-1]这段元素中找最小元素a[min]，a[0]和a[min]交换；接着，从a[1]~a[n -1]这段元素中找最小元素a[min]，a[1]和a[min]交换；依次类推，直到从a[n－2]~a[n -1]这段元素中找最小元素a[min]，a[n－2]和a[min]交换。
输入与输出要求：首先输入一个整数n(1<n<=1000)，代表待排序元素的个数。然后是n个整数，每个整数不会超过int型的存储范围
输出为n-1行，依次为1到n-1趟排序后数组内各个元素。每行输出的顺序为a[0]至a[n-1]，数与数之间用空格分开，注意第n个数后没有空格而是换行符。
建议设计两个辅助函数:

函数功能：找数组中的最小值元素，并返回其下标
参数说明：数组名，查找起始位置下标，查找终止位置下标
int findMin(int data[], int startLoc, int endLoc) ;

函数功能：依次输出数组中各个元素，数与数之间用空格分开，最后一个数后没有空格而是换行符
参数说明：数组名，数组内元素个数
void outputData(int data[],int elementCount) ;

输入样例
8
49 38 65 97 76 13 27 4
输出样例
4 38 65 97 76 13 27 49
4 13 65 97 76 38 27 49
4 13 27 97 76 38 65 49
4 13 27 38 76 97 65 49
4 13 27 38 49 97 65 76
4 13 27 38 49 65 97 76
4 13 27 38 49 65 76 97
*/
#include <stdio.h>
#include <stdlib.h>
int findMin(int data[], int startLoc, int endLoc){
    int downmark=0;
    int min=data[startLoc]+1;
    for(int i=startLoc;i<=endLoc;i++){
        if(data[i]<min){
            min=data[i];
            downmark=i;
        }
    }
    return downmark;
}
void outputData(int data[],int elementCount){
    for(int i=0;i<elementCount;i++){
        printf("%d",data[i]);
        if(i!=elementCount-1) printf(" ");
        else printf("\n");
    }
}
void SelectSort(int a[],int s,int e,int l){
    int tmp;
    if(s<e){
        int t=findMin(a,s,e);
        tmp=a[s];
        a[s]=a[t];
        a[t]=tmp;
        outputData(a,l);
        s=s+1;
        SelectSort(a,s,e,l);
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    SelectSort(a,0,n-1,n);
    return 0;
}