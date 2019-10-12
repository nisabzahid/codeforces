#include <stdio.h>

int isPrime[ 1000000+1] ;
void sieve()
{

    for( int i = 2 ; i <= 1000000 ; i ++ )
    {
        for( int j = i ; j <= 1000000 ; j += i )
        {
            isPrime[ j ] = 0 ;
        }
    }
}
int main()
{
    sieve() ;
    int N ;
    scanf("%d",&N) ;
    int num ;
    for( int i = 0 ; i < N ; i ++ )
    {
        scanf("%d",&num) ;
        if( isPrime[ num ] == 1 )
        {
            printf("%d is a prime number.\n",num);
        }
        else
        {
            printf("%d is not a prime number.\n",num);
        }
    }
    return 0 ;
}
