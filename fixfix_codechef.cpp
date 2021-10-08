#include<iostream>

int main(){
	
	int n, k;
	std::cin>>n>>" ">>k;
	
	if(n-k == 1){
		std::cout<<"-1";
	}else if(n == k){
		for(int i=1 ; i<=n ; i++){
			std::cout<<i<<" ";
		}
	}else{
		for(int i=1 ; i<=k ; i++){
			std::cout<<i<<" ";
		}
		for(int i=k+2 ; i<=n ; i++){
			std::cout<<i<<" ";
		}
		std::cout<<k+1;
	}
	return 0;
}
