print("Введіть координати точки");
x = float(input("x = ")), 
y = float(input("y = "));
if (x*x + y*y > 4):
    res = 0;
elif (x*y > 0):
    if (abs(x)+abs(y) >= 2):
       res = 1;
    else:
       res = 0;
elif (abs(x)+abs(y) <= 2):
    res = 1;
else:
    res = 0;
if (res):
    print("Точка належить заштрихованій частині");
else:
    print("Точка не належить заштрихованій частині");
