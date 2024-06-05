def permutacao(value):
    
    print("NOTAS:")
    
    notas = value / 100;
    print("%d nota(s) de R$ 100.00" % notas)
    value = value % 100
    
    notas = value / 50;
    print("%d nota(s) de R$ 50.00" % notas)
    value = value % 50
    
    notas = value / 20;
    print("%d nota(s) de R$ 20.00" % notas)
    value = value % 20
    
    notas = value / 10;
    print("%d nota(s) de R$ 10.00" % notas)
    value = value % 10
    
    notas = value / 5;
    print("%d nota(s) de R$ 5.00" % notas)
    value = value % 5
    
    notas = value / 2;
    print("%d nota(s) de R$ 2.00" % notas)
    value = value % 2
    
    print("MOEDAS:")
    
    notas = value / 1;
    print("%d moeda(s) de R$ 1.00" % notas)
    value = value % 1
    
    notas = value / 0.5;
    print("%d moeda(s) de R$ 0.50" % notas)
    value = value % 0.5
    
    notas = value / 0.25;
    print("%d moeda(s) de R$ 0.25" % notas)
    value = value % 0.25
    
    notas = value / 0.10;
    print("%d moeda(s) de R$ 0.10" % notas)
    value = value % 0.10
    
    notas = value / 0.05;
    print("%d moeda(s) de R$ 0.05" % notas)
    value = value % 0.05
    
    notas = value / 0.01;
    print("%0.0f moeda(s) de R$ 0.01" % notas)

value = float(input())

if 0 <= value <= 1000000.00:
   permutacao(value)