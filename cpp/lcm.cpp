int lcm(int a, int b){
    int z=__gcd(a,b);
    return (a*b)/z;
}
