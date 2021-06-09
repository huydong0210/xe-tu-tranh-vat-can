int timDuong(int a[])
{
    int i,j=0;
    int max=a[0];
    for (i=0;i<=3;i++)
        {
            if (max<a[i])
                {
                    max=a[i];
                    j=i;
                }
        }
    return j;
}
int ranDom()
{
    return (int)(rand()%2);
}