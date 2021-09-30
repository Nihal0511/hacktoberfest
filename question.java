class Question1{
    public static void main(String[] args) {
        int n=Integer.parseInt(args[0]);
        for(int i=0;i<n;i++){
            System.out.print("*");
            if(i%2==0){
                continue;
            }System.out.println();
        }
    }
}
