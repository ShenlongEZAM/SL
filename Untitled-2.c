#include <stdio.h>

int main() {
    char strings[5][100]; // 声明一个二维数组用于存储多组字符串
    int numOfStrings, spaceCount = 0; // 字符串数量和空格计数器

    // 输入字符串的数量
    printf("请输入字符串的数量: ");
    scanf("%d", &numOfStrings);
    getchar(); // 吸收换行符

    // 输入字符串
    for (int i = 0; i < numOfStrings; i++) {
        printf("请输入第 %d 个字符串: ", i + 1);
        fgets(strings[i], sizeof(strings[i]), stdin); // 使用 fgets 读取字符串
    }

    // 计算空格数量
    for (int i = 0; i < numOfStrings; i++) {
        for (int j = 0; strings[i][j] != '\0'; j++) {
            if (strings[i][j] == ' ') { // 如果当前字符是空格
                spaceCount++; // 计数器加1
            }
        }
    }

    // 输出空格数量
    printf("所有字符串中空格符号的个数是: %d\n", spaceCount);

    return 0;
}

