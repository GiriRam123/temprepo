def Karatsuba(x,y):

    if(x<10 and y<10):
        return x*y
    else:
      n = max(len(str(x)),len(str(y))) # n is the no.of even digits.
      power=10**n//2
      power_1=10**n
      a=int(x//power) # Floor division is rounded of to the nearest whole number. 3//2 = 1, 3257 // 100 = 32.
      b=int(x%power) # 3257 % 100 = 57 , 3200/100 + 57 .
      c=int(y//power)
      d=int(y%power)
      s1=Karatsuba(a,c)
      s2=Karatsuba(b,d)
      s3=Karatsuba(a+b,c+d)
      s4=s3-s2-s1 
      s5=s1*(power_1)+s4*(power)+s2
      print(a)
      print(b)
      print(c)
      print(d)
      print(s1)
      print(s2)
      print(s3)
      print(s4)
      print(s5)  
      return s5

print(Karatsuba(3257,1936))