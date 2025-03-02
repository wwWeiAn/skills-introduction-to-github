#include <stdio.h>

int main() {
    char input[14]; // 存储完整 ISBN（13 字符）
    int num[10];    // 存储数字和校验码（前9位数字 + 第10位校验码）
    
    scanf("%13s", input); // 读取输入
    
    // 解析输入并提取数字和校验码
    int num_index = 0;
    for (int i = 0; i < 13; i++) {
        if (input[i] == '-') continue;
        if (num_index < 9) {
            num[num_index++] = input[i] - '0'; // 前9位数字
        } else {
            // 处理第10位校验码（可能是X）
            if (input[i] == 'X') {
                num[9] = 10;
            } else {
                num[9] = input[i] - '0';
            }
        }
    }
    
    // 计算校验和
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        sum += (i + 1) * num[i];
    }
    int modnum = sum % 11;
    
    // 判断校验码是否正确
    if (modnum == 10) {
        if (num[9] == 10) { // 校验码应为X且输入正确
            printf("Right");
        } else { // 校验码错误，替换为正确值
            input[12] = 'X';
            printf("%s", input);
        }
    } else {
        if (modnum == num[9]) { // 校验码为数字且正确
            printf("Right");
        } else { // 校验码错误，替换为正确值
            input[12] = modnum + '0';
            printf("%s", input);
        }
    }
    
    return 0;
}
