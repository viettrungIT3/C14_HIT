int GDC(int a, int b) {
    if (b == 0) 
    {
        return a;
    }
    return GDC(b, a % b);
}