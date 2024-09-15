#include <stdio.h>
#include <windows.h> 
#define MAX_SIZE 100
#include <string.h>
char space = 32; // ASCII value for space

void sort(int arr[], int size) {
    int swapped;
    for (int i = 0; i < size - 1; i++) {
        swapped = 0; // 重置为 0
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // 有交换发生
            }
        }
        // 如果没有发生交换，数组已经是有序的
        if (swapped == 0) {
            break;
        }
    }
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    char input[20]; // 用于存储用户输入的字符串

    SetConsoleOutputCP(65001); // 解决中文乱码

    printf("请输入最多 %d 个数字(输入空格结束):\n", MAX_SIZE);
    while (size < MAX_SIZE) {
        printf("请输入第 %d 个数字: ", size + 1);
        scanf("%s", input); // 读取用户输入的字符串
        
        // 判断输入是否为空或为空格
        if (strcmp(input, " ") == 0 || strcmp(input, "") == 0) {
            break; // 如果输入为空或包含空格，结束输入
        }
        
        // 将输入的字符串转换为整数
        arr[size] = atoi(input); // 使用 atoi 将字符串转换为整数
        size++; // 增加输入计数
    }

    // 调用排序函数（假设您有一个排序函数如sort）
    sort(arr, size);

    return 0;
}


