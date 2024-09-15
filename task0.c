#include <windows.h>
#include <stdio.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // 设置一个标志，优化冒泡排序
        int swapped = 0; 
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换 arr[j] 和 arr[j + 1]
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
    int arr[100], size;
    SetConsoleOutputCP(65001); // 解决中文乱码

    // 输入数组大小
    printf("请输入数字的数量: ");
    scanf("%d", &size);

    // 输入数组元素
    printf("请输入 %d 个数字: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // 执行冒泡排序
    bubbleSort(arr, size);

    // 输出排序后的数组
    printf("排序后的数字为: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
