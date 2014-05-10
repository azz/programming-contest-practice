#include <stdio.h>
int main(void) {
    size_t val, sum;
    while (scanf("%zu", &val) && val != 0) {
        for (; val >= 10; val = sum)
            for (sum = val % 10; val >= 10; sum += val % 10)
                val /= 10;
        printf("%zu\n", val);
    }
    return 0;
}
