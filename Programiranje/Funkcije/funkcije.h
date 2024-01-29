float prebrojavanje(float m)
{
    int br = 0;
    float x;
    while (1 < 2)
    {
        printf("unesi broj\n");
        scanf("%f", &x);
        if (x == 0)
            break;
        if (m == x)
            br++;
    }
    return br;
}