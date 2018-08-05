#include <stdio.h>
#include <stdlib.h>

void show_data(int *src, int count)
{
    for(int i = 0; i < count; i++)
    {
        if(i != 0) printf(" ");
        printf("%d", src[i]);
    }
    printf("\n");
}

void bouble_sort(int *src, int count, int step)
{
    for(int i = count - 1; step < i; i--){
        int n0 = src[i];
        int n1 = src[i-1];
        if(n0 < n1){
            src[i] = n1;
            src[i-1] = n0;
            // 表示
            show_data(src, count);
        }
    }
}

int main(int argc, char *argv[]) 
{
    char str[7];
    int src[100];
    int count = 0;
    
    // データの読み込み
    while(fgets(str, sizeof(str), stdin)){
        src[count++] = atoi(str);
    }
    
    // 入力データの表示
    show_data(src, count);

    // 整列
    for(int i = 0; i < count-1; i++){
        bouble_sort(src, count, i);
    }
    
    return 0;
}
