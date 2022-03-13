#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     
    int n,i=0;
    std::cin>>n;
    int *a= new int[n];
    while(std::cin>>a[i++]);
    while(std::cout<<a[--n]<<' '&& n);
    delete [] a;
    
    return 0;
}
