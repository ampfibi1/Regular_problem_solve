#include<iostream>
using namespace std; 

int knapSack(int weight[],int profit[],int n,int capacity){
	int dp[100][100] = {0};
	for(int i=1; i<=n; ++i){
		for(int w=1; w<=capacity; ++w){
			if(weight[i-1]<=w)
				dp[i][w] = max(dp[i-1][w],dp[i-1][w-weight[i-1]]+profit[i-1]);
			else
				dp[i][w] = dp[i-1][w] ; 
		}
	}
	return dp[n][capacity] ; 
}
int main(){
	// Input: weights and profits of items
    int weights[] = {2, 3, 4, 5};
    int profits[] = {3, 4, 5, 6};
    int capacity = 5;
    int n = sizeof(weights) / sizeof(weights[0]);

    // Call the knapsack function and print the result
    cout << "Maximum Profit: " << knapSack(weights, profits, n, capacity) << endl;
    return 0;
}