#include"stdio.h"

int main(){
    int a;
    int b;
    //freopen("in.txt", "r",stdin);
    //freopen("out.txt", "w", stdout);
    scanf("%d", &a);
    while(a--){
        scanf("%d", &b);
        printf("1 %d\n",b-1);
    }
    return 0;
}
