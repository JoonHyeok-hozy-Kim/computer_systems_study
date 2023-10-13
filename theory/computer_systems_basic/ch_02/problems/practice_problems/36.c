#include <stdio.h>

typedef long long ll;

int tmult_ok(ll x, ll y){
    ll p = x * y;
    return p == (int) p;
}

int main() {
    ll x, y;

    x = 1; y = 2;
    printf("[tmult_ok : %d] %lld * %lld = %lld\n", tmult_ok(x, y), x, y, x*y);

    x = -10; y = -20;
    printf("[tmult_ok : %d] %lld * %lld = %lld\n", tmult_ok(x, y), x, y, x*y);

    x = 0x8000000000000000; y = 0x8000000000000001;
    printf("[tmult_ok : %d] %lld * %lld = %lld\n", tmult_ok(x, y), x, y, x*y);

    x = 0x7fffffffffffffff; y = 0x7ffffffffffffffe;
    printf("[tmult_ok : %d] %lld * %lld = %lld\n", tmult_ok(x, y), x, y, x*y);
}