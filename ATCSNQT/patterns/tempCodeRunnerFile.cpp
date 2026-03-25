for(i=0;i<n;i++){ 
    for(j=0;j<n-i-1;j++){
        cout<<" ";
    }
  


  
        for(j=1;j<=2*i+1;j++){
            cout<<"*";
        }
       



    for(j=0;j<n-i-1;j++){
        cout<<" ";
    }
    cout<<endl;


}
}
output
*
***
*****
*******
*********
for(i=0;i<=n;i++){ 
    for(j=0;j<=i;j++){
        cout<<" ";
    }
        for(j=1;j<=2*n-(2*i+1);j++){
            cout<<"*";
        }
       

    for(j=0;j<=i;j++){
        cout<<" ";
    }
    cout<<endl;


}
