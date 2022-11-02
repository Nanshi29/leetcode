class Solution {
public:
    int countTriples(int n) {
        int ct=0; 
        for( int i =1; i<=n; i++)
        {
            for( int j=i+1; j<=n; j++)
            {
                int k = ( i*i)+(j*j);
                int sq=sqrt(k);

                if( k==sq*sq and sq<=n)ct+=2;
            }

        }
        return ct;
        
    }
};