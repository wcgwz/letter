#include <stdio.h>

long long derangement(int n) {
    if (n == 1) return 0; 
    if (n == 2) return 1; 
    return (n - 1) * (derangement(n - 1) + derangement(n - 2));
}
int main() {
    int n;
    scanf_s("%d", &n);
    if (n < 1) 
    {
        return 1; 
    }
    long long result = derangement(n);
    printf("%lld\n", result);
    return 0;
}