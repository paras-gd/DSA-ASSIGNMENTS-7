#include <stdio.h>
#include <stdlib.h>

void printarr(int *a,int n){ for(int i=0;i<n;i++){ if(i) printf(" "); printf("%d",a[i]); } printf("\n"); }

void minmax_selection_sort(int *a,int n){
    int l=0, r=n-1;
    while(l<r){
        int mn=l, mx=l;
        for(int i=l+1;i<=r;i++){
            if(a[i]<a[mn]) mn=i;
            if(a[i]>a[mx]) mx=i;
        }
        int t=a[l]; a[l]=a[mn]; a[mn]=t;
        if(mx==l) mx=mn;
        t=a[r]; a[r]=a[mx]; a[mx]=t;
        l++; r--;
    }
}

int main(){
    int n;
    if(scanf("%d",&n)!=1) return 0;
    int *a = malloc(n * sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    minmax_selection_sort(a,n);
    printarr(a,n);
    free(a);
    return 0;
}
