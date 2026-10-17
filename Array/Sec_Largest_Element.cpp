#include<iostream>
using namespace std;
int SecondLargest(vector<int> &a, int n){
int Largest = a[0];
int sLargest = -1;
for(int i = 0; i < n; i++){
    if(a[i] > Largest){
        sLargest = Largest;
        Largest = a[i];

    }
    else if (a[i] < Largest && a[i] > sLargest){
        sLargest = a[i];
    }
    
}
return sLargest;
}
int main()
{
int n ;
cin>> n;
vector<int> a(n);
for(int i = 0; i < n; i++){
    cin>> a[i];
}

cout<< SecondLargest(a, n) << endl;
return 0;
}
