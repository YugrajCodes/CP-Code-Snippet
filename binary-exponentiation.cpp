
ll binExpo(ll a,ll b){
    ll res = 1;
    while(b>0){
        if(b&1) res = res*a;
        a = a*a;
        b>>=1;
    }
    return res;
}


ll binExpoMod(ll a,ll b, ll m){
    ll res = 1;
    a = a % m;
    while(b>0){
        if(b&1) res = (res*a)%m;
        a = (a*a)%m;
        b>>=1;
    }
    return res;
}
