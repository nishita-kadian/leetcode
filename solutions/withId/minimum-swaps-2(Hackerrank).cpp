int minimumSwaps(vector<int> arr) {
    int ans  = 0;
    for(int i = 0 ; i<arr.size();){
        if(arr[i]!=i+1){
            swap(arr[i],arr[arr[i]-1]);
            ans++;
        }    
        else{
            i++;
        }
    }
    return ans;
}