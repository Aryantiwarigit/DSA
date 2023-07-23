// IMPORTANT QS --> This require a simple algorithm (watch video)

int remove_duplicate(int a[],int n){
    // code here
    int i=0;
    for(int j=0; j<n; j++){
        if(i==0 || a[i-1]!=a[j]){
            a[i] = a[j];
            i++;
        }
    }
    return i;
}
