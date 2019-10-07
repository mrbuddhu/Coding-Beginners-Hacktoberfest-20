int[][] rotateImage(int[][] a) {
    
    int l=a.length,i,j;
    int[][] ans = new int[l][l];
    
    for(i=0;i<l;i++)
    for(j=l-1;j>=0;j--){
        ans[i][l-j-1] = a[j][i];}

return ans;}
