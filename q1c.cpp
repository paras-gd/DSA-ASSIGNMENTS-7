#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    if(scanf("%d",&n)!=1) return 0;
    int *a = malloc(n * sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){ int t=a[j]; a[j]=a[j+1]; a[j+1]=t; }
        }
    }
    for(int i=0;i<n;i++){ if(i) printf(" "); printf("%d",a[i]); }
    printf("\n");
    free(a);
    return 0;
}
