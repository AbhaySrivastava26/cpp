#include<bits/stdc++.h>
using namespace std;

int convertAtoB(string a,string b){
    int count=0;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]<b[i]) return -1;
    }
for(char ch='z';ch>='a' ;ch--){
    char mintarget='{';
    for(int i=0;i<n;i++){
         
        if(ch==a[i] && b[i]<ch){
            mintarget=min(mintarget,b[i]);
        }

    }
    if(mintarget!='{'){
        count++;
        for(int i=0;i<n;i++){
            if(a[i]==ch && b[i]<ch  ){
                a[i]=mintarget;
            }
        }
    }
}
return count;
}
int jersey(vector<int>&nums,vector<int>&b){
int ans=0;
vector<int>current=nums;
int n=nums.size();
while(true){
    ans++;
    vector<int>next(n);
    for(int i=0;i<n;i++){
        next[i]=current[b[i]-1];
    }
    if(next==nums) break;
    current=next;


}
return ans;
}
void goldenhoouse(int n,int k ,vector<int>&nums){
    int starting=0;
    int ending=0;
    bool yes=false;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            if(sum==k){
                starting=i;
                ending=j;
                yes=true;
                break;
            }
        }
        if(yes) break;
    }
    cout<<starting+1<<endl;
    cout<<ending+1;
}

int horse(vector<int>&nums,int n,int k){
   int maxi=0;
int sum=0;
   int start=0;
   for(int j=0;j<n;j++){
      sum+=nums[j];
      
     
      
      
      while(sum>=k){
          sum-=nums[start];
          start++;
        }
        maxi=max(maxi,j-start+1);
   }
   return maxi;
}
int maxsequencelement(vector<int>&nums){
    int n=nums.size();
    int currentmax=nums[0];
    int ans=0;
    for(int i=1;i<n;i++){
         
         if((nums[i]>=0 && currentmax>0)||(nums[i]<0 && currentmax<0)){
            currentmax=max(currentmax,nums[i]);
         }else{
            ans+=currentmax;
            currentmax=nums[i];
         }

    }
    ans+=currentmax;

    return ans;
}

int recursiveKnapSack(vector<int>&p ,vector<int>&c,int k,int i){
    if(i==p.size()) return 0;
    int skip=recursiveKnapSack(p,c,k,i+1);
    int take=0;
    if(p[i]<=k){
        take=c[i]+recursiveKnapSack(p,c,k-p[i],i+1);
    }
    return max(skip,take);
}

string removeBfromA(string a,string b){
    string res="";
    for(int i=0;i<a.size();i++){
        bool found=false;
        for(int j=0;j<b.size();j++){
         if(a[i]==b[j]){
            found=true ;
            break;
         }
        }
        if(!found) res+=a[i];
    }
    return res;
}
int dfs(int r,int c,vector<vector<int>>&grid,vector<vector<int>>&visited,int n, int m){
if(r<0||c<0||r>=n||c>=m)return 0;
if(grid[r][c]==0 ||visited[r][c]==1) return 0;
visited[r][c]=1;
int count=1;
count+=dfs(r+1,c,grid,visited,n,m);
count+=dfs(r-1,c,grid,visited,n,m);
count+=dfs(r,c+1,grid,visited,n,m);
count+=dfs(r,c-1,grid,visited,n,m);
return count;
}


 
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>>grid(n,vector<int>(m));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>grid[i][j];
//         }
//     }
//     vector<vector<int>>visited(n,vector<int>(m,0));
//     vector<int>group;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(grid[i][j]==1 && visited[i][j]==0){
//                 int size=dfs(i,j,grid,visited,n,m);
//                 group.push_back(size);
//             }
//         }
//     }
//     sort(group.begin(),group.end(),greater<int>());
//     int suresh=0;
//     for(int i=1;i<group.size();i+=2){
//         suresh+=group[i];
//     }
//     cout<<suresh<<" ";
// }

int calculateMissing(int i,int j){
    int n=j-i+1;
    int total=(n*(n+1))/2;
    int count=0;
    for(int k=i;k<=j;k++){
        count+=k;
    }
    return total-count;

}
long long ans=0;
int mex(vector<int>&current){
    int x=1;
    set<int>st(current.begin(),current.end());
    while(true){
        if(st.count(x)==0) return x;
        x++;
    }
    return -1;
}
void subsequenceofMisssingElement(int index,vector<int>&nums,vector<int>&current)
{
   if(index==nums.size()){
       ans+=mex(current);
       return;
   }
   current.push_back(nums[index]);
   subsequenceofMisssingElement(index+1,nums,current);
   current.pop_back();
   subsequenceofMisssingElement(index+1,nums,current);
}

double medianvalue(vector<int>&a,vector<int>&b){
set<int>st;
for(int i=0;i<a.size();i++){
    st.insert(a[i]);
}
for(int i=0;i<b.size();i++){
    st.insert(b[i]);
}
vector<int>v(st.begin(),st.end());

int totalsize=st.size();
if(totalsize%2!=0){
    return v[totalsize/2];
}
if(totalsize%2==0){
    return (v[totalsize/2-1]+v[totalsize/2])/2.0;
}
}


vector<int>evenumberofTimes(vector<int>&nums){
    unordered_map<int,int>mp;
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for(auto &it:mp){
        if((it.second)%2==0) ans.push_back(it.first);
    }
    return ans;
}


    vector<vector<int>>matrixRotation(vector<vector<int>>&matrix){
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>ans(m,vector<int>(n));
        for(int j=0;j<n;j++){
            for(int i=n-1;i>=0;i--){
                ans[j][n-i-1]=matrix[i][j];
                // ans[m-1-j][i] = matrix[i][j] -- this line is for anticlock wise rotation
            }
        }
        return ans;
    }


