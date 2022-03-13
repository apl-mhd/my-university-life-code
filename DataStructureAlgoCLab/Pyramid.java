void showPyramid(int n){

        int i, j, k, m;
        for( i=1; i<=n; i++){


            for(int space=1; space<=n-i; space++ ){

                System.out.print(" ");

            }


            for( j=1; j<=i; j++){

                System.out.print(j);
            }

            //System.out.print("1");

            for( m=i-1; m>=1; m--){

                System.out.print(m);
            }

           System.out.println("");




        }
    }
}