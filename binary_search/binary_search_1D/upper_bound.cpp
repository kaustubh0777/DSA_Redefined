

pair<int, int> getFloorAndCeil(int v[], int n, int x) 
{
    pair<int,int>p;
    p.first=-1;
    p.second=-1;
    
    int low=0;
    int high = n-1;
    int floorm=-1e8;
    int ceilm=1e8;
    
    sort(v,v+n);
    
    while(low<=high)
    {
        int mid=(low+high)/2;
        
        if(v[mid]==x)
        {
            floorm=v[mid];
            ceilm=v[mid];
            break;
        }
        else if(v[mid]>x)
        {
            ceilm=min(ceilm,v[mid]);
            high=mid-1;
        }
        else
        {
            floorm=max(floorm,v[mid]);
            low=mid+1;
        }
        
    }
    
    if(floorm==-1e8)
    {
        floorm=-1;
    }
    if(ceilm==1e8)
    {
        ceilm=-1;
    }
    p.first=floorm;
    p.second=ceilm;
    
    return p;
    // code here
}