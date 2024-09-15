#include <stdio.h>
#include <windows.h> // 如果使用 SetConsoleOutputCP 需要包含此头文件

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
    int arr[100]; // 数组最多保存100个元素
    int size = 0; // 使用 size 记录实际输入的数字个数
    int input; // 用于存储每次输入的数字
    SetConsoleOutputCP(65001); // 解决中文乱码

    // 输入数组元素
    printf("请输入最多 %d 个数字(输入负数结束):\n", 100);
    while (size < 100) {
        printf("请输入第 %d 个数字: ", size + 1);
        scanf("%d", &input); // 读取用户输入的数字
        
        // 判断是否结束输入
        if (input < 0) {
            break; // 如果输入负数，结束输入
        }
        
        arr[size] = input; // 将输入的数字赋值到数组中
        size++; // 增加输入计数
    }

    // 调用排序函数（假设您有一个排序函数如sort）
    sort(arr, size);

    // 输出实际输入的数字个数和排序后的数组
    printf("实际输入的数字个数: %d\n", size);
    printf("排序后的数组为:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
