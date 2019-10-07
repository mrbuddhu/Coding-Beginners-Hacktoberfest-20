boolean sudoku2(char[][] grid) {
    
    HashSet<Character> hs = new HashSet<Character>();
    HashSet<Character> ps = new HashSet<Character>();
    
    int l=grid.length;
    for(int i=0;i<l;i++){
        hs.clear();ps.clear();
        for(int j=0;j<l;j++){
            if(grid[i][j]!='.' ){
                
                if(!hs.contains(grid[i][j]))hs.add(grid[i][j]);
                else {System.out.println("F1"+" "+i+" "+j);return false;}
                
            }
            
            if(grid[j][i]!='.'){
                
                if(!ps.contains(grid[j][i]))ps.add(grid[j][i]);
                else {System.out.println("F2"+" "+i+" "+j);return false;}
                
            }
        
        }
    
    }
    
    
    for(int i=0;i<=l-3;i+=3){
        for(int j=0;j<=l-3;j+=3){
            hs.clear();
                for(int x=0;x<3;x++)
                    for(int y=0;y<3;y++){
                        if(grid[i+x][j+y]!='.'){
                        if(!hs.contains(grid[i+x][j+y]))hs.add(grid[i+x][j+y]);
                        else {System.out.println("F3"+" "+(i+x)+" "+(j+y)+" "+grid[i+x][j+y]);return false;}
                    }
                }
        }
    }
    
return true;
}

