#include<bits/stdtr1c++.h>
using namespace std;
int KnapSack(int wt[], int val[], int W, int n){
    if(n==0 || W==0)return 0;

    if(wt[n-1] <= W){
        return max(val[n-1] + KnapSack(wt, val, W-wt[n-1], n-1) , KnapSack(wt, val, W, n-1));
    }
    else if(wt[n-1] > W){
        KnapSack(wt, val, W, n-1);
    }
}
int main(){
    int wt[] ={ 10, 20, 30 } ;
    int val[] = { 60, 100, 120 };
    int W = 50;
    int n = sizeof(wt)/sizeof(wt[0]);
    cout<<KnapSack(wt, val, W, n)<<endl;

}