//matrix rotation
    // int main(){
    // int n,m;
    // cin>>n>>m;
    // vector<vector<int>>matrix(n,vector<int>(m));
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>matrix[i][j];
    //     }
    // }
    // vector<vector<int>>ans=matrixRotation(matrix);
    // for(int i=0;i<ans.size();i++)
    // {
    //     for(int j=0;j<ans[0].size();j++)
    //     {
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // }

















// int main(){

//     //vowel consonant sepcial and digits count
//     string s;
//     getline(cin,s);
//     int vowel=0,consonant=0,digit=0,special=0;

//     string vowels="aeiou";
//     string  digits="0123456789";
//     string specials="!@#$%^&*";
//     for(int i=0;i<s.size();i++){
//         char ch=s[i];
//         if(vowels.find(ch)!=string::npos){
//             vowel++;
//         }else if(digits.find(ch)==string::npos && specials.find(ch)==string::npos){
//             consonant++;
//         }else if(digits.find(ch)!=string::npos){
//             digit++;
//         }else{
//             special++;
//         }
//     }
//     cout<<"vowels"<<vowel<<" "<<"consonant"<<consonant<<" "<<"digits"<<digit<<" "<<"special"<<special<<endl;
// }

//  int main(){
//     //this question is basically for next permutation question
//  int n;
//  cin>>n;
//  vector<int>nums(n);
//  for(int i=0;i<n;i++){
//     cin>>nums[i];

//  }

//         int idx=-1;
//         for(int i=n-2;i>=0;i--){
//             if(nums[i]<nums[i+1]){
//                 idx=i;
//                 break;
//             }
//         }
//         if(idx==-1){
//             reverse(nums.begin(),nums.end());
//             for (int x : nums) cout << x << " ";
//             return 0;
//         }
//         for(int i=n-1;i>idx;i--){
//          if(nums[i]>nums[idx]){
//             swap(nums[i],nums[idx]);
//             break;

//          }
//         }
//         reverse(nums.begin()+idx+1,nums.end());
//         // return 0;
//         for(int i=0;i<nums.size();i++){
//             cout<<nums[i];
//         }
//         return 0;
//     }

 




// int main(){
// int n;
// cin>>n;
// int k;
// cin>>k;
// vector<int>nums(n);
// for(int i=0;i<n;i++){
//     cin>>nums[i];
// }
// while(k--){
//     int x,y;
//     cin>>x>>y;
//     nums[x-1]=y;
//     int cnt=1;
//     for(int i=1;i<n;i++){
//         if(nums[i]!=nums[i-1]) cnt++;
//     }
//     cout<<cnt<<" ";
// }






//century year
// int main(){
// int n;
// cin >> n;
// if (n % 100 == 0) {
// cout << n / 100 << endl;
// } else {
// cout << (n / 100) + 1 << endl;
// }
// }




//this question is from a and b check common element and print  it
// int main(){
//     string s1,s2;
//     cin>>s1>>s2;
//     set<char>a,b;
//     for(char c:s1){
//         a.insert(c);
//     }
//     for(char c:s2){
//         b.insert(c);
//     }
//     for(char c:a){
//         if(b.count(c)) cout<<c;
//     }
// }
string newsortingtype(string s,string key){
    string ans="";
    for(char ch:key){
        for(char c:s){
            if(ch==c) ans+=c;
        }
    }
    return ans;
}
string is3Divisble(string s){
    int ans=0;
    for(int i=0;i<s.size();i++){
        int value=s[i]-'0';
        ans+=value;
    }
    if(ans%3==0) return "YES";
    return "NO";
}

int villageSweet(vector<int>&sweets,int k){
    int n=sweets.size();
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        int maxi=INT_MIN;
        for(int j=i-k;j<=i+k;j++){
            if(j<0) continue;
            if(j>=n) continue;
            maxi=max(maxi,sweets[j]);

        }
        mini=min(mini,maxi);
    }
    return mini;
}

bool isnumeric(char ch){
    return ch>='0' && ch<='8';
}
int maximumStringNumber(string s){
    int maxi=0;
    for(int i=0;i<s.size();i++){
        // char ch=s[i];
        if(isnumeric(s[i])){
            string ans="";
            while(i<s.size() && isnumeric(s[i])){
                ans+=s[i];
                i++;
            }
            int value=stoi(ans);
            maxi=max(maxi,value);
        }
    }
    return maxi;

}

vector<int>replaceMapValue(vector<int>&nums){
    int n=nums.size();
    map<int,int>mp;
    vector<int>ans;
    for(int it:nums){
        mp[it]++;
    }
    for(int i=0;i<nums.size();i++){
          if(mp.find(nums[i])!=mp.end()){
            ans.push_back(mp[nums[i]]);
          }
    }
    return ans;
}


string ReverseToLowerToUpper(string str){
    for(int i=0;i<str.size();i++){
        if(str[i]>='a'&& str[i]<='z') str[i]=str[i]-32;
        else if(str[i]>='A' && str[i]<='Z') str[i]=str[i]+32;
    }
    return str;
}
// int main(){
// string s;
// cin>>s;




// string res=ReverseToLowerToUpper(s);
// cout<<res;

// }


//series type questions

int main(){
    string parent;
    getline(cin,parent);
    string s;
    cin>>s;
    string users;
    getline(cin,users);
    
    
}