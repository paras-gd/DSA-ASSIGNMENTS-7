#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    if(scanf("%d",&n)!=1) return 0;
    int *a = malloc(n * sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++) if(a[j]<a[min]) min=j;
        int t=a[i]; a[i]=a[min]; a[min]=t;
    }
    for(int i=0;i<n;i++){ if(i) printf(" "); printf("%d",a[i]); }
    printf("\n");
    free(a);
    return 0;
}
