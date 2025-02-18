#include <stdio.h>


/* 斐波那契数列：递归 */
int fib(int n) {
    // 终止条件 f(1) = 0, f(2) = 1
    if (n == 1 || n == 2)
        return n - 1;
    // 递归调用 f(n) = f(n-1) + f(n-2)
    int res = fib(n - 1) + fib(n - 2);
    // 返回结果 f(n)
    return res;
}

int main() {
    int n = 11;
    int res = fib(n);
    printf("fib(%d) = %d\n", n, res);
    return 0;
}
