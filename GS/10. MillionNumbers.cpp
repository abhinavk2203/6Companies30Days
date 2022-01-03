vector<int> solve(vector<int> millions, int k){

	//we need to find K largest numbers out of the array
	//we can create a min heap of size k
	//time complexity -> nlogk
	priority_queue<int, vector<int>, greater<int>> minHeap;
	for(int i=0; i<millions.size(); i++){
		minHeap.push(millions[i]);

		if(minHeap.size() > k){
			minHeap.pop();
		}
	}

	vector<int> res;
	while(!minHeap.empty()){
		res.push_back(minHeap.top());
		minHeap.pop();
	}
	return res;
}