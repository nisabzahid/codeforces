
#include <stdio.h>
#define MAX 40 // to test with bigger number, adjust this value
int memo[MAX]; // array to store the previous calculations
// the slowest, unnecessary computation is repeated
int Non_DP(int n) {
  if (n==1 || n==2)
    return 1;
  else
    return Non_DP(n-1) + Non_DP(n-2);
}
// top down DP
int DP_Top_Down(int n) {
  // base case
  if (n == 1 || n == 2)
    return 1;
  // immediately return the previously computed result
  if (memo[n] != 0)
    return memo[n];
  // otherwise, do the same as Non_DP
  memo[n] = DP_Top_Down(n-1) + DP_Top_Down(n-2);
  return memo[n];
}
// fastest DP, bottom up, store the previous results in array
int DP_Bottom_Up(int n) {
  memo[1] = memo[2] = 1; // default values for DP algorithm
  // from 3 to n (we already know that fib(1) and fib(2) = 1
  for (int i=3; i<=n; i++)
    memo[i] = memo[i-1] + memo[i-2];
  return memo[n];
}
int main() {
  int z;
  // this will be the slowest
  for (z=1; z<MAX; z++) printf("%d-",Non_DP(z));
  printf("\n\n");
  // this will be much faster than the first
  for (z=0; z<MAX; z++) memo[z] = 0;
  for (z=1; z<MAX; z++) printf("%d-",DP_Top_Down(z));
  printf("\n\n");
  /* this normally will be the fastest */
  for (z=0; z<MAX; z++) memo[z] = 0;
  for (z=1; z<MAX; z++) printf("%d-",DP_Bottom_Up(z));
  printf("\n\n");

return 0;}
