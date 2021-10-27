class Solution
{
public:
    vector<int> sieveOfEratosthenes(int n)
    {
        int i, j;
        bool arr[n + 1];
        for(i = 0; i < n + 1; i ++)
            arr[i] = true;
            
        arr[0] = arr[1] = false;
        
        for(i = 2; i <= n; i ++)
        {
            if(arr[i] == false)
                continue;
                
            for(j = i + i; j <= n; j += i)
                arr[j] = false;
        }
        
        vector <int> res;
        for(i = 2; i < n + 1; i ++)
            if(arr[i] == true)
                res.push_back(i);
                
        return res;
    }
};
