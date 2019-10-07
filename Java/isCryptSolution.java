boolean isCryptSolution(String[] crypt, char[][] solution) {
    
    char[] i1 = crypt[0].toCharArray();
    char[] i2 = crypt[1].toCharArray();
    char[] sol = crypt[2].toCharArray();
    
    int i,j;
    
    
    for(i=0;i<i1.length;i++)
        for(j=0;j<solution.length;j++)
            if(i1[i]==solution[j][0])i1[i]=solution[j][1];
    
    
    for(i=0;i<i2.length;i++)
        for(j=0;j<solution.length;j++)
            if(i2[i]==solution[j][0])i2[i]=solution[j][1];
    
     
    for(i=0;i<sol.length;i++)
        for(j=0;j<solution.length;j++)
            if(sol[i]==solution[j][0])sol[i]=solution[j][1];
    
    
    String x = new String(i1);
    String y = new String(i2);
    String z = new String(sol);
    
    
    Double a = Double.parseDouble(x);
    Double b = Double.parseDouble(y);
    Double c = Double.parseDouble(z);
    
    System.out.print(x+" "+y+" "+z);
        
    if(i1[0]=='0' || i2[0]=='0' || sol[0]=='0'){
        if(x.length()<2 || y.length()<2 || z.length()<2){}
        else return false;
    }
    if((a+b)==c)return true;
    
return false;
}

