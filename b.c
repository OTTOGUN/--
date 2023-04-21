#include <stdio.h>

void BubbleSort1(int* k,int n){
    int i,j,temp,count1 = 0,count2 = 0;

    for(i = 0;i < n - 1;i++){
        for(j = i + 1;j < n;j++){
            count1++;
            if(k[i] > k[j]){
                temp = k[j];
                k[j] = k[i];
                k[i] = temp;
                count2++;
            }
        }
    }
    printf("总共进行了%d次比较,进行了%d次移动\n",count1,count2);
}

void BubbleSort2(int* k,int n){
    int i,j,temp,count1 = 0,count2 = 0,flag;

    flag = 1;
    for(i = 0;i < n - 1 && flag;i++){
        for(j = n - 1;j > i;j--){
            count1++;
            flag = 0;
            if(k[j-1] > k[j]){
                count2++;
                temp = k[j - 1];
                k[j - 1] = k[j];
                k[j] = temp;
                flag = 1;
            }
        }
    }
    printf("总共进行了%d次比较,进行了%d次移动\n",count1,count2);
}
int main(){
    int i,a[10] = {5,2,6,0,3,9,1,7,4,8};
    int b[10] = {3,1,2,9,5,4,6,7,8,0};

    /*BubbleSort1(a,10);

    printf("排序后的结果: ");
    for(i = 0;i < 10;i++){
        printf("%d ",a[i]);
    }
    printf("\n\n");*/

    BubbleSort2(b,10);

    printf("排序后的结果: ");
    for(i = 0;i < 10;i++){
        printf("%d ",b[i]);
    }
    printf("\n\n");

    return 0;
}