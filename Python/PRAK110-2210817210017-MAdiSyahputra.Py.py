import math
a=5
t=12
A=a
B=(a*a+t*t)
C=t
keliling=A+math.sqrt(B)+C
luas=A*C/2
print('Diketahui :')
print('Alas=',a,'cm')
print('Tinggi=',t,'cm')
print('Jawab :\n')
print('Sisi A=',A,'cm')
print('Sisi B=',end='')
print('%.0f' % math.sqrt(B),'cm')
print('Sisi C=',C,'cm')
print('Keliing=',end='')
print('%.0f' % keliling,'cm')
print('Luas=luas',end='')
print('%.0f' % luas,'cm')