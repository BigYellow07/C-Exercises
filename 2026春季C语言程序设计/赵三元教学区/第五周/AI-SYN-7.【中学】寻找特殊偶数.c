//受Deepseek启发，我完成了这个联系，这是AI的代码，不清楚能不能通过乐学。
#include <stdio.h>

// 判断是否为特殊偶数（四位数，各位数字互不相同，且为偶数）
int isSpecialEven(int n) {
    if (n < 1000 || n > 9999) return 0;          // 不是四位数
    int a = n / 1000;
    int b = (n / 100) % 10;
    int c = (n / 10) % 10;
    int d = n % 10;
    if (d % 2 != 0) return 0;                   // 个位不是偶数
    if (a == b || a == c || a == d || b == c || b == d || c == d)
        return 0;                               // 有重复数字
    return 1;
}

int main() {
    int min, max;
    while (1) {
        scanf("%d %d", &min, &max);
        if (min == 0 && max == 0) break;        // 结束条件

        int count = 0;
        for (int i = min; i <= max; ++i) {
            if (isSpecialEven(i)) {
                printf("%d ", i);               // 每个数字后跟一个空格
                ++count;
            }
        }
        if (count > 0) printf("\n");            // 数字行后换行
        printf("counter=%d\n", count);          // 输出个数
    }
    return 0;
}
