ll extendgcd(ll a,ll b, ll &x, ll &y){
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    
    ll x1,y1;
    ll d = extendgcd(b,a%b,x1,y1);
    x = y1;
    y = x1 - y1*(a/b);
    return d;
}


/*
finds (x,y) such that a*x+b*y = gcd(a,b)
*/