
    
	// Add your code here
Difference(vector<int>a)
    {
        elements=a;
    }
    void computeDifference()
    {
        sort(elements.begin(),elements.end());
        int ans=elements.back()-elements[0];
        maximumDifference=abs(ans);
    }
