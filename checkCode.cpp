#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	int z =  100;
	static int* neighbor_count;
	neighbor_count = (int*)malloc(z*sizeof(int));
	int count = 0;
	for(int i=0; i<z; ++i){
		if(!neighbor_count[i]){
			neighbor_count[i] += 1;
			cout<<i<<": "<<neighbor_count[i]<<endl;
			count++;
		}
	}
	cout<<"count: "<<count<<endl;
/*
	std::vector<std::vector<std::vector<int> > > temp_neigh_comm(32, std::vector<std::vector<int> >(16, std::vector<int>(100)));
	int tid = 5;
	for(int ithNode=0; ithNode<16; ithNode++){
		temp_neigh_comm[tid][ithNode].clear();
	}

	int C=100;
	for(int ithNode=0; ithNode<16; ithNode++){
		for(int i=0; i<50; i++){
			temp_neigh_comm[tid][ithNode][i] = C++;
		}
	}
	for(int ithNode=0; ithNode<1; ithNode++){
//		cout<<ithNode<<" size: "<<temp_neigh_comm[tid][ithNode].size()<<endl;
		for(int i : temp_neigh_comm[tid][ithNode]){
			//cout<<ithNode<<" value: "<<i<<endl;
		}
	}
*/
	return 0;
}
