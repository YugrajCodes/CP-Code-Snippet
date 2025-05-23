
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


/*--------------------------------------
EXPLANATION

lets take pow(3,5)

5 in binary is 101

at each binary digit we calculate corresponding power of 3

index = 1  0  1
power = 4  2  1

if index is zero skip that power of 3
pow(3,4)*pow(3,1)

*/