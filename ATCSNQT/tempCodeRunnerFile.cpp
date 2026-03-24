
int villageSweet(vector<int>sweets,int k){
    int n=sweets.size();
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i-k;j<=i+k;j++){
            if(j<0) continue;
            maxi=max(maxi,sweets[j]);

        }
        mini=min(mini,maxi);
    }
    return mini;
}

int main(){
   int n;
   cin>>n;
   int k;
   cin>>k;
   vector<int>sweets(n);
   for(int i=0;i<n;i++){
    cin>>sweets[i];
   }
   int ans=villageSweet(sweets,k);
   cout<<ans;

}