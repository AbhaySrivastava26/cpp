//if input is given rows and colums but data in string then how to convert it into array of 2d 
int main(){
    int row=3,col=2;
    string line;
    getline(cin,line);
    line.erase(remove(line.begin(),line.end(),' '),line.end());
    stringstream ss(line);
    vector<int>nums;
    string token;
    while(getline(ss,token,',')){
        nums.push_back(stoi(token));
    }
    int k=0;
    vector<vector<int>>matrix(row,vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            matrix[i][j]=nums[k++];
        }
    }
    for(auto &r:matrix){
        for(int x:r) cout<<x<<" ";
        cout<<endl;
    }
}