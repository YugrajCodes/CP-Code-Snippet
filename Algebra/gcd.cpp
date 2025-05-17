
ll gcd(ll a, ll b){
    if(b==0) return a;
    else return gcd(b,a%b);
}


//one line
ll gcd(ll a, ll b){
    return b ? gcd(b,a%b) : a ;
}


//loop

ll gcd(ll a, ll b){
    while(b){
        a = a % b;
        swap(a,b);
    }
    return a;
}



ll lcm(ll a,ll b){
    return a / gcd(a, b) * b;
}