<h1 align="center"> C Programming Practice</h1>

#### Variable decleration `Integer Data Type`:

```c
int main()
{
    int a, b, sum;
    a=20;
    b=40;
    sum = a+b;

    printf("%d", sum);
    printf("%d + %d = %d", a, b, sum);
}
```

- Definations:
  - `int a, b, sum;` Declere Three Variable togather, Can be difined individually.
  - `int` define `integer` data Type.
  - `a=20;` assign value 20 decleraed variable.
  - `int a=20, b=40, sum;` Decleration and Assignment can be done together.
  - `sum = a+b;` The summesion of a and b will be assigned into variable sum.
  - `printf()` Statement Function, Which is used to Print Something Variable Value.
  - `"%d", sum` It has two arguments `%d` Defines here will be a integer variable value.
  - `printf("%d + %d = %d", a, b, sum)` Multiple `%d` defined for multiple integer variable.

#### Variable decleration `Double Data Type`:

- Declere `Real Number` inside integer Datatype:
  - ` int x = 2.34, y=4, z;` This will removes value after`.` This known as type casting. Should be stored inside `double` Data Type.

```c
int main()
{
    int x = 2.34, y=4, z;
    z = x + y;
    printf("%d + %d = %d",x, y, z);   	//Output will be 2 + 4 = 6;

    return 0;
}
```

- Declere `Real Number` inside double Datatype:
  - `double x = 2.34;` This will store Real Number Value.
  - `%lf` is used to print Real Number Variable.

```c
int main()
{
    double d = 2.34, f;
    int e=4;
    f = d + e;
    printf("%lf + %d = %lf",d, e, f); //Output will be 2 + 4 = 6;

    return 0;
}
```

- Get Value From The User.
  - Use`scanf("%d", &m)` this function will receive `integer` value as `m` variable from prompt.

```c
int main()
{
    int m, n, o;
    scanf("%d", &m);
    scanf("%d", &n);
    o = m + n;
    printf("Calculation is : %d" , o);

    return 0;
}
```
