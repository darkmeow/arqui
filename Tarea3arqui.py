class numeros():
	"""Clase para las distintas bases"""
	def __init__(self, valor):
		self.valor = valor
	def tobase(self,valor,base):
		valor=int(valor)
		if (valor<=base):
			if valor >= 10:
				valor = chr(55 + valor)
			return(str(valor))
		else:
			x =(valor%base)
			if (x < 10):
				return  self.tobase( valor / base ,base) + str(x)
			elif (x >= 10):
				return  self.tobase( valor / base,base) + chr(55 + x)
	def numero_decimal(self,base):
		num_dec=self.valor-int(self.valor)
		counter=0
		while (num_dec-int(num_dec))!=0:
			counter+=1
			num_dec=num_dec*10
		num_dec=self.valor-int(self.valor)
		num_final=''
		for i in range(counter,0,-1):
			num_dec=num_dec*base
			valor = int(num_dec)
			if valor>=10:
				valo= chr(55 + valor)
			num_final+=str(valor)
			num_dec=num_dec-int(num_dec)
		return num_final
	def binario(self):
		num_dec=self.numero_decimal(2)
		if num_dec==0:
			return bin(int(self.valor))[2:]
		else:
			return bin(int(self.valor))[2:]+'.'+str(num_dec) 
	def octal(self):
		num_dec=self.numero_decimal(8)
		if num_dec==0:
			return oct(int(self.valor))[1:]
		else:
			return oct(int(self.valor))[1:]+'.'+str(num_dec) 
	def hexadecimal(self):
		num_dec=self.numero_decimal(16)
		if num_dec==0:
			return hex(int(self.valor))[2:]
		else:
			return (hex(int(self.valor))[2:]).upper()+'.'+str(num_dec) 
	def base_6(self):
		num_dec=self.numero_decimal(6)
		if num_dec==0:
			return self.tobase(int(self.valor),6)
		else:
			return self.tobase(int(self.valor),6)+'.'+str(num_dec) 
numero= float(raw_input("ingrese numero a convertir: "))
base=numeros(numero)
print "numero en binario:",base.binario()
print "numero en Octal:",base.octal()
print "numero en hexadecimal:",base.hexadecimal()
print "numero en base 6:",base.base_6()