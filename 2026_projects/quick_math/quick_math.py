
import time
import random




print("Welcome to - Quick Math")
print("hearts - ❤❤❤")
print("")




hearts = 3


def main (hearts) :

	

	a = random.randint(1,99)
	b = random.randint(1,99)

	c = random.randint(1,4)

	#spocitavanie
	if c==1:
		vysledok = a+b
		print(f"{a} + {b} = ", end="")
	#odcitavanie
	elif c==2:
		vysledok = a-b
		if vysledok <0:
			print(f"{b} - {a} = ",end="")
			vysledok = b-a
		else :
			print(f"{a} - {b} = ",end="")
	#nasobenie
	elif c==3:

		nove_a = int(a//10 +1)
		nove_b = int(b//10 +1)
		vysledok = nove_a*nove_b
		print(f"{nove_a} * {nove_b} = ",end="")
	#delenie
	elif c==4:

		nove_a = int(a//10 +1)
		nove_b = int(b//10 +1)
		vysledok = nove_a/nove_b
		if vysledok <1:
			vysledok = nove_b/nove_a
			print(f"{nove_b} / {nove_a} = ",end="")
		else:
			print(f"{nove_a} / {nove_b} = ",end="")


	pouzivatel_input = int(input())

	if pouzivatel_input == vysledok:
		main(hearts)
	else :
		hearts = hearts-1
		if hearts == 2:
			print("nespravny vysledok ❤❤")
			main(hearts)
		elif hearts == 1:
			print("nespravny vysledok ❤")
			main(hearts)
		elif hearts == 0:
			print("nespravny vysledok - GAME OVER")
			time.sleep(2)
		
	

main(hearts)



