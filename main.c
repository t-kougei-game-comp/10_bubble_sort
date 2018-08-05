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
    int idx = count-1;
    int num = src[idx];
    for(int i = count - 2; step <= i; i--){
        int n = src[i];
        if(num < n){
            src[idx] = n;
            src[i] = num;
            idx = i;
            num = n;
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
    
    // 整列
    for(int i = 0; i < count; i++){
        bouble_sort(src, count, i);
    }
    
    show_data(src, count);

    return 0;
}
