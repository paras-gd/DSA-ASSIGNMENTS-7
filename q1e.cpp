#include <stdio.h>
#include <stdlib.h>

int partition(int *a,int l,int r){
    int pivot=a[r], i=l-1;
    for(int j=l;j<r;j++){
        if(a[j]<=pivot){ i++; int t=a[i]; a[i]=a[j]; a[j]=t; }
    }
    int t=a[i+1]; a[i+1]=a[r]; a[r]=t;
    return i+1;
}

void quick_sort(int *a,int l,int r){
    if(l<r){
        int p = partition(a,l,r);
        quick_sort(a,l,p-1);
        quick_sort(a,p+1,r);
    }
}

int main(){
    int n;
    if(scanf("%d",&n)!=1) return 0;
    int *a = malloc(n * sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    if(n>0) quick_sort(a,0,n-1);
    for(int i=0;i<n;i++){ if(i) printf(" "); printf("%d",a[i]); }
    printf("\n");
    free(a);
    return 0;
}
