#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    if(a>b && a>c && a>d) return a;
    else if(b>a && b>c && b>d) return b;
    else if(c>a && c>b && c>d) return c;
    else return d;
}

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
    #endif

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
