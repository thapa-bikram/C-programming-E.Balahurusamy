 int x,y,z,a;
    printf("Enter the value of three variables\n");
    scanf("%d%d%d",&x,&y,&z);
    printf("The values are x = %d \t, y= %d \t,z= %d \n",x,y,z);
    a=x;
    x=y;
    y=z;
    z=a;
    printf("The values are x = %d \t, y= %d \t,z= %d\n",x,y,z);
    return 0;